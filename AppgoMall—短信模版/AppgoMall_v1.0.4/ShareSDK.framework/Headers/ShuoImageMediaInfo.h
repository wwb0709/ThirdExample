//
//  ShuoImageMediaInfo.h
//  SNSServiceSDK
//
//  Created by hower on 12/13/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	图片媒体信息
 */
@interface ShuoImageMediaInfo : NSObject
{
@private
    NSString *_src;
    NSString *_href;
    NSString *_type;
    NSDictionary *_sizes;
    NSString *_originalSrc;
    NSString *_secretPid;
}

/**
 *	@brief	图片URL
 */
@property (nonatomic,copy) NSString *src;

/**
 *	@brief	图片来源地址
 */
@property (nonatomic,copy) NSString *href;

/**
 *	@brief	媒体类型
 */
@property (nonatomic,copy) NSString *type;

/**
 *	@brief	图片尺寸
 */
@property (nonatomic,retain) NSDictionary *sizes;

/**
 *	@brief	原图片路径
 */
@property (nonatomic,copy) NSString *originalSrc;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *secretPid;

/**
 *	@brief	创建图片媒体信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	图片媒体信息
 */
+ (ShuoImageMediaInfo *)imageMediaInfoWithResponse:(NSDictionary *)response;


@end
