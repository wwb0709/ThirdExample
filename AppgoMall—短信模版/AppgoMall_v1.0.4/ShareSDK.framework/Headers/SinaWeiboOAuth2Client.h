//
//  SinaWeiboOAuth2Client.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12-10-13.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "EventDispatcher.h"
#import "ISSClient.h"
#import "AGShareAuthView.h"

@class AGShareFacade;

/**
 *	@brief	转换短链接成功
 */
#define SSN_CONVERT_SHORT_URL_SUCCESS @"ssnConvertShortURLSuc"

/**
 *	@brief	转换短链接失败
 */
#define SSN_CONVERT_SHORT_URL_FAIL @"ssnConvertShortURLFai"

/**
 *	@brief	短链接集合标识
 */
#define SSK_SHORT_URLS @"sskShortUrls"


/**
 *	@brief	新浪微博OAuth2客户端
 */
@interface SinaWeiboOAuth2Client : EventDispatcher <UIWebViewDelegate,
                                                    ISSClient,
                                                    AGShareAuthViewDelegate>
{
@private
    NSString *_appKey;
    NSString *_appSecret;
    NSString *_redirectUrl;
    NSString *_ssoCallbackUrl;
    BOOL _isSSOLogin;
    NSMutableArray *_httpTokens;           //用于保存临时的HTTP请求令牌
    
    NSString *_accessToken;
    NSString *_uid;
    NSDate *_expiredTime;
    
    AGShareAuthView *_authView;
    AGShareFacade *_facade;
}

/**
 *	@brief	授权令牌
 */
@property (nonatomic,readonly) NSString *accessToken;


/**
 *	@brief	初始化新浪微博OAuth2客户端
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

/**
 *	@brief	转换一个或者多个长链接为短链接
 *
 *	@param 	urls 	长链接集合
 */
- (void)convertLongUrlToShortUrl:(NSArray *)urls;

/**
 *	@brief	处理请求链接
 *
 *	@param 	url 	链接
 *
 *  @return YES：接受处理，NO：不处理
 */
- (BOOL)handleOpenURL:(NSURL *)url;



@end
