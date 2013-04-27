//
//  SSPublishContentToolbar.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-6.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ShareType.h"

/**
 *	@brief	发布内容工具栏
 */
@interface SSPublishContentToolbar : UIView
{
@private
    UIImageView *_bgImageView;
    
    UIButton *_keyboardButton;
    UIButton *_cameraButton;
    UIButton *_atButton;
    UIButton *_sharpButton;
    
    UIButton *_wxSessionButton;
    UIButton *_wxTimelineButton;
    UIButton *_qqButton;
    
//    UILabel *_wordCountLabel;
    
}

/**
 *	@brief	键盘按钮
 */
@property (nonatomic,readonly) UIButton *keyboardButton;

/**
 *	@brief	拍照按钮
 */
@property (nonatomic,readonly) UIButton *cameraButton;

/**
 *	@brief	@按钮
 */
@property (nonatomic,readonly) UIButton *atButton;

/**
 *	@brief	#按钮
 */
@property (nonatomic,readonly) UIButton *sharpButton;

/**
 *	@brief	微信好友按钮
 */
@property (nonatomic,readonly) UIButton *wxSessionButton;

/**
 *	@brief	微信朋友圈按钮
 */
@property (nonatomic,readonly) UIButton *wxTimelineButton;

/**
 *	@brief	QQ好友按钮
 */
@property (nonatomic,readonly) UIButton *qqButton;


/**
 *	@brief	字数标签
 */
//@property (nonatomic,readonly) UILabel *wordCountLabel;

/**
 *	@brief	设置拍照按钮图片
 *
 *	@param 	image 	图片对象
 */
- (void)setCameraButtonImage:(UIImage *)image;

/**
 *	@brief	刷新视图状态
 *
 *	@param 	type 	平台类型
 *  @param  oneKeyShareList 一键分享类型列表
 */
- (void)refreshStateWithType:(ShareType)type
             oneKeyShareList:(NSArray *)oneKeyShareList;


@end
