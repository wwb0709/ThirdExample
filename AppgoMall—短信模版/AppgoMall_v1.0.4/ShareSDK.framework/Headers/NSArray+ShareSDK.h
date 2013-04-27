//
//  NSArray+ShareSDK.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-9.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (ShareSDK)

/**
 *	@brief	默认一键分享列表
 *
 *	@return	一键分享列表数组
 */
+ (NSArray *)defaultOneKeyShareList;


/**
 *	@brief	不包含新浪微博的一键分享列表
 *
 *	@return	一键分享列表数组
 */
+ (NSArray *)oneKeyShareListWithoutSinaWeibo;


@end
