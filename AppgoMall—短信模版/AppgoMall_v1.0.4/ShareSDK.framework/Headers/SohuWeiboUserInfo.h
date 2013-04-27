//
//  SohuWeiboUserInfo.h
//  SNSServiceSDK
//
//  Created by hower on 12/10/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	搜狐微博用户信息
 */
@interface SohuWeiboUserInfo : NSObject
{
@private
    NSString *_uid;
    NSString *_screenName;
    NSString *_name;
    NSString *_location;
    NSString *_description;
    NSString *_url;
    NSString *_profileImageUrl;
    BOOL _protected;
    NSInteger _followersCount;
    NSString *_profileBackgroundColor;
    NSString *_profileTextColor;
    NSString *_profileLinkColor;
    NSString *_profileSidebarFillColor;
    NSString *_profileSidebarBorderColor;
    NSInteger _friendsCount;
    NSDate *_createdAt;
    NSInteger _favouritesCount;
    NSString *_utcOffset;
    NSString *_timeZone;
    NSString *_profileBackgroundImageUrl;
    NSString *_notifications;
    BOOL _geoEnabled;
    NSInteger _statusesCount;
    BOOL _following;
    BOOL _verified;
    NSString *_lang;
    BOOL _contributorsEnabled;
    
    NSDictionary *_source;
}

/**
 *	@brief	用户ID
 */
@property (nonatomic,copy) NSString *uid;

/**
 *	@brief	昵称
 */
@property (nonatomic,copy) NSString *screenName;

/**
 *	@brief	姓名（未使用，有可能会被作为个性域名使用）
 */
@property (nonatomic,copy) NSString *name;

/**
 *	@brief	地区（暂无）
 */
@property (nonatomic,copy) NSString *location;

/**
 *	@brief	个人简介
 */
@property (nonatomic,copy) NSString *description;

/**
 *	@brief	个人主页（暂无）
 */
@property (nonatomic,copy) NSString *url;

/**
 *	@brief	用户头像
 */
@property (nonatomic,copy) NSString *profileImageUrl;

/**
 *	@brief	勿扰（暂无）
 */
@property (nonatomic) BOOL bProtected;

/**
 *	@brief	粉丝数
 */
@property (nonatomic) NSInteger followersCount;

/**
 *	@brief	背景颜色（暂无）
 */
@property (nonatomic,copy) NSString *profileBackgroundColor;

/**
 *	@brief	文字颜色（暂无）
 */
@property (nonatomic,copy) NSString *profileTextColor;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *profileLinkColor;

/**
 *	@brief	侧栏颜色（暂无）
 */
@property (nonatomic,copy) NSString *profileSidebarFillColor;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *profileSidebarBorderColor;

/**
 *	@brief	关注数
 */
@property (nonatomic) NSInteger friendsCount;


/**
 *	@brief	创建时间
 */
@property (nonatomic,copy) NSDate *createdAt;

/**
 *	@brief	收藏数
 */
@property (nonatomic) NSInteger favouritesCount;

/**
 *	@brief	偏移值（暂无）
 */
@property (nonatomic,copy) NSString *utcOffset;

/**
 *	@brief	时区（暂无）
 */
@property (nonatomic,copy) NSString *timeZone;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *profileBackgroundImageUrl;

/**
 *	@brief	通知（暂无）
 */
@property (nonatomic,copy) NSString *notifications;

/**
 *	@brief	是否支持地理位置
 */
@property (nonatomic) BOOL geoEnabled;

/**
 *	@brief	微博数
 */
@property (nonatomic) NSInteger statusesCount;

/**
 *	@brief	是否关注
 */
@property (nonatomic) BOOL following;

/**
 *	@brief	是否认证
 */
@property (nonatomic) BOOL verified;

/**
 *	@brief	语言
 */
@property (nonatomic,copy) NSString *lang;

/**
 *	@brief	暂无
 */
@property (nonatomic) BOOL contributorsEnabled;

/**
 *	@brief	源数据
 */
@property (nonatomic, retain) NSDictionary *source;


/**
 *	@brief	创建搜狐微博用户信息
 *
 *	@param 	response 	回复对象
 *
 *	@return	用户信息
 */
+ (SohuWeiboUserInfo *)userInfoWithResponse:(NSDictionary *)response;



@end
