//
//  SSNotificationDefinition.h
//  SNSServiceSDK
//
//  Created by hower on 12/10/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#ifndef SNSServiceSDK_SSNotificationDefinition_h
#define SNSServiceSDK_SSNotificationDefinition_h

#pragma mark - 通知

/**
 *	@brief	授权成功
 */
#define SSN_AUTH_SUCCESS @"ssnAuthSuccess"

/**
 *	@brief	授权失败
 */
#define SSN_AUTH_FAIL @"ssnAuthFail"

/**
 *	@brief	授权取消
 */
#define SSN_AUTH_CANCEL @"ssnAuthCancel"

/**
 *	@brief	开始发布内容
 */
#define SSN_PUBLISH_CONTENT_BEGAN @"ssnPublishContentBegan"

/**
 *	@brief	发布内容成功
 */
#define SSN_PUBLISH_CONTENT_SUCCESS @"ssnPublishContentSuccess"

/**
 *	@brief	发布内容失败
 */
#define SSN_PUBLISH_CONTENT_FAIL @"ssnPublishContentFail"

/**
 *	@brief	取消发布内容
 */
#define SSN_PUBLISH_CONTENT_CANCEL @"ssnPublishContentCancel"

/**
 *	@brief	获取用户信息成功
 */
#define SSN_GET_USER_INFO_SUCCESS @"ssnGetUserInfoSuccess"

/**
 *	@brief	获取用户信息失败
 */
#define SSN_GET_USER_INFO_FAIL @"ssnGetUserInfoFail"

/**
 *	@brief	获取其他用户信息成功
 */
#define SSN_GET_OTHER_USER_INFO_SUCCESS @"ssnGetOtherUserInfoSuccess"

/**
 *	@brief	获取其他用户信息失败
 */
#define SSN_GET_OTHER_USER_INFO_FAIL @"ssnGetOtherUserInfoFail"

/**
 *	@brief	关注用户成功
 */
#define SSN_FOLLOW_USER_SUCCESS @"ssnFollowUserSuccess"

/**
 *	@brief	关注用户失败
 */
#define SSN_FOLLOW_USER_FAIL @"ssnFollowUserFail"

/**
 *	@brief	获取关注列表成功
 */
#define SSN_GET_FRIENDS_SUCCESS @"ssnGetFriendsSuccess"

/**
 *	@brief	获取关注列表失败
 */
#define SSN_GET_FRIENDS_FAIL @"ssnGetFriendsFail"


#pragma mark - 参数

/**
 *	@brief	错误信息
 */
#define SSK_ERROR @"sskError"

/**
 *	@brief	微博信息
 */
#define SSK_STATUS @"sskStatus"

/**
 *	@brief	用户信息
 */
#define SSK_USER @"sskUser"

/**
 *	@brief	用户列表
 */
#define SSK_USERS @"sskUsers"

/**
 *	@brief	是否有下一页
 */
#define SSK_HAS_NEXT @"sskHasNext"

/**
 *	@brief	页码
 */
#define SSK_PAGE_NO @"sskPageNo"

/**
 *	@brief	附加数据
 */
#define SSK_USER_DATA @"sskUserData"



#endif
