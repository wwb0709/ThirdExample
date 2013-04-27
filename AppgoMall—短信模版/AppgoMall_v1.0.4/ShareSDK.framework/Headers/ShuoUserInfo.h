//
//  ShuoUserInfo.h
//  SNSServiceSDK
//
//  Created by hower on 12/13/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	豆瓣社区用户信息
 */
@interface ShuoUserInfo : NSObject
{
@private
    NSString *_id;
    NSString *_uid;
    NSString *_name;
    NSString *_avatar;
    NSString *_alt;
    NSString *_relation;
    NSDate *_created;
    NSString *_locId;
    NSString *_locName;
    NSString *_desc;
    NSString *_largeAvatar;
    NSString *_smallAvatar;
    NSString *_screenName;
    NSString *_type;
    NSString *_signature;
    
    NSDictionary *_source;
}

/**
 *	@brief	用户ID
 */
@property (nonatomic,copy) NSString *Id;

/**
 *	@brief	用户ID
 */
@property (nonatomic,copy) NSString *uid;

/**
 *	@brief	用户昵称
 */
@property (nonatomic,copy) NSString *name;

/**
 *	@brief	头像小图
 */
@property (nonatomic,copy) NSString *avatar;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *alt;

/**
 *	@brief	和当前登录用户的关系，friend或contact
 */
@property (nonatomic,copy) NSString *relation;

/**
 *	@brief	注册时间
 */
@property (nonatomic,retain) NSDate *created;

/**
 *	@brief	城市id
 */
@property (nonatomic,copy) NSString *locId;

/**
 *	@brief	所在地全称
 */
@property (nonatomic,copy) NSString *locName;

/**
 *	@brief	描述
 */
@property (nonatomic,copy) NSString *desc;

/**
 *	@brief	大头像
 */
@property (nonatomic,copy) NSString *largeAvatar;

/**
 *	@brief	小头像
 */
@property (nonatomic,copy) NSString *smallAvatar;

/**
 *	@brief	用户名号
 */
@property (nonatomic,copy) NSString *screenName;

/**
 *	@brief	类型
 */
@property (nonatomic,copy) NSString *type;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *signature;

/**
 *	@brief	源数据
 */
@property (nonatomic, retain) NSDictionary *source;


/**
 *	@brief	创建用户信息
 *
 *	@param 	response 	回复信息
 *
 *	@return	用户信息
 */
+ (ShuoUserInfo *)userInfoWithResponse:(NSDictionary *)response;


@end
