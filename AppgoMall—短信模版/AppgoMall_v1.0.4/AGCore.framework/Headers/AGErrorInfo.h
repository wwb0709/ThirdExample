//
//  SKErrorInfo.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-9-25.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IAGErrorInfo.h"

/**
 *	@brief	错误信息，描述API调用返回错误信息
 */
@interface AGErrorInfo : NSObject <IAGErrorInfo>
{
@private
    NSInteger _errorCode;
    NSString *_errorDescription;
    AGErrorType _errorType;
}

/**
 *	@brief	错误代码，如果为调用API出错则应该参考API错误码对照表，如果为HTTP错误，此属性则指示HTTP错误码。
 */
@property (nonatomic) NSInteger errorCode;

/**
 *	@brief	错误描述，对应相应的错误码的描述
 */
@property (nonatomic,copy) NSString *errorDescription;

/**
 *	@brief	错误类型
 */
@property (nonatomic) AGErrorType errorType;

@end
