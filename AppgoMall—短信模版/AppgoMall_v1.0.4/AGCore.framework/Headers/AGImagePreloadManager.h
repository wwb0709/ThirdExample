//
//  SKImagePreloadManager.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-11-8.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	任务管理管理器
 */
@interface AGImagePreloadManager : NSObject
{
@private
    NSMutableDictionary *_queueDictionary;
}

/**
 *	@brief	添加任务
 *
 *	@param 	name 	名称
 *	@param 	count 	并发数量
 *  @param  goodsList   商品列表
 */
- (void)addTask:(NSString *)name maxCount:(NSInteger)count goodsList:(NSArray *)goodsList itemWidth:(CGFloat)itemWidth;

/**
 *	@brief	删除任务
 *
 *	@param 	name 	名称
 */
- (void)removeTask:(NSString *)name;



@end
