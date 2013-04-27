//
//  IAuthViewMediator.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-4.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	授权视图中介协议
 */
@protocol ISSAuthViewMediatorDelegate <NSObject>


@end

/**
 *	@brief	授权视图中介
 */
@protocol ISSAuthViewMediator <NSObject>

- (void)showWithAuthView:(UIWebView *)webView delegate:(id)delegate;

@end
