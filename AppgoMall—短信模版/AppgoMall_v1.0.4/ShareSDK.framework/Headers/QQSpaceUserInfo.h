//
//  QQUserInfo.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12-11-10.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	QQ空间用户信息
 */
@interface QQSpaceUserInfo : NSObject
{
@private
    NSString *_uid;
    NSString *_nickname;
    NSString *_figureurl;
    NSString *_figureurl1;
    NSString *_figureurl2;
    NSString *_gender;
    BOOL _isYellowYearVip;
    BOOL _vip;
    NSInteger _level;
    
    NSDictionary *_source;
}

/**
 *	@brief	用户ID
 */
@property (nonatomic,copy) NSString *uid;

/**
 *	@brief	昵称
 */
@property (nonatomic,copy) NSString *nickname;

/**
 *	@brief	大小为30×30像素的头像URL
 */
@property (nonatomic,copy) NSString *figureurl;

/**
 *	@brief	大小为50×50像素的头像URL
 */
@property (nonatomic,copy) NSString *figureurl1;

/**
 *	@brief	大小为100×100像素的头像URL
 */
@property (nonatomic,copy) NSString *figureurl2;

/**
 *	@brief	性别,如果获取不到则默认返回“男”
 */
@property (nonatomic,copy) NSString *gender;

/**
 *	@brief	标识是否为年费黄钻用户（NO：不是； YES：是）
 */
@property (nonatomic) BOOL isYellowYearVip;

/**
 *	@brief	标识用户是否为黄钻用户（NO：不是；YES：是）
 */
@property (nonatomic) BOOL vip;

/**
 *	@brief	黄钻等级
 */
@property (nonatomic) NSInteger level;

/**
 *	@brief	源数据结构
 */
@property (nonatomic, retain) NSDictionary *source;

/**
 *	@brief	创建用户信息
 *
 *	@param 	response 	服务器返回数据
 *
 *	@return	用户信息对象
 */
+ (QQSpaceUserInfo *)userInfoWithResponse:(NSDictionary *)response;

@end
