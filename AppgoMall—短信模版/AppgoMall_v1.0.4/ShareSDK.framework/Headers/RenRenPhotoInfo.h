//
//  RenRenPhotoInfo.h
//  SNSServiceSDK
//
//  Created by hower on 12/19/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	人人照片信息
 */
@interface RenRenPhotoInfo : NSObject
{
    long long _pid;
    long long _aid;
    NSInteger _uid;
    NSString *_src;
    NSString *_srcSmall;
    NSString *_srcBig;
    NSString *_caption;
}

/**
 *	@brief	照片的ID 
 */
@property (nonatomic) long long pid;

/**
 *	@brief	照片所在相册的ID 
 */
@property (nonatomic) long long aid;

/**
 *	@brief	照片的所有者用户ID 
 */
@property (nonatomic) NSInteger uid;

/**
 *	@brief	宽度固定为100，长度按实际比例，相册列表中的大小 
 */
@property (nonatomic,copy) NSString *src;

/**
 *	@brief	宽度固定为200，长度按实际比例， 封面大小 
 */
@property (nonatomic,copy) NSString *srcSmall;

/**
 *	@brief	最大为720*720，正常相片 
 */
@property (nonatomic,copy) NSString *srcBig;

/**
 *	@brief	照片的描述信息
 */
@property (nonatomic,copy) NSString *caption;

/**
 *	@brief	创建照片信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	照片信息对象
 */
+ (RenRenPhotoInfo *)photoInfoWithResponse:(NSDictionary *)response;


@end
