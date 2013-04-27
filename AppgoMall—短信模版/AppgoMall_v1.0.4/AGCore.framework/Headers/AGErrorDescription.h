//
//  SKErrorDescription.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-9-25.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	异常描述
 */
@interface AGErrorDescription : NSObject

/**
 *	@brief	获取API错误码对应的错误描述
 *
 *	@param 	code 	错误码
 *
 *	@return	错误描述
 */
+ (NSString *)getErrorDescriptionWithCode:(NSInteger)code;


@end

