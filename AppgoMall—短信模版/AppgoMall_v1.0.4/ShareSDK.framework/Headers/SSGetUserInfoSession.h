//
//  SSGetUserInfoSession.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-6.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ISSClient.h"
#import "EventHandler.h"
#import "UserParamType.h"
#import "AGShareFacade.h"

/**
 *	@brief	获取用户信息会话
 */
@interface SSGetUserInfoSession : NSObject
{
@private
    AGShareFacade *_facade;
    id<ISSClient> _client;
    BOOL _autoAuth;
    NSString *_uid;
    UserParamType _paramType;
    
    GetUserInfoEventHandler _getInfoResult;
    id _sessionResult;
}

/**
 *	@brief	初始化会话
 *
 *	@param 	client 	客户端对象
 *  @param  getInfoResult   获取信息返回事件
 *  @param  sessionResult   会话返回事件
 *
 *	@return	会话对象
 */
- (id)initWithClient:(id<ISSClient>)client
            autoAuth:(BOOL)autoAuth
       getInfoResult:(GetUserInfoEventHandler)getInfoResult
       sessionResult:(void(^)(SSGetUserInfoSession *session))sessionResult;

/**
 *	@brief	初始化会话
 *
 *	@param 	client 	客户端对象
 *	@param 	uid 	用户ID
 *	@param 	paramType 	参数类型
 *	@param 	autoAuth 	自动授权
 *	@param 	getInfoResult 	获取信息返回事件
 *  @param  sessionResult   获取会话返回事件
 *
 *	@return	会话对象
 */
- (id)initWithClient:(id<ISSClient>)client
                 uid:(NSString *)uid
           paramType:(UserParamType)paramType
            autoAuth:(BOOL)autoAuth
       getInfoResult:(GetUserInfoEventHandler)getInfoResult
       sessionResult:(void(^)(SSGetUserInfoSession *session))sessionResult;


/**
 *	@brief	启动会话
 */
- (void)start;

@end
