//
//  SKGoodsInfoSectionHeaderView.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-11-1.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "AGBaseView.h"

/**
 *	@brief	商品详情Section视图
 */
@interface AGGoodsInfoSectionHeaderView : AGBaseView
{
@private
    UIImageView *_backgroundImageView;
    UILabel *_titleLabel;
}

/**
 *	@brief	标题
 */
@property (nonatomic,copy) NSString *title;



@end
