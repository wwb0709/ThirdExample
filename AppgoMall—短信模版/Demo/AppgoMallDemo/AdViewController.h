//
//  AdViewController.h
//  AppgoMallDemo
//
//  Created by 冯 鸿杰 on 12-12-8.
//  Copyright (c) 2012年 Chen GangQiang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AppgoMall/AppgoMall.h>
#import "EGORefreshTableHeaderView.h"

@interface AdViewController : UITableViewController <EGORefreshTableHeaderDelegate,
                                                     IAGAdViewMediatorDelegate>
{
@private
    id<IAGAdViewMediator> _adViewMediator;
    EGORefreshTableHeaderView *_headerView;
    
    BOOL _refreshData;
}

@end
