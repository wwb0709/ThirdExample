//
//  SSPublishSession.h
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
#import "ISSPublishSession.h"
#import "AGShareFacade.h"

/**
 *	@brief	发布内容会话
 */
@interface SSPublishSession : NSObject <ISSPublishSession>
{
@private
    UIViewController *_containerController;
    
    Class _publishViewType;
    id<ISSClient> _client;
    id<ISSPublishContent> _content;
    PublishContentEventHandler _publishResult;
    id _sessionResult;
    
    NSString *_title;
    id _userData;
    AGShareFacade *_facade;
    BOOL _statusBarTips;
    NSArray *_oneKeyShareList;
    BOOL _autoAuth;
    
    NSArray *_clients;
    NSArray *_convertContents;              //转换链接后内容集合
    NSMutableArray *_idArray;
    NSMutableArray *_successRecordArray;
    NSInteger _sessionType;
    
    NSMutableArray *_unauthArray;           //尚未授权的客户端数组
}

/**
 *	@brief	初始化会话
 *
 *  @param  client  客户端对象
 *	@param 	content 	内容
 *  @param  containerController 容器视图
 *  @param  shareViewTitle  分享视图标题
 *  @param  statusBarTips   状态栏提示标识：YES：显示； NO：隐藏
 *  @param  oneKeyShareList 一键显示分享列表
 *  @param  autoAuth    委托自动授权标志
 *	@param 	publishResult 	发布内容返回事件处理
 *  @param  sessionResult   会话返回事件处理
 *  @param  userData    附加数据
 *
 *	@return	会话对象
 */
- (id)initWithClient:(id<ISSClient>)client
             content:(id<ISSPublishContent>)content
     publishViewType:(Class)publishViewType
 containerController:(UIViewController *)containerController
      shareViewTitle:(NSString *)shareViewTitle
       statusBarTips:(BOOL)statusBarTips
     oneKeyShareList:(NSArray *)oneKeyShareList
            autoAuth:(BOOL)autoAuth
       publishResult:(PublishContentEventHandler)publishResult
       sessionResult:(void(^)(SSPublishSession *session))sessionResult
            userData:(id)userData;

/**
 *	@brief	初始化会话
 *
 *	@param 	shareList 	分享类型列表
 *	@param 	content 	分享内容
 *	@param 	statusBarTips 	状态栏提示标识：YES：显示； NO：隐藏
 *	@param 	publishResult 	发布内容返回事件处理
 *  @param  sessionResult   会话返回事件处理
 *
 *	@return	会话对象
 */
- (id)initWithShareList:(NSArray *)shareList
                content:(id<ISSPublishContent>)content
          statusBarTips:(BOOL)statusBarTips
               autoAuth:(BOOL)autoAuth
          publishResult:(PublishContentEventHandler)publishResult
          sessionResult:(void(^)(SSPublishSession *session))sessionResult;


/**
 *	@brief	启动会话
 */
- (void)start;

@end
