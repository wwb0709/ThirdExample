//
//  KaiXinOAuth2Client.h
//  SNSServiceSDK
//
//  Created by hower on 12/20/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import "EventDispatcher.h"
#import "ISSClient.h"
#import "AGShareAuthView.h"

@class AGShareFacade;

/**
 *	@brief	开心网OAuth2客户端
 */
@interface KaiXinOAuth2Client : EventDispatcher <UIWebViewDelegate,
                                                 AGShareAuthViewDelegate,
                                                 ISSClient>
{
@private
    NSString *_appKey;
    NSString *_appSecret;
    NSString *_redirectUrl;
    NSMutableArray *_httpTokens;           //用于保存临时的HTTP请求令牌
    
    NSString *_accessToken;
    NSString *_uid;
    NSDate *_expiredTime;
    
    AGShareAuthView *_authView;
    AGShareFacade *_facade;
}

/**
 *	@brief	初始化网易微博OAuth2客户端
 *
 *	@param 	appKey 	应用Key
 *  @param  appSecret   应用对应的密钥
 *  @param  redirectUrl 回调地址
 *  @param  delegate    协议实现对象
 *
 *	@return	OAuth2客户端对象
 */
- (id)initWithAppKey:(NSString *)appKey
           appSecret:(NSString *)appSecret
         redirectUrl:(NSString *)redirectUrl;

@end
