//
//  RenRenHighSchoolInfo.h
//  SNSServiceSDK
//
//  Created by hower on 12/20/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	高中信息
 */
@interface RenRenHighSchoolInfo : NSObject
{
@private
    NSString *_name;
    NSString *_gradYear;
}

/**
 *	@brief	表示高中学校名
 */
@property (nonatomic,copy) NSString *name;

/**
 *	@brief	表示入学时间
 */
@property (nonatomic,copy) NSString *gradYear;

/**
 *	@brief	创建高中信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	高中信息
 */
+ (RenRenHighSchoolInfo *)highSchoolInfoWithResponse:(NSDictionary *)response;


@end
