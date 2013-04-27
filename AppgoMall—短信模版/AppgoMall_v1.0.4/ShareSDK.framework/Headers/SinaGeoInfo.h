//
//  SinaGeoInfo.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12-11-24.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

/**
 *	@brief	新浪地理位置信息
 */
@interface SinaGeoInfo : NSObject
{
@private
    NSString *_type;
    CGFloat _latitude;
    CGFloat _longitude;
}

/**
 *	@brief	类型：Point
 */
@property (nonatomic,copy) NSString *type;

/**
 *	@brief	纬度
 */
@property (nonatomic) CGFloat latitude;

/**
 *	@brief	经度
 */
@property (nonatomic) CGFloat longitude;

/**
 *	@brief	创建地理位置信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	地理位置信息
 */
+ (SinaGeoInfo *)geoInfoWithResponse:(NSDictionary *)response;



@end
