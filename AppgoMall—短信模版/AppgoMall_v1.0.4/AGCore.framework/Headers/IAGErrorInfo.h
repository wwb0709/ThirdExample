//
//  IAGErrorInfo.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12/12/2.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	错误类型
 */
typedef enum
{
	SKErrorTypeAPI = 1, /**< API错误 */
	SKErrorTypeHTTP = 2, /**< HTTP错误 */
    SKErrorTypeNetwork = 3  /**< 网络错误 */
}
AGErrorType;

/**
 *	@brief	错误信息接口
 */
@protocol IAGErrorInfo <NSObject>


/**
 *	@brief	错误代码，如果为调用API出错则应该参考API错误码对照表，如果为HTTP错误，此属性则指示HTTP错误码。
 *
 *	@return	错误代码
 */
- (NSInteger)errorCode;

/**
 *	@brief	错误描述，对应相应的错误码的描述
 *
 *	@return	错误描述
 */
- (NSString *)errorDescription;

/**
 *	@brief	错误类型
 *
 *	@return	错误类型
 */
- (AGErrorType)errorType;


@end
