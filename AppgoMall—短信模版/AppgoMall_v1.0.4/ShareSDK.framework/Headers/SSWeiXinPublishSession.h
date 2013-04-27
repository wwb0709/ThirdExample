//
//  SSWeiXinPublishSession.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-6.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ShareType.h"
#import "ISSClient.h"
#import "ISSPublishContent.h"
#import "EventHandler.h"
#import "AGShareFacade.h"

/**
 *	@brief	微信发布内容会话
 */
@interface SSWeiXinPublishSession : NSObject
{
@private
    NSInteger _scene;
    id<ISSClient> _client;
    id<ISSPublishContent> _content;
    BOOL _statusBarTips;
    AGShareFacade *_facade;
    
    PublishContentEventHandler _publishResult;
    id _sessionResult;
}

/**
 *	@brief	初始化会话
 *
 *	@param 	scene 	微信分享类型，0 好友，1 朋友圈
 *	@param 	content 	内容
 *  @param  statusBarTips    状态栏提示
 *	@param 	publishResult 	发布内容返回事件处理
 *  @param  sessionResult   会话返回事件处理
 *
 *	@return	会话对象
 */
- (id)initWithScene:(NSInteger)scene
            content:(id<ISSPublishContent>)content
      statusBarTips:(BOOL)statusBarTips
      publishResult:(PublishContentEventHandler)publishResult
      sessionResult:(void(^)(SSWeiXinPublishSession *session))sessionResult;

/**
 *	@brief	更改会话状态
 *
 *	@param 	scene 	微信分享类型，0 好友，1 朋友圈
 *	@param 	content 	内容
 *	@param 	statusBarTips 	状态栏提示
 *	@param 	publishResult 	发布内容返回事件处理
 *  @param  sessionResult   会话返回事件处理
 */
- (void)changeSessionStateWithScene:(NSInteger)scene
                            content:(id<ISSPublishContent>)content
                      statusBarTips:(BOOL)statusBarTips
                      publishResult:(PublishContentEventHandler)publishResult
                      sessionResult:(void(^)(SSWeiXinPublishSession *session))sessionResult;


/**
 *	@brief	启动会话
 */
- (void)start;

/**
 *	@brief	结束会话
 *
 *	@param 	response 	回复数据
 */
- (void)end:(id)response;

@end
