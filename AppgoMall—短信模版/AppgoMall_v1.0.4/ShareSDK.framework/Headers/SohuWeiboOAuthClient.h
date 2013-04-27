//
//  SohuWeiboOAuthClient.h
//  SNSServiceSDK
//
//  Created by hower on 12/10/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EventDispatcher.h"
#import "HTTPToken.h"
#import "ISSClient.h"
#import "AGShareAuthView.h"

@class AGShareFacade;

/**
 *	@brief	搜狐微博客户端
 */
@interface SohuWeiboOAuthClient : EventDispatcher <UIWebViewDelegate,
                                                   AGShareAuthViewDelegate,
                                                   ISSClient>
{
@private
    NSString *_consumerKey;
    NSString *_consumerSecret;
    NSString *_oauthToken;
    NSString *_oauthTokenSecret;
    NSString *_accessToken;
    NSString *_accessTokenSecret;
    HTTPToken *_getRequestToken;
    HTTPToken *_getAccessToken;
    NSMutableArray *_httpTokens;
    
    AGShareAuthView *_authView;
    AGShareFacade *_facade;
}

/**
 *	@brief	初始化搜狐微博客户端
 *
 *	@param 	consumerKey 	客户端Key
 *	@param 	consumerSecret 	客户端密钥
 *
 *	@return	搜狐微博客户端
 */
- (id)initWithConsumerKey:(NSString *)consumerKey
           consumerSecret:(NSString *)consumerSecret;

@end
