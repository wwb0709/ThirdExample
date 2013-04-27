//
//  AdViewController.m
//  AppgoMallDemo
//
//  Created by 冯 鸿杰 on 12-12-8.
//  Copyright (c) 2012年 Chen GangQiang. All rights reserved.
//

#import "AdViewController.h"

@interface AdViewController (Private)

/**
 *	@brief	刷新数据
 */
- (void)refreshData;


@end

@implementation AdViewController

- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self)
    {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    _adViewMediator = [[AppgoMall recommendGoodsTopViewWithViewController:self] retain];
    _adViewMediator.delegate = self;
    self.tableView.tableHeaderView = _adViewMediator.view;
    
    _headerView = [[EGORefreshTableHeaderView alloc] initWithFrame:CGRectMake(0.0f,
                                                                              0.0f - self.tableView.bounds.size.height,
                                                                              self.view.frame.size.width,
                                                                              self.tableView.bounds.size.height)];
    _headerView.delegate = self;
    [self.tableView addSubview:_headerView];
    [_headerView refreshLastUpdatedDate];
    [_headerView release];
}

- (void)dealloc
{
    [_adViewMediator release];
    _adViewMediator = nil;
    
    [super dealloc];
}

- (void)refreshData
{
    [_adViewMediator refreshData];
}

#pragma mark - IAGAdViewMediatorDelegate

- (void)adViewMediatorOnRefreshDataComplete:(id<IAGAdViewMediator>)mediator
{
    _refreshData = NO;
    [_headerView egoRefreshScrollViewDataSourceDidFinishedLoading:self.tableView];
}

- (void)adViewMediatorOnRefreshDataFail:(id<IAGAdViewMediator>)mediator errorInfo:(id<IAGErrorInfo>)errorInfo
{
    _refreshData = NO;
    [_headerView egoRefreshScrollViewDataSourceDidFinishedLoading:self.tableView];
}

#pragma mark - EGORefreshTableHeaderDelegate

- (void)egoRefreshTableHeaderDidTriggerRefresh:(EGORefreshTableHeaderView *)view
{
    _refreshData = YES;
	[self performSelector:@selector(refreshData) withObject:nil];
}

- (BOOL)egoRefreshTableHeaderDataSourceIsLoading:(EGORefreshTableHeaderView *)view
{
    return _refreshData;
}

- (NSDate *)egoRefreshTableHeaderDataSourceLastUpdated:(EGORefreshTableHeaderView *)view
{
    return [NSDate date];
}

#pragma mark - UIScrollViewDelegate

- (void)scrollViewDidScroll:(UIScrollView *)scrollView
{
    
	[_headerView egoRefreshScrollViewDidScroll:scrollView];
}

- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate
{
	[_headerView egoRefreshScrollViewDidEndDragging:scrollView];
}

@end
