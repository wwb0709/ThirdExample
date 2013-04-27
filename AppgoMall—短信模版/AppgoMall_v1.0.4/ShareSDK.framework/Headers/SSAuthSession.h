//
//  SSAuthSession.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-6.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EventHandler.h"
#import "ISSClient.h"

/**
 *	@brief	授权会话
 */
@interface SSAuthSession : NSObject
{
@private
    AuthEventHandler _result;
    id<ISSClient> _client;
    
    id _sessionBlock;
}

/**
 *	@brief	初始化授权会话
 *
 *	@param 	client 	社会化平台客户端
 *	@param 	authResult 	授权返回事件处理
 *  @param  sessionResult    会话返回处理
 *
 *	@return	授权会话
 */
- (id)initWithClient:(id<ISSClient>)client
          authResult:(AuthEventHandler)authResult
        sessionResult:(void(^)(SSAuthSession *session))sessionResult;

/**
 *	@brief	启动会话
 */
- (void)start;

@end
