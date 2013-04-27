//
//  AGUserInfo.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-12-4.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	用户信息
 */
@interface AGUserInfo : NSObject
{
@private
    NSString *_account;
    NSString *_nickname;
    NSString *_icon;
    NSInteger _gender;
    NSInteger _age;
    NSString *_mobile;
    NSInteger _snsType;
    NSString *_authDesc;
    NSString *_weiboUrl;
}

/**
 *	@brief	帐号
 */
@property (nonatomic, copy) NSString *account;

/**
 *	@brief	昵称
 */
@property (nonatomic, copy) NSString *nickname;

/**
 *	@brief	头像
 */
@property (nonatomic, copy) NSString *icon;

/**
 *	@brief	性别
 */
@property (nonatomic) NSInteger gender;

/**
 *	@brief	年龄
 */
@property (nonatomic) NSInteger age;

/**
 *	@brief	手机号码
 */
@property (nonatomic, copy) NSString *mobile;

/**
 *	@brief	社区类型
 */
@property (nonatomic) NSInteger snsType;

/**
 *	@brief	授权描述
 */
@property (nonatomic, copy) NSString *authDesc;

/**
 *	@brief	微博地址
 */
@property (nonatomic, copy) NSString *weiboUrl;


/**
 *	@brief  创建用户信息
 *
 *	@param 	dict 	字典数据对象
 *
 *	@return	用户信息
 */
+ (AGUserInfo *)userInfoWithDict:(NSDictionary *)dict;

@end
