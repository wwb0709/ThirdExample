//
//  AGSinaPublishContentView.h
//  AppGoSDKDemo
//
//  Created by 冯 鸿杰 on 12-11-26.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "AGBaseView.h"
#import "AGAPIFacade.h"
#import "ImageView.h"
//
///**
// *	@brief	分享类型
// */
//typedef enum
//{
//	AGShareTypeSinaWeibo = 0, /**< 新浪微博 */
//	AGShareTypeTecentWeibo = 1 /**< 腾讯微博 */
//}
//AGShareType;


@class AGPublishContentView;

/**
 *	@brief	分享视图协议
 */
@protocol AGPublishContentViewDelegate <NSObject>

@optional

/**
 *	@brief	窗口关闭
 *
 *	@param 	publishContentView 	分享视图
 */
- (void)publishContentViewOnClose:(AGPublishContentView *)publishContentView;


@end

/**
 *	@brief	新浪微博分享内容视图
 */
@interface AGPublishContentView : AGBaseView
{
@private
    UIImageView *_backgroundView;
    UITextView *_contentView;
    UILabel *_titleLabel;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIButton *_settingButton;
    UILabel *_wordCountLabel;
    UIImageView *_picBgView;
    UIImageView *_pinImageView;
    ImageView *_pictureView;
    UIActivityIndicatorView *_indicatorView;
    
    id<AGPublishContentViewDelegate> _delegate;
    
    AGGoodsInfo *_goodsInfo;
    ImageLoader *_loader;
    ShareType _shareType;
    BOOL _isUrlReady;
    BOOL _isShortUrlReady;
    BOOL _isImageReady;
}

/**
 *	@brief	协议对象
 */
@property (nonatomic,assign) id<AGPublishContentViewDelegate> delegate;

/**
 *	@brief	分享内容
 */
@property (nonatomic,copy) NSString *content;

/**
 *	@brief	分享照片
 */
@property (nonatomic,retain) UIImage *image;

/**
 *	@brief	初始化商品信息
 *
 *	@param 	goodsInfo 	商品信息
 *
 *	@return	分享内容视图
 */
- (id)initWithGoodsInfo:(AGGoodsInfo *)goodsInfo shareType:(ShareType)shareType;

/**
 *	@brief	显示到活动窗口中
 *
 *	@param 	window 	窗口对象
 */
- (void)showInWindow:(UIWindow *)window;


@end
