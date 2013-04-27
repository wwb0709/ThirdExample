//
//  SSUserInfo.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12-10-13.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ISSUserInfo.h"

@class SinaWeiboStatusInfo;

/**
 *	@brief	用户信息
 */
@interface SinaWeiboUserInfo : NSObject
{
@private
    NSString *_uid;
    NSString *_screenName;
    NSString *_name;
    NSInteger _province;
    NSInteger _city;
    NSString *_location;
    NSString *_description;
    NSString *_url;
    NSString *_profileImageUrl;
    NSString *_profileUrl;
    NSString *_domain;
    NSString *_weihao;
    NSString *_gender;
    NSInteger _followersCount;
    NSInteger _friendsCount;
    NSInteger _statusesCount;
    NSInteger _favouritesCount;
    NSString *_createAt;
    BOOL _following;
    BOOL _allowAllActMsg;
    BOOL _geoEnabled;
    BOOL _verified;
    NSInteger _verifiedType;
    NSString *_remark;
    SinaWeiboStatusInfo *_latestStatus;
    BOOL _allowAllComment;
    NSString *_avatarLarge;
    NSString *_verifiedReason;
    BOOL _followMe;
    NSInteger _onlineStatus;
    NSInteger _biFollowersCount;
    NSString *_lang;
    
    NSDictionary *_source;
}

/**
 *	@brief	字符串型的用户UID
 */
@property (nonatomic,copy) NSString *uid;

/**
 *	@brief	用户昵称
 */
@property (nonatomic,copy) NSString *screenName;

/**
 *	@brief	友好显示名称
 */
@property (nonatomic,copy) NSString *name;

/**
 *	@brief	用户所在省级ID
 */
@property (nonatomic) NSInteger province;

/**
 *	@brief	用户所在城市ID
 */
@property (nonatomic) NSInteger city;

/**
 *	@brief	用户所在地
 */
@property (nonatomic,copy) NSString *location;

/**
 *	@brief	用户个人描述
 */
@property (nonatomic,copy) NSString *description;

/**
 *	@brief	用户博客地址
 */
@property (nonatomic,copy) NSString *url;

/**
 *	@brief	用户头像地址，50×50像素
 */
@property (nonatomic,copy) NSString *profileImageUrl;

/**
 *	@brief	用户的微博统一URL地址
 */
@property (nonatomic,copy) NSString *profileUrl;

/**
 *	@brief	用户的个性化域名
 */
@property (nonatomic,copy) NSString *domain;

/**
 *	@brief	用户的微号
 */
@property (nonatomic,copy) NSString *weihao;

/**
 *	@brief	性别，m：男、f：女、n：未知
 */
@property (nonatomic,copy) NSString *gender;

/**
 *	@brief	粉丝数
 */
@property (nonatomic) NSInteger followersCount;

/**
 *	@brief	关注数
 */
@property (nonatomic) NSInteger friendsCount;

/**
 *	@brief	微博数
 */
@property (nonatomic) NSInteger statusesCount;

/**
 *	@brief	收藏数
 */
@property (nonatomic) NSInteger favouritesCount;

/**
 *	@brief	用户创建（注册）时间
 */
@property (nonatomic,copy) NSString *createAt;

/**
 *	@brief	暂未支持
 */
@property (nonatomic) BOOL following;

/**
 *	@brief	是否允许所有人给我发私信，true：是，false：否
 */
@property (nonatomic) BOOL allowAllActMsg;

/**
 *	@brief	是否允许标识用户的地理位置，true：是，false：否
 */
@property (nonatomic) BOOL geoEnabled;

/**
 *	@brief	是否是微博认证用户，即加V用户，true：是，false：否
 */
@property (nonatomic) BOOL verified;

/**
 *	@brief	暂未支持
 */
@property (nonatomic) NSInteger verifiedType;

/**
 *	@brief	用户备注信息，只有在查询用户关系时才返回此字段
 */
@property (nonatomic,copy) NSString *remark;

/**
 *	@brief	用户的最近一条微博信息字段
 */
@property (nonatomic,retain) SinaWeiboStatusInfo *latestStatus;

/**
 *	@brief	是否允许所有人对我的微博进行评论，true：是，false：否
 */
@property (nonatomic) BOOL allowAllComment;

/**
 *	@brief	用户大头像地址
 */
@property (nonatomic,copy) NSString *avatarLarge;

/**
 *	@brief	认证原因
 */
@property (nonatomic,copy) NSString *verifiedReason;

/**
 *	@brief	该用户是否关注当前登录用户，true：是，false：否
 */
@property (nonatomic,) BOOL followMe;

/**
 *	@brief	用户的在线状态，0：不在线、1：在线
 */
@property (nonatomic) NSInteger onlineStatus;

/**
 *	@brief	用户的互粉数
 */
@property (nonatomic) NSInteger biFollowersCount;

/**
 *	@brief	用户当前的语言版本，zh-cn：简体中文，zh-tw：繁体中文，en：英语
 */
@property (nonatomic,copy) NSString *lang;

/**
 *	@brief	源数据
 */
@property (nonatomic, retain) NSDictionary *source;


/**
 *	@brief	创建用户信息
 *
 *	@param 	response 	服务器返回数据
 *
 *	@return	用户信息对象
 */
+ (SinaWeiboUserInfo *)userInfoWithResponse:(NSDictionary *)response;



@end
