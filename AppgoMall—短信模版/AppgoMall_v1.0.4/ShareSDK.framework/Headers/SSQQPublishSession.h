//
//  SSQQPublishSession.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-6.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ISSClient.h"
#import "ISSPublishContent.h"
#import "EventHandler.h"
#import <QQApi/QQApi.h>
#import "AGShareFacade.h"

/**
 *	@brief	QQ发布内容会话
 */
@interface SSQQPublishSession : NSObject
{
@private
    AGShareFacade *_facade;
    id<ISSClient> _client;
    id<ISSPublishContent> _content;
    PublishContentEventHandler _publishResult;
    id _sessionResult;
    
    BOOL _statusBarTips;
}

/**
 *	@brief	初始化会话
 *
 *	@param 	content 	内容
 *  @param  statusBarTips   状态栏提示
 *	@param 	publishResult 	发布内容返回事件处理
 *  @param  sessionResult   会话返回事件处理
 *
 *	@return	会话对象
 */
- (id)initWithContent:(id<ISSPublishContent>)content
        statusBarTips:(BOOL)statusBarTips
        publishResult:(PublishContentEventHandler)publishResult
        sessionResult:(void(^)(SSQQPublishSession *session))sessionResult;

/**
 *	@brief	变更Session状态
 *
 *	@param 	content 	内容
 *	@param 	statusBarTips 	发布内容返回事件处理
 *	@param 	publishResult 	会话返回事件处理
 *  @param  sessionResult   会话返回事件处理
 *
 */
- (void)changeSessionStateWithContent:(id<ISSPublishContent>)content
                        statusBarTips:(BOOL)statusBarTips
                        publishResult:(PublishContentEventHandler)publishResult
                        sessionResult:(void(^)(SSQQPublishSession *session))sessionResult;


/**
 *	@brief	启动会话
 */
- (void)start;

/**
 *	@brief	结束会话
 *
 *	@param 	message 	消息
 */
- (void)end:(QQApiMessage *)message;


@end
