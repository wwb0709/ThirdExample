//
//  IUserInfo.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12-11-10.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	用户信息接口
 */
@protocol ISSUserInfo <NSObject>

@required

/**
 *	@brief	获取用户ID
 *
 *	@return	用户ID
 */
- (NSString *)uid;

/**
 *	@brief	获取性别；0:男 1:女 2:未知
 *
 *	@return	性别
 */
- (NSInteger)gender;

/**
 *	@brief	获取昵称
 *
 *	@return	昵称
 */
- (NSString *)nickname;

/**
 *	@brief	获取头像
 *
 *	@return	头像
 */
- (NSString *)icon;

/**
 *	@brief	获取生日
 *
 *	@return	生日
 */
- (NSDate *)birthday;

/**
 *	@brief	获取年龄
 *
 *	@return	年龄
 */
- (NSInteger)age;

/**
 *	@brief	获取手机号码
 *
 *	@return	手机号码
 */
- (NSString *)mobile;

/**
 *	@brief	获取认证信息
 *
 *	@return	认证信息
 */
- (NSString *)verify;

/**
 *	@brief	获取认证类型
 *
 *	@return	认证类型
 */
- (NSInteger)verifyType;

/**
 *	@brief	获取社区地址
 *
 *	@return	社区地址
 */
- (NSString *)url;

/**
 *	@brief	获取粉丝数量
 *
 *	@return	粉丝数量
 */
- (NSInteger)fansCount;

/**
 *	@brief	获取关注数量
 *
 *	@return	关注数量
 */
- (NSInteger)idolCount;

/**
 *	@brief	获取微博数量
 *
 *	@return	微博数量
 */
- (NSInteger)statusCount;

/**
 *	@brief	获取用户等级
 *
 *	@return	用户等级
 */
- (NSInteger)level;

/**
 *	@brief	获取学历信息
 *
 *	@return	学历
 */
- (NSString *)education;

/**
 *	@brief	获取职业信息
 *
 *	@return	职业
 */
- (NSString *)career;

/**
 *	@brief	获取个人描述
 *
 *	@return	个人描述
 */
- (NSString *)desc;

/**
 *	@brief	获取源用户信息数据，此属性根据不同平台取得的用户信息结构不相同，详细请参考官方API文档描述。
 *
 *	@return	源用户信息数据
 */
- (NSDictionary *)source;


@end
