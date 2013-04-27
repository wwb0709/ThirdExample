//
//  SinaPublishContentView.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12-11-24.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ImageView.h"
#import "SinaWeiboOAuth2Client.h"

@class SinaPublishContentView;

/**
 *	@brief	分享视图协议 
 */
@protocol SinaPublishContentViewDelegate <NSObject>

@optional

/**
 *	@brief	窗口关闭
 *
 *	@param 	publishContentView 	分享视图
 */
- (void)publishContentViewOnClose:(SinaPublishContentView *)publishContentView;


/**
 *	@brief	提交分享内容
 *
 *	@param 	publishContentView 	分享视图
 *	@param 	content 	分享内容
 *	@param 	image 	分享图片
 */
- (void)publishContentView:(SinaPublishContentView *)publishContentView
                   content:(NSString *)content
                     image:(UIImage *)image;


@end

/**
 *	@brief	新浪分享内容视图
 */
@interface SinaPublishContentView : UIView
{
@private
    UIImageView *_backgroundView;
    UITextView *_contentView;
    UILabel *_titleLabel;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIButton *_settingButton;
    UILabel *_wordCountLabel;
    ImageView *_pictureView;
    
    id<SinaPublishContentViewDelegate> _delegate;
}

/**
 *	@brief	协议对象
 */
@property (nonatomic,assign) id<SinaPublishContentViewDelegate> delegate;

/**
 *	@brief	分享内容
 */
@property (nonatomic,copy) NSString *content;

/**
 *	@brief	分享照片
 */
@property (nonatomic,retain) UIImage *image;

/**
 *	@brief	初始化分享视图
 *
 *	@param 	aContent 	分享内容
 *	@param 	aImage 	分享图片
 *
 *	@return	视图对象
 */
- (id)initWithContent:(NSString *)aContent image:(UIImage *)aImage;


/**
 *	@brief	显示到活动窗口中
 *
 *	@param 	window 	窗口对象
 */
- (void)showInWindow:(UIWindow *)window;


@end
