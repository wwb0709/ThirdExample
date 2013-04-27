//
//  SKGoodsInfoHeaderView.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-11-1.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "AGBaseView.h"
#import "AGGoodsInfo.h"
#import "AGProgressBar.h"

@class AGGoodsInfoHeaderView;

@protocol AGGoodsInfoHeaderViewDelegate <NSObject>

@optional

/**
 *	@brief	表头视图尺寸变更
 *
 *	@param 	headerView 	表头视图
 *  @param  size    尺寸
 */
- (void)goodsInfoHeaderView:(AGGoodsInfoHeaderView *)headerView onResize:(CGSize)size;

/**
 *	@brief	点击商品图片
 *
 *	@param 	headerView 	表头视图
 *	@param 	goodsInfo 	商品信息
 */
- (void)goodsInfoHeaderView:(AGGoodsInfoHeaderView *)headerView onTouch:(AGGoodsInfo *)goodsInfo;


@end

/**
 *	@brief	商品表头视图
 */
@interface AGGoodsInfoHeaderView : AGBaseView
{
@private
    UIImageView *_backgroundImageView;
    UIImageView *_iconImageView;
    UILabel *_goodsTitleLabel;
    AGProgressBar *_progressView;
    
    AGGoodsInfo *_goodsInfo;
    BOOL _needLayout;
    ImageLoader *_imageLoader;
    
    id<AGGoodsInfoHeaderViewDelegate> _delegate;
}

/**
 *	@brief	商品信息
 */
@property (nonatomic,retain) AGGoodsInfo *goodsInfo;

/**
 *	@brief	协议对象
 */
@property (nonatomic,assign) id<AGGoodsInfoHeaderViewDelegate> delegate;



@end
