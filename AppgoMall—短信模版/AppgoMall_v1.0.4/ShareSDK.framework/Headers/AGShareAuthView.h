//
//  AGSNSAuthView.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-12-3.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "ISSClient.h"

@class AGShareAuthView;

/**
 *	@brief	新浪微博授权视图协议
 */
@protocol AGShareAuthViewDelegate <NSObject>

/**
 *	@brief	关闭授权视图，点击关闭按钮时触发
 *
 *	@param 	authView 	授权视图
 */
- (void)authViewOnClose:(AGShareAuthView *)authView;


@end

/**
 *	@brief	授权视图
 */
@interface AGShareAuthView : UIView
{
@private
    UIButton *_closeButton;
    UIWebView *_webView;
    UIView *_containerView;
    
//    id<IOAuth2Client> _client;
    id<AGShareAuthViewDelegate> _delegate;
}

/**
 *	@brief	OAuth2授权客户端
 */
//@property (nonatomic,readonly) id<IOAuth2Client> client;

/**
 *	@brief	协议对象
 */
@property (nonatomic,assign) id<AGShareAuthViewDelegate> delegate;


/**
 *	@brief	初始化视图
 *
 *	@param 	client 	新浪微博授权客户端对象
 *
 *	@return	视图对象
 */
//- (id)initWithClient:(id<IOAuth2Client>)client;

/**
 *	@brief	初始化视图
 *
 *	@param 	webView 	网页视图
 *
 *	@return	视图对象
 */
- (id)initWithWebView:(UIWebView *)webView;



/**
 *	@brief	显示到Window中
 *
 *	@param 	window 	Window对象
 */
- (void)showInWindow:(UIWindow *)window;

@end
