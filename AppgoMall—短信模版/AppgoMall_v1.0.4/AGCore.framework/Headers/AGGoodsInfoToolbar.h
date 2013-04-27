//
//  SKGoodsInfoToolbar.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-11-3.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "AGBaseView.h"
#import "AGGoodsInfoBuyButton.h"
#import "AGFavoriteButton.h"

@class AGGoodsInfoToolbar;

@protocol AGGoodsInfoToolbarDelegate <NSObject>

@optional

/**
 *	@brief	输入栏尺寸变更
 *
 *	@param 	toolbar 	工具栏
 *	@param 	frame 	矩形范围
 */
- (void)toolbar:(AGGoodsInfoToolbar *)toolbar resizeTo:(CGRect)frame;


@end

/**
 *	@brief	商品详情工具栏
 */
@interface AGGoodsInfoToolbar : AGBaseView <UITextViewDelegate>
{
@private
    UIImageView *_backgroundImageView;
    AGGoodsInfoBuyButton *_buyButton;
    AGFavoriteButton *_favoriteButton;
    UIButton *_inputCommentButton;
    
    UIImageView *_inputBackgroundImageView;
    UITextView *_textView;
    UIButton *_sendButton;
    UIButton *_changeAccountButton;
    
    CGRect _normalStateRect;
    CGRect _editorStateRect;
    BOOL _bIsEditor;
    BOOL _bIsOverMaxHeight;
    BOOL _bUpdateLayout;
    
    id<AGGoodsInfoToolbarDelegate> _delegate;
}

/**
 *	@brief	购买按钮
 */
@property (nonatomic,readonly) AGGoodsInfoBuyButton *buyButton;

/**
 *	@brief	收藏按钮
 */
@property (nonatomic,readonly) UIButton *favoriteButton;

/**
 *	@brief	输入评论按钮
 */
@property (nonatomic,readonly) UIButton *inputCommentButton;

/**
 *	@brief	输入视图
 */
@property (nonatomic,readonly) UITextView *textView;

/**
 *	@brief	发送按钮
 */
@property (nonatomic,readonly) UIButton *sendButton;

/**
 *	@brief	变更帐号按钮
 */
@property (nonatomic,readonly) UIButton *changeAccountButton;


/**
 *	@brief	协议对象
 */
@property (nonatomic,assign) id<AGGoodsInfoToolbarDelegate> delegate;


/**
 *	@brief	设置为正常状态
 */
- (void)setNormalState;

/**
 *	@brief	设置为编辑状态
 */
- (void)setEditorState;

/**
 *	@brief	清空文本并取消输入焦点
 */
- (void)clearTextAndKillFocus;

@end
