//
//  AGWebView.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-11-19.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "AGBaseView.h"
#import "AGWebViewToolBar.h"

@class AGWebView;

/**
 *	@brief	网页视图协议
 */
@protocol AGWebViewDelegate <NSObject>

@optional
/**
 *	@brief	网页视图返回
 *
 *	@param 	webView 	网页视图
 */
- (void)webViewOnBack:(AGWebView *)webView;


@end

/**
 *	@brief	网页视图
 */
@interface AGWebView : AGBaseView <UIWebViewDelegate>
{
@protected
    UIWebView *_webView;
    AGWebViewToolBar *_toolbar;
    
    id<AGWebViewDelegate> _delegate;
}

/**
 *	@brief	协议对象
 */
@property (nonatomic,assign) id<AGWebViewDelegate> delegate;


/**
 *	@brief	初始化网页视图
 *
 *  @param  frame   显示区域
 *	@param 	request 	HTTP请求
 *
 *	@return	网页视图
 */
- (id)initWithFrame:(CGRect)frame request:(NSURLRequest *)request;

/**
 *	@brief	加载请求
 *
 *	@param 	request 	请求信息
 */
- (void)loadRequest:(NSURLRequest *)request;


@end
