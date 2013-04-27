//
//  TecentWeiboOAuth2Client.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12-11-27.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EventDispatcher.h"
#import "ISSClient.h"
#import "AGShareAuthView.h"

@class AGShareFacade;

/**
 *	@brief	腾讯微博OAuth2客户端
 */
@interface TecentWeiboOAuth2Client : EventDispatcher <UIWebViewDelegate,
                                                      AGShareAuthViewDelegate,
                                                      ISSClient>
{
@private
    NSString *_appKey;
    NSString *_appSecret;
    NSString *_redirectUrl;
    NSMutableArray *_httpTokens;           //用于保存临时的HTTP请求令牌
    
    NSString *_accessToken;
    NSString *_openId;
    NSDate *_expiredTime;
    
    AGShareAuthView *_authView;
    AGShareFacade *_facade;
}

/**
 *	@brief	授权令牌
 */
@property (nonatomic,readonly) NSString *accessToken;

/**
 *	@brief	初始化Q腾讯微博OAuth2客户端
 *
 *	@param 	appKey 	应用Key
 *  @param  appSecret   应用对应的密钥
 *  @param  redirectUrl 回调地址
 *
 *	@return	OAuth2客户端对象
 */
- (id)initWithAppKey:(NSString *)appKey
           appSecret:(NSString *)appSecret
         redirectUrl:(NSString *)redirectUrl;

@end
