//
//  KaiXinCareerInfo.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 12-12-26.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	职业信息
 */
@interface KaiXinCareerInfo : NSObject
{
@private
    NSString *_company;     
    NSString *_dept;        
    NSString *_beginyear;	
    NSString *_beginmonth;	
    NSString *_endyear; 
    NSString *_endmonth; 
}

/**
 *	@brief	公司名称
 */
@property (nonatomic,copy) NSString *company;

/**
 *	@brief	所在部门
 */
@property (nonatomic,copy) NSString *dept;

/**
 *	@brief	当前工作开始年份
 */
@property (nonatomic,copy) NSString *beginyear;

/**
 *	@brief	当前工作开始月份
 */
@property (nonatomic,copy) NSString *beginmonth;

/**
 *	@brief	当前工作结束年份
 */
@property (nonatomic,copy) NSString *endyear;

/**
 *	@brief	当前工作结束月份
 */
@property (nonatomic,copy) NSString *endmonth;


/**
 *	@brief	创建职业信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	职业信息
 */
+ (KaiXinCareerInfo *)careerInfoWithResponse:(NSDictionary *)response;


@end
