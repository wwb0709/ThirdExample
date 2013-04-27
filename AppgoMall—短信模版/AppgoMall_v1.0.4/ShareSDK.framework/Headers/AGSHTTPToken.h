//
//  AGSHTTPToken.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 12-12-27.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "HTTPToken.h"

/**
 *	@brief	调用接口成功
 */
#define AGSN_CALL_API_SUCCESS @"callApiSuccess"

/**
 *	@brief	调用接口失败
 */
#define AGSN_CALL_API_FAILURE @"callApiFailure"

/**
 *	@brief	回复对象
 */
#define AGSK_RESPONDER @"kResponse"

/**
 *	@brief	错误对象
 */
#define AGSK_ERROR @"kError"

/**
 *	@brief	HTTP令牌
 */
@interface AGSHTTPToken : HTTPToken

/**
 *	@brief	初始化令牌
 *
 *	@param 	urlString 	URL地址
 *	@param 	userData 	附加数据
 *
 *	@return	令牌对象
 */
- (id)initWithURLString:(NSString *)urlString
               userData:(id)userData;


/**
 *	@brief	初始化令牌
 *
 *	@param 	url 	URL对象
 *	@param 	userData 	附加数据
 *
 *	@return	令牌对象
 */
- (id)initWithURL:(NSURL *)url
         userData:(id)userData;


/**
 *	@brief	初始化令牌
 *
 *	@param 	request 	请求对象
 *	@param 	userData 	附加数据
 *
 *	@return	令牌对象
 */
- (id)initWithRequest:(NSMutableURLRequest *)request
             userData:(id)userData;


@end
