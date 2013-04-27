//
//  ISSStatusInfo.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12-11-27.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	微博信息接口
 */
@protocol ISSStatusInfo <NSObject>

/**
 *	@brief	获取微博ID
 *
 *	@return	微博ID
 */
- (NSString *)sid;

/**
 *	@brief	获取源数据
 *
 *	@return 源数据
 */
- (NSString *)source;


@end
