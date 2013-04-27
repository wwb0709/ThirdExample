//
//  ShuoFlashMediaInfo.h
//  SNSServiceSDK
//
//  Created by hower on 12/13/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	Flash媒体信息
 */
@interface ShuoFlashMediaInfo : NSObject
{
@private
    NSString *_src;
    NSString *_imgsrc;
    NSString *_type;
}

/**
 *	@brief	 Flash路径
 */
@property (nonatomic,copy) NSString *src;

/**
 *	@brief	图片路径
 */
@property (nonatomic,copy) NSString *imgsrc;

/**
 *	@brief	类型
 */
@property (nonatomic,copy) NSString *type;

/**
 *	@brief	创建Flash媒体信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	Flash媒体信息
 */
+ (ShuoFlashMediaInfo *)flashMediaInfoWithResponse:(NSDictionary *)response;


@end
