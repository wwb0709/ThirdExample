//
//  SSMailPublishSession.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-6.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ISSClient.h"
#import <MessageUI/MessageUI.h>
#import "EventHandler.h"
#import "ISSPublishContent.h"
#import "AGShareFacade.h"

/**
 *	@brief	邮件分享会话
 */
@interface SSMailPublishSession : NSObject <MFMailComposeViewControllerDelegate>
{
@private
    UIViewController *_containerController;
    
    AGShareFacade *_facade;
    id<ISSClient> _client;
    id<ISSPublishContent> _content;
    PublishContentEventHandler _publishResult;
    id _sessionResult;
}

/**
 *	@brief	初始化邮件分享会话
 *
 *  @param  content 分享内容
 *	@param 	containerController 	容器视图控制器
 *  @param  publishResult   分享返回事件
 *  @param  sessionResult   会话返回事件
 *
 *	@return	分享会话对象
 */
- (id)initWithContent:(id<ISSPublishContent>)content
  containerController:(UIViewController *)containerController
        publishResult:(PublishContentEventHandler)publishResult
        sessionResult:(void(^)(SSMailPublishSession *session))sessionResult;

/**
 *	@brief	开始会话
 */
- (void)start;



@end
