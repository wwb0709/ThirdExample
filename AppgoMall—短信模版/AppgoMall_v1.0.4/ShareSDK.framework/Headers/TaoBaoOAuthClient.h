//
//  TaoBaoOAuth2Client.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12-10-13.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "EventDispatcher.h"
#import "ISSClient.h"

/**
 *	@brief	淘宝OAuth2客户端
 */
@interface TaoBaoOAuthClient : EventDispatcher <UIWebViewDelegate,
                                                 ISSClient>
{
@private
    NSString *_appKey;
    NSString *_accessToken;
    NSString *_redirectUrl;
}

/**
 *	@brief	授权令牌
 */
@property (nonatomic,readonly) NSString *accessToken;


/**
 *	@brief	初始化淘宝OAuth2客户端
 *
 *	@param 	appKey 	应用Key
 *  @param  redirectUrl 回调地址
 *  @param  delegate    协议实现对象
 *
 *	@return	OAuth2客户端对象
 */
- (id)initWithAppKey:(NSString *)appKey
         redirectUrl:(NSString *)redirectUrl;


@end
