//
//  SSStatusInfo.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-10.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ISSStatusInfo.h"
#import "SinaWeiboStatusInfo.h"
#import "TecentWeiboStatusInfo.h"
#import "T163WeiboStatusInfo.h"
#import "SohuWeiboStatusInfo.h"
#import "ShuoStatusInfo.h"
#import "RenRenStatusInfo.h"
#import "KaiXinStatusInfo.h"

/**
 *	@brief	微博信息
 */
@interface SSStatusInfo : NSObject <ISSStatusInfo>
{
@private
    NSString *_sid;
    
    NSDictionary *_source;
}

/**
 *	@brief	微博ID
 */
@property (nonatomic,copy) NSString *sid;

/**
 *	@brief	源数据
 */
@property (nonatomic,retain) NSDictionary *source;

/**
 *	@brief	创建微博信息
 *
 *	@param 	statusInfo 	社区微博信息
 *
 *	@return	微博信息
 */
+ (SSStatusInfo *)statusInfoWithSNSStatusInfo:(id)statusInfo;


/**
 *	@brief	创建微博信息
 *
 *	@param 	statusInfo 	新浪微博信息
 *
 *	@return	微博信息
 */
+ (SSStatusInfo *)statusInfoWithSinaWeibo:(SinaWeiboStatusInfo *)statusInfo;

/**
 *	@brief	创建微博信息
 *
 *	@param 	statusInfo 	腾讯微博信息
 *
 *	@return	微博信息
 */
+ (SSStatusInfo *)statusInfoWithTecentWeibo:(TecentWeiboStatusInfo *)statusInfo;

/**
 *	@brief	创建微博信息
 *
 *	@param 	statusInfo 	网易微博信息
 *
 *	@return	微博信息
 */
+ (SSStatusInfo *)statusInfoWith163Weibo:(T163WeiboStatusInfo *)statusInfo;

/**
 *	@brief	创建微博信息
 *
 *	@param 	statusInfo 	搜狐微博信息
 *
 *	@return	微博信息
 */
+ (SSStatusInfo *)statusInfoWithSohuWeibo:(SohuWeiboStatusInfo *)statusInfo;

/**
 *	@brief	创建微博信息
 *
 *	@param 	statusInfo 	豆瓣社区微博信息
 *
 *	@return	微博信息
 */
+ (SSStatusInfo *)statusInfoWithDouban:(ShuoStatusInfo *)statusInfo;

/**
 *	@brief	创建微博信息
 *
 *	@param 	statusInfo 	人人网状态信息
 *
 *	@return	微博信息
 */
+ (SSStatusInfo *)statusInfoWithRenRen:(RenRenStatusInfo *)statusInfo;

/**
 *	@brief	创建微博信息
 *
 *	@param 	statusInfo 	开心网状态信息
 *
 *	@return	微博信息
 */
+ (SSStatusInfo *)statusInfoWithKaiXin:(KaiXinStatusInfo *)statusInfo;


@end
