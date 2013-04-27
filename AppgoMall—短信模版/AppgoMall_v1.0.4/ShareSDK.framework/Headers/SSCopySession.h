//
//  SSCopySession.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-6.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ISSClient.h"
#import "ISSPublishContent.h"
#import "EventHandler.h"
#import "AGShareFacade.h"

/**
 *	@brief	拷贝会话
 */
@interface SSCopySession : NSObject
{
@private
    id<ISSClient> _client;
    id<ISSPublishContent> _content;
    
    AGShareFacade *_facade;
    PublishContentEventHandler _publishResult;
    id _sessionResult;
}

/**
 *	@brief	初始化会话
 *
 *	@param 	content 	内容
 *	@param 	publishResult 	发布返回事件处理
 *  @param  sessionResult   会话返回事件处理
 *
 *	@return	会话对象
 */
- (id)initWithContent:(id<ISSPublishContent>)content
        publishResult:(PublishContentEventHandler)publishResult
        sessionResult:(void(^)(SSCopySession *session))sessionResult;

/**
 *	@brief	启动会话
 */
- (void)start;


@end
