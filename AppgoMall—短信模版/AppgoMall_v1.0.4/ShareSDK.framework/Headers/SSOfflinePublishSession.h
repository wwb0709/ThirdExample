//
//  SSOfflinePublishSession.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13/1/8.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EventHandler.h"
#import "AGShareFacade.h"

/**
 *	@brief	离线分享会话
 */
@interface SSOfflinePublishSession : NSObject
{
@private
    AGShareFacade *_facade;
    NSDictionary *_cache;
    NSInteger _curIndex;
    NSString *_curIdStr;
    NSMutableArray *_sendQueue;
    
    BOOL _statusBarTips;
    BOOL _autoAuth;
    NSMutableArray *_shareList;
    PublishContentEventHandler _publishResult;
    id _sessionResult;
    NSMutableArray *_unauthClients;
    NSMutableArray *_failList;      //用于保存发送失败的ID，等待授权后重发此失败列表中数据
}

/**
 *	@brief	初始化会话
 *
 *	@param 	cache 	缓存数据
 *  @param  statusBarTips   状态栏提示标识
 *  @param  autoAuth    自动授权标志
 *  @param  publishResult   分享返回
 *  @param  sessionResult   会话返回
 *
 *  @return 会话对象
 */
- (id)initWithCacheData:(NSDictionary *)cache
          statusBarTips:(BOOL)statusBarTips
               autoAuth:(BOOL)autoAuth
          publishResult:(PublishContentEventHandler)publishResult
          sessionResult:(void(^)(SSOfflinePublishSession *session))sessionResult;

/**
 *	@brief	启动会话
 */
- (void)start;


@end
