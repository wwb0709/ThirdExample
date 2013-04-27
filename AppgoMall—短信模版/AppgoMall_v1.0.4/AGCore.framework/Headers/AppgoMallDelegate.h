//
//  AGAPIFacadeDelegate.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12/12/2.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IAGErrorInfo.h"

/**
 *	@brief	SDK委托
 */
@protocol AppgoMallDelegate <NSObject>


@optional

/**
 *	@brief	启动应用成功
 */
- (void)startupSuccess;

/**
 *	@brief	启动应用失败
 *
 *	@param 	errorInfo 	错误信息
 */
- (void)startupFail:(id<IAGErrorInfo>)errorInfo;


@end