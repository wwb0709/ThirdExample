//
//  IOAuth2ClientDelegate.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12-10-13.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "AGCommon/IEventDispatcher.h"
#import "ShareType.h"
#import "UserParamType.h"

/**
 *	@brief	OAuth2客户端接口
 */
@protocol ISSClient <IEventDispatcher>

@required

/**
 *	@brief	获取社会化平台类型
 *
 *	@return	社会化平台类型
 */
- (ShareType)type;


/**
 *	@brief	授权
 */
- (void)authorize;

/**
 *	@brief	注销登录
 */
- (void)logout;

/**
 *	@brief	判断是否授权。此方法只作本地维护状态进行对比。实际过期时间有服务器决定。
 *
 *	@return	YES表示已经授权，NO表示未进行授权或授权失败。
 */
- (BOOL)hasAuthorized;

/**
 *	@brief	获取用户信息,需要先通过授权验证
 */
- (void)getUserInfo;

/**
 *	@brief	获取用户信息
 *
 *	@param 	uid 	用户ID或者用户昵称
 *	@param 	paramType 	参数类型
 */
- (void)getUserInfoWithUid:(NSString *)uid
                 paramType:(UserParamType)paramType;


/**
 *	@brief	发布内容
 *
 *	@param 	content 	内容
 *  @param  userData    附加数据，在通知返回时此值一起返回
 */
- (void)publishContent:(NSString *)content userData:(id)userData;

/**
 *	@brief	发布内容
 *
 *	@param 	content 	内容
 *	@param 	image 	图片
 *  @param  imageQuality 图片质量
 *  @param  userData    附加数据，在通知返回时此值一起返回
 */
- (void)publishContent:(NSString *)content image:(UIImage *)image imageQuality:(CGFloat)imageQuality userData:(id)userData;

/**
 *	@brief	关注用户
 *
 *	@param 	uid 	用户ID
 */
- (void)followUser:(NSString *)uid;

/**
 *	@brief	获取用户关注列表
 *  
 *  @param  pageNo  页码
 */
- (void)getFriendsWithPageNo:(NSInteger)pageNo;


@end
