//
//  SKLoadingView.h
//  AppGoSDKDemo
//
//  Created by 冯 鸿杰 on 12-11-6.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "AGBaseView.h"

/**
 *	@brief	加载等待视图
 */
@interface AGLoadingView : AGBaseView
{
@private
    UIView *_backgroundView;
    UIActivityIndicatorView *_indicatorView;
    UILabel *_label;
    
    BOOL _needLayout;
}

/**
 *	@brief	提示信息
 */
@property (nonatomic,copy) NSString *text;


/**
 *	@brief	显示
 */
- (void)show;

/**
 *	@brief	隐藏
 */
- (void)hide;


@end
