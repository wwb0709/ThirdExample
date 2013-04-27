//
//  IAGAdViewMediator.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-12-8.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGCore/IAGErrorInfo.h"

@protocol IAGAdViewMediator;

@protocol IAGAdViewMediatorDelegate <NSObject>

@optional

/**
 *	@brief	推荐商品广告视图刷新数据完成
 *
 *	@param 	mediator 	推荐商品广告视图中介
 */
- (void)adViewMediatorOnRefreshDataComplete:(id<IAGAdViewMediator>)mediator;


/**
 *	@brief	推荐商品广告视图刷新数据失败
 *
 *	@param 	mediator 	推荐商品广告视图中介
 *	@param 	errorInfo 	错误信息
 */
- (void)adViewMediatorOnRefreshDataFail:(id<IAGAdViewMediator>)mediator
                              errorInfo:(id<IAGErrorInfo>)errorInfo;


@end

/**
 *	@brief	推荐商品广告视图中介协议
 */
@protocol IAGAdViewMediator <NSObject>

@required

/**
 *	@brief	取得中介协议对象
 *
 *	@return	中介协议对象
 */
- (id<IAGAdViewMediatorDelegate>)delegate;


/**
 *	@brief	设置中介协议对象
 *
 *	@param 	delegate 	中介协议对象
 */
- (void)setDelegate:(id<IAGAdViewMediatorDelegate>)delegate;


/**
 *	@brief	获取推荐商品广告视图
 *
 *	@return	推荐商品广告视图
 */
- (UIView *)view;

/**
 *	@brief	刷新数据
 */
- (void)refreshData;


@end
