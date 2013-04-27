//
//  RenRenHometown.h
//  SNSServiceSDK
//
//  Created by hower on 12/20/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	家乡信息
 */
@interface RenRenHometown : NSObject
{
@private
    NSString *_country; 
    NSString *_province;
    NSString *_city;
}

/**
 *	@brief	表示所在国家
 */
@property (nonatomic,copy) NSString *country;

/**
 *	@brief	表示所在省份
 */
@property (nonatomic,copy) NSString *province;

/**
 *	@brief	表示所在城市
 */
@property (nonatomic,copy) NSString *city;

/**
 *	@brief	创建家乡信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	家乡信息
 */
+ (RenRenHometown *)hometownWithResponse:(NSDictionary *)response;


@end
