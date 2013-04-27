//
//  RenRenUserInfo.h
//  SNSServiceSDK
//
//  Created by hower on 12/20/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RenRenHometown.h"
#import "RenRenWorkInfo.h"
#import "RenRenUniversityInfo.h"
#import "RenRenHighSchoolInfo.h"

/**
 *	@brief	用户信息
 */
@interface RenRenUserInfo : NSObject
{
@private
    NSInteger _uid;    
    NSString *_name; 
    NSInteger _sex;    
    NSInteger _star; 	
    NSInteger _zidou;  
    NSInteger _vip;   
    NSString *_birthday; 
    NSString *_emailHash;     
    NSString *_tinyurl;     
    NSString *_headurl;   
    NSString *_mainurl;  
    RenRenHometown *_hometownLocation; 
    RenRenWorkInfo *_workInfo; 
    RenRenUniversityInfo *_universityInfo;
    RenRenHighSchoolInfo *_hsInfo;
    
    NSDictionary *_source;
}

/**
 *	@brief	表示用户id
 */
@property (nonatomic) NSInteger uid;

/**
 *	@brief	表示用户名
 */
@property (nonatomic,copy) NSString *name;

/**
 *	@brief	表示性别，值1表示男性；值0表示女性
 */
@property (nonatomic) NSInteger sex;

/**
 *	@brief	表示是否为星级用户，值“1”表示“是”；值“0”表示“不是”
 */
@property (nonatomic) NSInteger star;

/**
 *	@brief	表示是否为vip用户，值1表示是；值0表示不是
 */
@property (nonatomic) NSInteger zidou;

/**
 *	@brief	表示是否为vip用户等级，前提是zidou节点必须为1
 */
@property (nonatomic) NSInteger vip;

/**
 *	@brief	表示出生时间，格式为：yyyy-mm-dd，需要自行格式化日期显示格式。注：年份60后，实际返回1760-mm-dd；70后，返回1770-mm-dd；80后，返回1780-mm-dd；90后，返回1790-mm-dd
 */
@property (nonatomic,copy) NSString *birthday;

/**
 *	@brief	用户经过验证的email的信息字符串：email通过了connect.registerUsers接口。字符串包含的email经过了crc32和md5的编码 
 */
@property (nonatomic,copy) NSString *emailHash;

/**
 *	@brief	表示头像链接 50*50大小
 */
@property (nonatomic,copy) NSString *tinyurl;

/**
 *	@brief	表示头像链接 100*100大小
 */
@property (nonatomic,copy) NSString *headurl;

/**
 *	@brief	表示头像链接 200*200大小
 */
@property (nonatomic,copy) NSString *mainurl;

/**
 *	@brief	表示家乡信息
 */
@property (nonatomic,retain) RenRenHometown *hometownLocation;

/**
 *	@brief	表示工作信息
 */
@property (nonatomic,retain) RenRenWorkInfo *workInfo;

/**
 *	@brief	表示就读大学信息
 */
@property (nonatomic,retain) RenRenUniversityInfo *universityInfo;

/**
 *	@brief	表示就读高中学校信息
 */
@property (nonatomic,retain) RenRenHighSchoolInfo *hsInfo;

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
+ (RenRenUserInfo *)userInfoWithResponse:(NSDictionary *)response;


@end
