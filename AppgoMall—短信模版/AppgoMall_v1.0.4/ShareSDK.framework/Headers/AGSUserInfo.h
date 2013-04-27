//
//  AGSUserInfo.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 12-12-27.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ISSUserInfo.h"
#import "SinaWeiboUserInfo.h"
#import "QQSpaceUserInfo.h"
#import "TecentWeiboUserInfo.h"
#import "T163WeiboUserInfo.h"
#import "SohuWeiboUserInfo.h"
#import "ShuoUserInfo.h"
#import "RenRenUserInfo.h"
#import "KaiXinUserInfo.h"
#import "ShareType.h"

/**
 *	@brief	用户信息
 */
@interface AGSUserInfo : NSObject <ISSUserInfo>
{
@private
    NSString *_uid;
    NSInteger _gender;
    NSString *_nickname;
    NSString *_icon;
    NSDate *_birthday;
    NSInteger _age;
    NSString *_mobile;
    NSString *_verify;
    NSInteger _verifyType;
    NSString *_url;
    NSInteger _fansCount;
    NSInteger _idolCount;
    NSInteger _statusCount;
    NSInteger _level;
    NSString *_education;
    NSString *_career;
    NSString *_desc;
    NSDictionary *_source;
    
    ShareType _type;
}

/**
 *	@brief	用户ID
 */
@property (nonatomic,copy) NSString *uid;

/**
 *	@brief	性别；0:男 1:女 2:未知
 */
@property (nonatomic) NSInteger gender;

/**
 *	@brief	昵称
 */
@property (nonatomic,copy) NSString *nickname;

/**
 *	@brief	头像
 */
@property (nonatomic,copy) NSString *icon;

/**
 *	@brief	生日
 */
@property (nonatomic,retain) NSDate *birthday;

/**
 *	@brief	年龄
 */
@property (nonatomic) NSInteger age;

/**
 *	@brief	手机号码
 */
@property (nonatomic,copy) NSString *mobile;

/**
 *	@brief	认证信息
 */
@property (nonatomic,copy) NSString *verify;

/**
 *	@brief	认证类型; 0:未认证 1:个人认证 2:企业认证
 */
@property (nonatomic) NSInteger verifyType;

/**
 *	@brief	社区地址
 */
@property (nonatomic,copy) NSString *url;

/**
 *	@brief	粉丝数量
 */
@property (nonatomic) NSInteger fansCount;

/**
 *	@brief	关注数量
 */
@property (nonatomic) NSInteger idolCount;

/**
 *	@brief	微博数量
 */
@property (nonatomic) NSInteger statusCount;

/**
 *	@brief	用户等级
 */
@property (nonatomic) NSInteger level;

/**
 *	@brief	学历
 */
@property (nonatomic,copy) NSString *education;

/**
 *	@brief	职业
 */
@property (nonatomic,copy) NSString *career;

/**
 *	@brief	个人简介
 */
@property (nonatomic,copy) NSString *desc;

/**
 *	@brief	源数据
 */
@property (nonatomic,retain) NSDictionary *source;

/**
 *	@brief	平台类型
 */
@property (nonatomic) ShareType type;


/**
 *	@brief	转换社区用户信息为分享平台用户信息
 *
 *	@param 	userInfo 	社区用户信息
 *
 *	@return	用户信息
 */
+ (AGSUserInfo *)userInfoWithSNSUser:(id)userInfo;

/**
 *	@brief	转换社区用户信息为分享平台用户信息
 *
 *	@param 	response 	社区用户信息
 *	@param 	type 	平台类型
 *
 *	@return	用户信息
 */
+ (AGSUserInfo *)userInfoWithResponse:(NSDictionary *)response type:(ShareType)type;


/**
 *	@brief	转换新浪微博用户信息为分享平台用户信息
 *
 *	@param 	userInfo 	新浪微博用户信息
 *
 *	@return	用户信息
 */
+ (AGSUserInfo *)userInfoWithSinaWeiboUser:(SinaWeiboUserInfo *)userInfo;

/**
 *	@brief	转换QQ空间用户信息为分享平台用户信息
 *
 *	@param 	userInfo 	QQ空间用户信息
 *
 *	@return	用户信息
 */
+ (AGSUserInfo *)userInfoWithQQSpaceUser:(QQSpaceUserInfo *)userInfo;

/**
 *	@brief	转换腾讯微博用户信息为分享平台用户信息
 *
 *	@param 	userInfo 	腾讯微博用户信息
 *
 *	@return	用户信息
 */
+ (AGSUserInfo *)userInfoWithTecentWeibUser:(TecentWeiboUserInfo *)userInfo;

/**
 *	@brief	转换网易微博用户信息为分享平台用户信息
 *
 *	@param 	userInfo 	网易微博用户信息
 *
 *	@return	用户信息
 */
+ (AGSUserInfo *)userInfoWith163User:(T163WeiboUserInfo *)userInfo;

/**
 *	@brief	转换搜狐微博用户信息为分享平台用户信息
 *
 *	@param 	userInfo 	搜狐微博用户信息
 *
 *	@return	用户信息
 */
+ (AGSUserInfo *)userInfoWithSohuUser:(SohuWeiboUserInfo *)userInfo;

/**
 *	@brief	转换豆瓣社区用户信息为分享平台用户信息
 *
 *	@param 	userInfo 	豆瓣社区用户信息
 *
 *	@return	用户信息
 */
+ (AGSUserInfo *)userInfoWithDoubanUser:(ShuoUserInfo *)userInfo;

/**
 *	@brief	转换人人用户信息为分享平台用户信息
 *
 *	@param 	userInfo 	人人用户信息
 *
 *	@return	用户信息
 */
+ (AGSUserInfo *)userInfoWithRenRenUser:(RenRenUserInfo *)userInfo;

/**
 *	@brief	转换开心网用户信息为分享平台用户信息
 *
 *	@param 	userInfo 	开心网用户信息
 *
 *	@return	用户信息
 */
+ (AGSUserInfo *)userInfoWithKaiXinUser:(KaiXinUserInfo *)userInfo;


@end
