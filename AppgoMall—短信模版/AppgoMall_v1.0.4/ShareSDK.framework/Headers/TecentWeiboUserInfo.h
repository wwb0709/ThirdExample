//
//  TecentWeiboUserInfo.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 12-12-26.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TecentWeiboStatusInfo.h"

/**
 *	@brief	用户信息
 */
@interface TecentWeiboUserInfo : NSObject
{
    NSInteger _birthDay; 
    NSInteger _birthMonth; 
    NSInteger _birthYear; 
    NSString *_cityCode;
    NSArray *_comp;       
    NSString *_countryCode;
    NSArray *_edu;        
    NSString *_email;     
    NSInteger _exp;        
    NSInteger _fansnum;     
    NSInteger _favnum;     
    NSString *_head;        
    NSString *_homecityCode;
    NSString *_homecountryCode;
    NSString *_homepage;       
    NSString *_homeprovinceCode;
    NSString *_hometownCode;
    NSInteger _idolnum;        
    NSInteger _industryCode;   
    NSString *_introduction;   
    BOOL _isent;               
    BOOL _ismyblack;           
    BOOL _ismyfans;             
    BOOL _ismyidol;            
    NSInteger _isrealname;          
    BOOL _isvip;               
    NSInteger _level;           
    NSString *_location;        
    NSInteger _mutualFansNum;  
    NSString *_name;           
    NSString *_nick;            
    NSString *_openid;          
    NSString *_provinceCode;
    NSTimeInterval _regtime;   
    NSInteger _sendPrivateFlag;    
    NSInteger _sex;             
    NSArray *_tag;              
    NSArray *_tweetinfo;
    NSInteger _tweetnum;        
    NSString *_verifyinfo;
    
    NSDictionary *_source;
}

/**
 *	@brief	出生天
 */
@property (nonatomic) NSInteger birthDay;

/**
 *	@brief	出生月
 */
@property (nonatomic) NSInteger birthMonth;

/**
 *	@brief	出生年
 */
@property (nonatomic) NSInteger birthYear;

/**
 *	@brief	城市id
 */
@property (nonatomic,copy) NSString *cityCode;

/**
 *	@brief	职业信息
 */
@property (nonatomic, retain) NSArray *comp;

/**
 *	@brief	国家id
 */
@property (nonatomic,copy) NSString *countryCode;

/**
 *	@brief	教育信息
 */
@property (nonatomic, retain) NSArray *edu;

/**
 *	@brief	邮箱
 */
@property (nonatomic, copy) NSString *email;

/**
 *	@brief	经验值
 */
@property (nonatomic) NSInteger exp;

/**
 *	@brief	听众数
 */
@property (nonatomic) NSInteger fansnum;

/**
 *	@brief	收藏数
 */
@property (nonatomic) NSInteger favnum;

/**
 *	@brief	头像url
 */
@property (nonatomic,copy) NSString *head;

/**
 *	@brief	家乡所在城市id
 */
@property (nonatomic,copy) NSString *homecityCode;

/**
 *	@brief	家乡所在国家id
 */
@property (nonatomic,copy) NSString *homecountryCode;

/**
 *	@brief	个人主页
 */
@property (nonatomic,copy) NSString *homepage;

/**
 *	@brief	家乡所在省id
 */
@property (nonatomic,copy) NSString *homeprovinceCode;

/**
 *	@brief	家乡所在城镇id
 */
@property (nonatomic,copy) NSString *hometownCode;

/**
 *	@brief	收听的人数
 */
@property (nonatomic) NSInteger idolnum;

/**
 *	@brief	行业id
 */
@property (nonatomic) NSInteger industryCode;

/**
 *	@brief	个人介绍
 */
@property (nonatomic, copy) NSString *introduction;

/**
 *	@brief	是否企业机构
 */
@property (nonatomic) BOOL isent;

/**
 *	@brief	是否在当前用户的黑名单中，0-不是，1-是
 */
@property (nonatomic) BOOL ismyblack;

/**
 *	@brief	是否是当前用户的听众，0-不是，1-是
 */
@property (nonatomic) BOOL ismyfans;

/**
 *	@brief	是否是当前用户的偶像，0-不是，1-是
 */
@property (nonatomic) BOOL ismyidol;

/**
 *	@brief	是否实名认证，1-已实名认证，2-未实名认证
 */
@property (nonatomic) NSInteger isrealname;

/**
 *	@brief	是否认证用户，0-不是，1-是
 */
@property (nonatomic) BOOL isvip;

/**
 *	@brief	微博等级
 */
@property (nonatomic) NSInteger level;

/**
 *	@brief	所在地
 */
@property (nonatomic, copy) NSString *location;

/**
 *	@brief	互听好友数
 */
@property (nonatomic) NSInteger mutualFansNum;

/**
 *	@brief	用户帐户名
 */
@property (nonatomic, copy) NSString *name;

/**
 *	@brief	用户昵称
 */
@property (nonatomic, copy) NSString *nick;

/**
 *	@brief	用户唯一id，与name相对应
 */
@property (nonatomic,copy) NSString *openid;

/**
 *	@brief	地区id
 */
@property (nonatomic,copy) NSString *provinceCode;

/**
 *	@brief	注册时间
 */
@property (nonatomic) NSTimeInterval regtime;

/**
 *	@brief	是否允许所有人给当前用户发私信，0-仅有偶像，1-名人+听众，2-所有人
 */
@property (nonatomic) NSInteger sendPrivateFlag;

/**
 *	@brief	用户性别，1-男，2-女，0-未填写
 */
@property (nonatomic) NSInteger sex;

/**
 *	@brief	标签
 */
@property (nonatomic, retain) NSArray *tag;

/**
 *	@brief	最近的一条原创微博信息
 */
@property (nonatomic, retain) NSArray *tweetinfo;

/**
 *	@brief	发表的微博数
 */
@property (nonatomic) NSInteger tweetnum;

/**
 *	@brief	认证信息
 */
@property (nonatomic, copy) NSString *verifyinfo;

/**
 *	@brief	源数据结构
 */
@property (nonatomic, retain) NSDictionary *source;


/**
 *	@brief	创建用户信息
 *
 *	@param 	response 	回复信息
 *
 *	@return	用户信息
 */
+ (TecentWeiboUserInfo *)userInfoWithResponse:(NSDictionary *)response;


@end
