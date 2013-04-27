//
//  ThirdViewController.m
//  AppgoMallDemo
//
//  官方网站：http://www.appgo.cn
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "ThirdViewController.h"


@interface ThirdViewController ()

@end

@implementation ThirdViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        self.title = NSLocalizedString(@"功能c", @"功能c");
        self.tabBarItem.image = [UIImage imageNamed:@"PGCategoryIcon"];
        
//        UISegmentedControl *segmentedControl = [[UISegmentedControl alloc] initWithItems:
//                                                [NSArray arrayWithObjects:
//                                                 @"视图1",
//                                                 @"视图2",
//                                                 @"商城",
//                                                 nil]];
//        self.navigationItem.titleView = segmentedControl;
//        segmentedControl.segmentedControlStyle = UISegmentedControlStyleBar;
//        segmentedControl.frame = CGRectMake(0.0, 0.0, 200, 30);
//        [segmentedControl addTarget:self action:@selector(changeValueHandler:) forControlEvents:UIControlEventValueChanged];
//        [segmentedControl release];
    }
    return self;
}

- (void)dealloc
{
    _recommendView = nil;
    
    [super dealloc];
}

- (void)loadView
{
    [super loadView];
    
    self.navigationController.navigationBar.barStyle = UIBarStyleBlackOpaque;
    self.view.backgroundColor = [UIColor whiteColor];
    
    UITableView *tableView = [[[UITableView alloc] initWithFrame:CGRectMake(0.0, 0.0, self.view.frame.size.width, self.view.frame.size.height) style:UITableViewStylePlain] autorelease];
    tableView.autoresizingMask = UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleWidth;
    [self.view addSubview:tableView];
}

- (void)changeValueHandler:(UISegmentedControl *)sender
{
//    switch (sender.selectedSegmentIndex)
//    {
//        case 2:
//            if (_recommendView == nil)
//            {
//                _recommendView = [AppgoMall recommendGoodsViewWithFrame:CGRectMake(0.0, 0.0, self.view.frame.size.width, self.view.frame.size.height) style:SKRecommendGoodsViewStyleListX2 pageSize:60];
//                _recommendView.autoresizingMask = UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleWidth;
//                [self.view addSubview:_recommendView];
//            }
//            _recommendView.hidden = NO;
//            
//            break;
//        default:
//            _recommendView.hidden = YES;
//            break;
//    }
}

@end
