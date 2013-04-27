//
//  SSFollowUserSession.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-6.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ISSClient.h"
#import "EventHandler.h"
#import "AGShareFacade.h"

/**
 *	@brief	关注用户会话
 */
@interface SSFollowUserSession : NSObject
{
@private
    AGShareFacade *_facade;
    id<ISSClient> _client;
    FollowUserEventHandler _followUserResult;
    id _sessionResult;
    NSString *_userName;
    ShareType _type;
    BOOL _autoAuth;
}

/**
 *	@brief	初始化会话
 *
 *	@param 	type 	平台类型
 *  @param  userName    用户名称
 *  @param  autoAuth    自动授权标识
 *	@param 	followUserResult 	关注用户返回事件
 *  @param  sessionResult   会话返回事件
 *
 *	@return	会话对象
 */
- (id)initWithType:(ShareType)type
          userName:(NSString *)userName
          autoAuth:(BOOL)autoAuth
  followUserResult:(FollowUserEventHandler)followUserResult
     sessionResult:(void(^)(SSFollowUserSession *session))sessionResult;

/**
 *	@brief	启动会话
 */
- (void)start;


@end
