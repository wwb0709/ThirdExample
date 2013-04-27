//
//  SinaWeiboErrorInfo.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12-10-13.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CMErrorInfo.h"

/**
 *	@brief	新浪微博错误信息
 */
@interface SSErrorInfo : CMErrorInfo
{
@private
    NSString *_request;
}

/**
 *	@brief	请求路径
 */
@property (nonatomic,copy) NSString *request;

/**
 *	@brief	获取错误描述
 *
 *	@param 	code 	错误码
 *
 *	@return	错误描述
 */
+ (NSString *)getErrorDescriptionWithCode:(NSInteger)code;


@end
