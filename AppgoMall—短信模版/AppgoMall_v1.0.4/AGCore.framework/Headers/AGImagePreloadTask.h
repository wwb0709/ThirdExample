//
//  SKImagePreloadTask.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-11-8.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGAPIFacade.h"

/**
 *	@brief	预加载图片任务
 */
@interface AGImagePreloadTask : NSObject
{
@private
    NSArray *_goodsList;
    NSInteger _maxCount;
    NSInteger _currentIndex;
    NSMutableArray *_loaderArray;
    CGFloat _itemWidth;
    
    AGAPIFacade *_facade;
}

/**
 *	@brief	初始化预加载图片任务
 *
 *	@param 	goodsList 	商品列表
 *  @param  count   最大并发数量
 *  @param  itemWidth   加载图片宽度
 *
 *	@return	任务对象
 */
- (id)initWithGoodsList:(NSArray *)goodsList maxCount:(NSInteger)count itemWidth:(CGFloat)itemWidth;

/**
 *	@brief	启动任务
 */
- (void)run;

/**
 *	@brief	关闭任务
 */
- (void)close;



@end
