//
//  RenRenWorkInfo.h
//  SNSServiceSDK
//
//  Created by hower on 12/20/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	工作信息
 */
@interface RenRenWorkInfo : NSObject
{
@private
    NSString *_companyName;
    NSString *_description;
    NSString *_startDate;
    NSString *_endDate;
}

/**
 *	@brief	表示所在公司
 */
@property (nonatomic,copy) NSString *companyName;

/**
 *	@brief	表示工作描述
 */
@property (nonatomic,copy) NSString *description;

/**
 *	@brief	表示入职时间
 */
@property (nonatomic,copy) NSString *startDate;

/**
 *	@brief	表示离职时间
 */
@property (nonatomic,copy) NSString *endDate;

/**
 *	@brief	创建工作信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	工作信息
 */
+ (RenRenWorkInfo *)workInfoWithResponse:(NSDictionary *)response;


@end
