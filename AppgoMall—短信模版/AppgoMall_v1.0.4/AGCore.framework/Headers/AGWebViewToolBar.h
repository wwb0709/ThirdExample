//
//  SKWebGoodsIntoToolBar.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-11-2.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "AGBaseView.h"

/**
 *	@brief	网页工具栏
 */
@interface AGWebViewToolBar : AGBaseView
{
@private
    UIImageView *_backgroundImageView;
    UIButton *_backButton;
    UIButton *_refreshButton;
    UIButton *_prevPageButton;
    UIButton *_nextPageButton;
    UIActivityIndicatorView *_indicatorView;
    
    BOOL _isLoading;
}

/**
 *	@brief	返回按钮
 */
@property (nonatomic,readonly) UIButton *backButton;

/**
 *	@brief	刷新按钮
 */
@property (nonatomic,readonly) UIButton *refreshButton;

/**
 *	@brief	前一页按钮
 */
@property (nonatomic,readonly) UIButton *prevPageButton;

/**
 *	@brief	后一页按钮
 */
@property (nonatomic,readonly) UIButton *nextPageButton;

/**
 *	@brief	加载标识
 */
@property (nonatomic) BOOL isLoading;


@end
