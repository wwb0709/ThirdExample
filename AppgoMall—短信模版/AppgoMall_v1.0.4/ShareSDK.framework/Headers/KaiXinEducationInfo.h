//
//  KaiXinEducationInfo.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 12-12-26.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	教育信息
 */
@interface KaiXinEducationInfo : NSObject
{
@private
    NSString *_schooltype;
    NSString *_school; 
    NSString *_className;
    NSString *_year;
}

/**
 *	@brief	学校类型
 */
@property (nonatomic,copy) NSString *schooltype;

/**
 *	@brief	学校
 */
@property (nonatomic,copy) NSString *school;

/**
 *	@brief	班级
 */
@property (nonatomic,copy) NSString *className;

/**
 *	@brief	入学年份
 */
@property (nonatomic,copy) NSString *year;

/**
 *	@brief	创建教育信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	教育信息
 */
+ (KaiXinEducationInfo *)educationInfoWithResponse:(NSDictionary *)response;


@end
