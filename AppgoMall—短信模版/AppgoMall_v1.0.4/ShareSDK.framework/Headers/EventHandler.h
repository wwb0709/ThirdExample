//
//  EventHandler.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 12-12-27.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "ISSStatusInfo.h"
#import "ISSUserInfo.h"
#import "AGCommon/ICMErrorInfo.h"
#import "ShareType.h"

#ifndef AppgoFramework_EventHandler_h
#define AppgoFramework_EventHandler_h

/**
 *	@brief	授权状态
 */
typedef enum
{
	SSAuthStateCancel = 0, /**< 取消 */
	SSAuthStateSuccess = 1, /**< 成功 */
	SSAuthStateFail = 2 /**< 失败 */
}
SSAuthState;


/**
 *	@brief	发布内容状态
 */
typedef enum
{
	SSPublishContentStateBegan = 0, /**< 开始 */
	SSPublishContentStateSuccess = 1, /**< 成功 */
	SSPublishContentStateFail = 2, /**< 失败 */
	SSPublishContentStateCancel = 3 /**< 取消 */
}
SSPublishContentState;


/**
 *	@brief	授权事件处理器
 *
 *  @param  state  授权状态
 *  @param  error   授权失败的错误信息,仅当result为2时有效
 */
typedef void(^AuthEventHandler) (SSAuthState state, id<ICMErrorInfo> error);

/**
 *	@brief	获取用户信息事件处理器
 *
 *  @param  result  回复标识，YES：获取成功，NO：获取失败
 *  @param  userInfo     用户信息
 *  @param  error   获取失败的错误信息
 */
typedef void(^GetUserInfoEventHandler) (BOOL result, id<ISSUserInfo> userInfo, id<ICMErrorInfo> error);

/**
 *	@brief	分享内容事件处理器
 *
 *  @param  type    平台类型
 *  @param  state  发布内容状态
 *  @param  statusInfo  分享信息
 *  @param  error   分享内容失败的错误信息
 *  @param  end     分享完毕标志，对于单个平台分享此值为YES，对于多个分享平台此值在最后一个平台分享完毕后为YES。
 */
typedef void(^PublishContentEventHandler) (ShareType type, SSPublishContentState state, id<ISSStatusInfo> statusInfo, id<ICMErrorInfo> error, BOOL end);

/**
 *	@brief	关注用户事件处理器
 *
 *  @param  result  回复标识，YES：关注成功，NO：关注失败
 *  @param  userInfo  用户信息
 *  @param  error   关注失败的错误信息
 */
typedef void(^FollowUserEventHandler) (BOOL result, id<ISSUserInfo> userInfo, id<ICMErrorInfo> error);

/**
 *	@brief	获取关注列表处理器
 *
 *  @param  result  回复标志，YES：获取成功， NO：获取失败
 *  @param  users   用户信息列表
 *  @param  hasNext 是否有更多数据
 *  @param  error   错误信息
 */
typedef void(^GetFriendsEventHandler) (BOOL result, NSArray *users, BOOL hasNext, id<ICMErrorInfo> error);


#endif
