//
//  SKHTTPToken.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-9-24.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "HTTPToken.h"

@class AGHTTPToken;

/**
 *	@brief	HTTP缓存策略
 */
@protocol IAGHTTPCachePolicy <NSObject>

@required

/**
 *	@brief	写入缓存数据
 *
 *	@param 	token 	HTTP令牌
 */
- (void)writeCacheData:(AGHTTPToken *)token;

/**
 *	@brief	读取缓存数据
 *
 *	@param 	token 	HTTP令牌
 *
 *	@return	缓存的回复数据
 */
- (NSString *)readCacheData:(AGHTTPToken *)token;

/**
 *	@brief	缓存数据返回
 *
 *	@param 	data 	缓存数据
 *	@param 	token 	HTTP令牌
 */
- (void)cacheDataResult:(NSString *)data token:(AGHTTPToken *)token;

/**
 *	@brief	是否需要获取缓存数据
 *
 *	@param 	token 	HTTP令牌
 *
 *	@return	YES 需要获取缓存，NO 不需要获取缓存
 */
- (BOOL)shouldGetCacheData:(AGHTTPToken *)token;


@end

/**
 *	@brief	HTTP令牌
 */
@interface AGHTTPToken : HTTPToken
{
@private
    id<IAGHTTPCachePolicy> _cachePolicy;
}

/**
 *	@brief	缓存协议对象
 */
@property (nonatomic,readonly) id<IAGHTTPCachePolicy> cachePolicy;


/**
 *	@brief	初始化令牌
 *
 *	@param 	urlString 	URL地址
 *  @param  cachePolicy   缓存策略对象,注：此对象切勿是Token对象的持有对象，否则会造成循环引用问题。
 *	@param 	userData 	附加数据
 *
 *	@return	令牌对象
 */
- (id)initWithURLString:(NSString *)urlString
            cachePolicy:(id<IAGHTTPCachePolicy>)cachePolicy
               userData:(id)userData;


/**
 *	@brief	初始化令牌
 *
 *	@param 	url 	URL对象
 *  @param  cachePolicy   缓存策略对象,注：此对象切勿是Token对象的持有对象，否则会造成循环引用问题。
 *	@param 	userData 	附加数据
 *
 *	@return	令牌对象
 */
- (id)initWithURL:(NSURL *)url
      cachePolicy:(id<IAGHTTPCachePolicy>)cachePolicy
         userData:(id)userData;


/**
 *	@brief	初始化令牌
 *
 *	@param 	request 	请求对象
 *  @param  cachePolicy   缓存策略对象,注：此对象切勿是Token对象的持有对象，否则会造成循环引用问题。
 *	@param 	userData 	附加数据
 *
 *	@return	令牌对象
 */
- (id)initWithRequest:(NSMutableURLRequest *)request
          cachePolicy:(id<IAGHTTPCachePolicy>)cachePolicy
             userData:(id)userData;


@end
