//
//  TecentWeiboCareerInfo.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 12-12-26.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	职业信息
 */
@interface TecentWeiboCareerInfo : NSObject
{
@private
    NSInteger _beginYear; 
    NSString *_companyName; 
    NSString *_departmentName;
    NSInteger _endYear; 
    NSInteger _Id;
}

/**
 *	@brief	开始年
 */
@property (nonatomic) NSInteger beginYear;

/**
 *	@brief	公司名称
 */
@property (nonatomic,copy) NSString *companyName;

/**
 *	@brief	部门名称
 */
@property (nonatomic,copy) NSString *departmentName;

/**
 *	@brief	结束年
 */
@property (nonatomic) NSInteger endYear;

/**
 *	@brief	公司id
 */
@property (nonatomic) NSInteger Id;

/**
 *	@brief	创建职业信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	职业信息
 */
+ (TecentWeiboCareerInfo *)careerInfoWithResponse:(NSDictionary *)response;



@end
