//
//  T163WeiboUserInfo.h
//  SNSServiceSDK
//
//  Created by hower on 12/12/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

@class T163WeiboStatusInfo;

/**
 *	@brief	网易微博用户信息
 */
@interface T163WeiboUserInfo : NSObject
{
@private
    NSInteger _columnIdNameWithCounts;
    NSDate *_createdAt;
    NSString *_darenRec;
    NSString *_description;
    NSString *_email;
    NSInteger _favouritesCount;
    NSInteger _followersCount;
    NSInteger _friendsCount;
    NSInteger _gender;
    BOOL _geoEnable;
    NSInteger _icorp;
    NSString *_uid;
    NSArray *_inGroups;
    NSString *_location;
    NSString *_name;
    NSString *_profileImageUrl;
    NSString *_realName;
    NSString *_screenName;
    NSInteger _statusesCount;
    NSString *_sysTag;
    NSString *_url;
    NSString *_userTag;
    BOOL _verified;
    
    T163WeiboStatusInfo *_status;
    
    NSDictionary *_source;
}

/**
 *	@brief	暂无
 */
@property (nonatomic) NSInteger columnIdNameWithCounts;

/**
 *	@brief	用户注册时间 
 */
@property (nonatomic,retain) NSDate *createdAt;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *darenRec;

/**
 *	@brief	用户描述 
 */
@property (nonatomic,copy) NSString *description;

/**
 *	@brief	邮箱地址
 */
@property (nonatomic,copy) NSString *email;

/**
 *	@brief	收藏数
 */
@property (nonatomic) NSInteger favouritesCount;

/**
 *	@brief	被关注数 
 */
@property (nonatomic) NSInteger followersCount;

/**
 *	@brief	关注数
 */
@property (nonatomic) NSInteger friendsCount;

/**
 *	@brief	性别，0为保密，1为男性，2为女性
 */
@property (nonatomic) NSInteger gender;

/**
 *	@brief	暂无
 */
@property (nonatomic) BOOL geoEnable;

/**
 *	@brief	暂无
 */
@property (nonatomic) NSInteger icorp;

/**
 *	@brief	用户ID 
 */
@property (nonatomic,copy) NSString *uid;

/**
 *	@brief	暂无
 */
@property (nonatomic,retain) NSArray *inGroups;

/**
 *	@brief	用户地址
 */
@property (nonatomic,copy) NSString *location;


/**
 *	@brief	用户名称 
 */
@property (nonatomic,copy) NSString *name;

/**
 *	@brief	用户头像URL，最大长度为255
 */
@property (nonatomic,copy) NSString *profileImageUrl;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *realName;

/**
 *	@brief	个性网址
 */
@property (nonatomic,copy) NSString *screenName;

/**
 *	@brief	发微博数
 */
@property (nonatomic) NSInteger statusesCount;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *sysTag;

/**
 *	@brief	个人博客地址 
 */
@property (nonatomic,copy) NSString *url;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *userTag;

/**
 *	@brief	暂无
 */
@property (nonatomic) BOOL verified;

/**
 *	@brief	最新一条微博
 */
@property (nonatomic,retain) T163WeiboStatusInfo *status;

/**
 *	@brief	源数据结构
 */
@property (nonatomic, retain) NSDictionary *source;


/**
 *	@brief	创建用户信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	用户信息
 */
+ (T163WeiboUserInfo *)userInfoWithResponse:(NSDictionary *)response;


@end
