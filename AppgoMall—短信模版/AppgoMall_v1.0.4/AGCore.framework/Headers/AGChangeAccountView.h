//
//  AGChangeAccountView.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-12-4.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "AGBaseView.h"
#import "AGLoadingView.h"

/**
 *	@brief	切换帐号视图
 */
@interface AGChangeAccountView : AGBaseView <UITableViewDataSource,
                                             UITableViewDelegate,
                                             UIActionSheetDelegate>
{
@private
    UITableView *_tableView;
    AGLoadingView *_loadingView;
}

@end
