//
//  AGSinaPublishContentView.h
//  AppGoSDKDemo
//
//  Created by 冯 鸿杰 on 12-11-26.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "ImageView.h"
#import "AGShareAuthView.h"
#import "ShareType.h"
#import "ISSPublishContentView.h"
#import "SSPublishContent.h"

@class AGSharePublishContentView;

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
- (void)publishContentViewOnClose:(AGSharePublishContentView *)publishContentView;


@end

/**
 *	@brief	新浪微博分享内容视图
 */
@interface AGSharePublishContentView : UIView <ISSPublishContentView,
                                               UITextViewDelegate>
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
    id<ISSClient> _client;
    id<ISSPublishSession> _session;
    
    ShareType _shareType;
    SSPublishContent *_publishContent;
    
    CGFloat _imageQuality;
    NSString *_content;
    BOOL _emptyCotent;
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
 *	@brief	分享客户端对象
 */
@property (nonatomic,readonly) id<ISSClient> client;



@end
