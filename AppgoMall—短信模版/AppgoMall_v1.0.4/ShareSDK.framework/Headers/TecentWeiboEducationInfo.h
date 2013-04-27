//
//  TecentWeiboEducationInfo.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 12-12-26.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	教育信息
 */
@interface TecentWeiboEducationInfo : NSObject
{
@private
    NSInteger _departmentid;
    NSInteger _Id; 
    NSInteger _level;
    NSInteger _schoolid; 
    NSInteger _year;
}

/**
 *	@brief	院系id
 */
@property (nonatomic) NSInteger departmentid;

/**
 *	@brief	教育信息记录id
 */
@property (nonatomic) NSInteger Id;

/**
 *	@brief	学历级别
 */
@property (nonatomic) NSInteger level;

/**
 *	@brief	学校id
 */
@property (nonatomic) NSInteger schoolid;

/**
 *	@brief	入学年
 */
@property (nonatomic) NSInteger year;

/**
 *	@brief	创建教育信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	教育信息
 */
+ (TecentWeiboEducationInfo *)educationInfoWithResponse:(NSDictionary *)response;


@end
