//
//  QQStatusInfo.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12-11-27.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "ISSStatusInfo.h"

/**
 *	@brief	QQ微博信息
 */
@interface QQStatusInfo : NSObject
{
@private
    long long _statusId;
    CGFloat _time;
}

/**
 *	@brief	微博ID
 */
@property (nonatomic) long long statusId;

/**
 *	@brief	发表时间
 */
@property (nonatomic) CGFloat time;

/**
 *	@brief	创建微博信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	微博信息
 */
+ (QQStatusInfo *)statusInfoWithResponse:(NSDictionary *)response;


@end
