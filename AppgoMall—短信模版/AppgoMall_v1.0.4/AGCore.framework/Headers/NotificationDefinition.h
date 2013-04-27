//
//  NotificationDefinition.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-11-3.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#pragma once

#pragma mark - 通知定义

/**
 *	@brief	api调用成功
 */
#define SK_NOTIF_API_CALL_SUCCESS @"apiCallSuccess"

/**
 *	@brief	api调用失败
 */
#define SK_NOTIF_API_CALL_FAILURE @"apiCallFailure"

/**
 *	@brief	启动应用成功
 */
#define SK_NOTIF_STARTUP_APP_SUC @"startupAppSuc"

/**
 *	@brief	启动应用失败
 */
#define SK_NOTIF_STARTUP_APP_FAI @"startupAppFai"

/**
 *	@brief	意向购买成功
 */
#define SK_NOTIF_GO_TO_BUY_SUC @"gotoBuySuc"

/**
 *	@brief	意向购买失败
 */
#define SK_NOTIF_GO_TO_BUY_FAI @"gotoBuyFai"

/**
 *	@brief	分享购买商品成功
 */
#define SK_NOTIF_SHARE_BUY_GOODS_SUC @"shareBuyGoodsSuc"

/**
 *	@brief	分享购买商品失败
 */
#define SK_NOTIF_SHARE_BUY_GOODS_FAI @"shareBuyGoodsFai"

/**
 *	@brief	新浪微博转换长链接为短链接成功
 */
#define SK_NOTIF_SINA_CONVERT_LONG_URL_TO_SHORT_URL_SUC @"sinaConvertLongUrlToShortUrlSuc"

/**
 *	@brief	新浪微博转换长链接为短链接失败
 */
#define SK_NOTIF_SINA_CONVERT_LONG_URL_TO_SHORT_URL_FAI @"sinaConvertLongUrlToShortUrlFai"

/**
 *	@brief	腾讯微博分享内容成功
 */
#define SK_NOTIF_TECENT_WEIBO_PUBLISH_CONTENT_SUC @"tecentWeiboPublishContentSuc"

/**
 *	@brief	腾讯微博分享内容失败
 */
#define SK_NOTIF_TECENT_WEIBO_PUBLISH_CONTENT_FAI @"tecentWeiboPublishContentFai"

#pragma mark - 键名定义

/**
 *	@brief	错误信息
 */
#define SK_NOTIF_KEY_ERROR_INFO @"skkErrorInfo"

/**
 *	@brief	api接口回复数据对象，为NSDictionary类型
 */
#define SK_NOTIF_KEY_RESPONDER @"skkResponder"

/**
 *	@brief	新浪微博用户信息
 */
#define SK_NOTIF_KEY_SINA_WEIBO_USER @"skkSinaUser"

/**
 *	@brief	新浪微博信息
 */
#define SK_NOTIF_KEY_SINA_WEIBO_STATUS @"skkSinaStatus"

/**
 *	@brief	新浪微博链接信息
 */
#define SK_NOTIF_KEY_SINA_WEIBO_URLS @"skkSinaUrls"

/**
 *	@brief	QQ空间用户信息
 */
#define SK_NOTIF_KEY_QQ_LOGIN_USER @"skkSinaUser"

/**
 *	@brief	商品信息
 */
#define SK_NOTIF_KEY_GOODS @"skkGoods"

