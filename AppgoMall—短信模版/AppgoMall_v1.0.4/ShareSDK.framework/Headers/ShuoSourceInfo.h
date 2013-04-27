//
//  ShuoSourceInfo.h
//  SNSServiceSDK
//
//  Created by hower on 12/13/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	来源信息
 */
@interface ShuoSourceInfo : NSObject
{
@private
    NSString *_href;
    NSString *_title;
}

/**
 *	@brief	来源地址
 */
@property (nonatomic,copy) NSString *href;

/**
 *	@brief	来源标题
 */
@property (nonatomic,copy) NSString *title;

/**
 *	@brief	创建来源信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	来源信息
 */
+ (ShuoSourceInfo *)sourceInfoWithResponse:(NSDictionary *)response;



@end
