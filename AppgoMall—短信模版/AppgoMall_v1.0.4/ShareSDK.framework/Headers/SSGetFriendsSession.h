//
//  SSGetFriendsSession.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-7.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ISSClient.h"
#import "EventHandler.h"
#import "AGShareFacade.h"

/**
 *	@brief	获取关注列表会话
 */
@interface SSGetFriendsSession : NSObject
{
@private
    AGShareFacade *_facade;
    id<ISSClient> _client;
    GetFriendsEventHandler _getFriendsResult;
    id _sessionResult;
    NSInteger _pageNo;
    BOOL _autoAuth;
}

/**
 *	@brief	初始化会话
 *
 *	@param 	client 	客户端对象
 *  @param  userName    用户名称
 *  @param  autoAuth    自动授权
 *	@param 	getFriendResult 	获取关注列表返回事件
 *  @param  sessionResult   会话返回事件
 *
 *	@return	会话对象
 */
- (id)initWithClient:(id<ISSClient>)client
              pageNo:(NSInteger)pageNo
            autoAuth:(BOOL)autoAuth
     getFriendResult:(GetFriendsEventHandler)getFriendResult
       sessionResult:(void(^)(SSGetFriendsSession *session))sessionResult;

/**
 *	@brief	启动会话
 */
- (void)start;

@end
