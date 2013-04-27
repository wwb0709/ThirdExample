//
//  SSAccountManagerViewController.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-15.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AGShareFacade.h"

/**
 *	@brief	帐号管理视图控制器
 */
@interface SSAccountManagerViewController : UIViewController <UITableViewDataSource,
                                                              UITableViewDelegate>
{
@private
    UITableView *_tableView;
    NSArray *_clients;
    
    AGShareFacade *_facade;
    id _result;
}

/**
 *	@brief	初始化视图控制器
 *
 *	@param 	clients 	尚未授权客户端列表
 *  @param  result  返回事件处理
 *
 *	@return	视图控制器对象
 */
- (id)initWithUnAuthClients:(NSArray *)clients
                     result:(void(^)(NSArray *authClients))result;


@end
