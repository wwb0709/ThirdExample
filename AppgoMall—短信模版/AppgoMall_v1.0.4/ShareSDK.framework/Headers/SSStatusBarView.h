//
//  SSStatusBarView.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-9.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *	@brief	状态栏视图
 */
@interface SSStatusBarView : UIView
{
@private
    UIActivityIndicatorView *_indicatorView;
    UIImageView *_iconView;
    UILabel *_textLabel;
    
    BOOL _needLayout;
}

/**
 *	@brief	设置消息
 *
 *	@param 	message 	消息内容
 *	@param 	icon 	图标
 */
- (void)setMessage:(NSString *)message icon:(UIImage *)icon;

/**
 *	@brief	设置消息
 *
 *	@param 	message 	消息内容
 *	@param 	loading 	是否显示等待提示
 */
- (void)setMessage:(NSString *)message loading:(BOOL)loading;


@end
