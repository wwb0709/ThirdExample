//
//  RenRenUniversityInfo.h
//  SNSServiceSDK
//
//  Created by hower on 12/20/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	大学信息
 */
@interface RenRenUniversityInfo : NSObject
{
@private
    NSString *_name;
    NSString *_year;
    NSString *_department;
}

/**
 *	@brief	名称
 */
@property (nonatomic,copy) NSString *name;

/**
 *	@brief	年份
 */
@property (nonatomic,copy) NSString *year;

/**
 *	@brief	部门
 */
@property (nonatomic,copy) NSString *department;

/**
 *	@brief	创建大学信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	大学信息
 */
+ (RenRenUniversityInfo *)universityInfoWithResponse:(NSDictionary *)response;


@end
