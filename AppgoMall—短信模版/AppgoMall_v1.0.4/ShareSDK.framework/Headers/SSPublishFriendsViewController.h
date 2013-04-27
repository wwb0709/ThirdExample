//
//  SSPublishFriendsViewController.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-7.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ISSClient.h"
#import "AGSUserInfo.h"
#import "CMRefreshTableHeaderView.h"

/**
 *	@brief	好友列表视图控制器
 */
@interface SSPublishFriendsViewController : UIViewController <UITableViewDataSource,
                                                              UITableViewDelegate,
                                                              UISearchBarDelegate, 
                                                              UISearchDisplayDelegate,
                                                              CMRefreshTableHeaderDelegate>
{
@private
    UITableView *_tableView;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchController;
    CMRefreshTableHeaderView *_refreshHeaderView;
    
    id<ISSClient> _client;
    NSMutableDictionary *_friendsDict;
    NSMutableArray *_originData;
    NSMutableArray *_keysArray;
    NSMutableArray *_originRecentList;
    NSMutableArray *_recentList;
    
    NSInteger _prevPageNo;
    BOOL _hasNext;
    NSInteger _clientType;
    NSInteger _tryCount;
    BOOL _refreshData;
    
    BOOL _isSearch;
    NSMutableArray *_searchDataSource;
    
    id _onSelected;
}

/**
 *	@brief	初始化视图控制器
 *
 *	@param 	client 	客户端对象
 *  @param  onSelected  选中用户信息
 *
 *	@return	视图控制器
 */
- (id)initWithClient:(id<ISSClient>)client
          onSelected:(void(^)(AGSUserInfo *userInfo))onSelected;


@end
