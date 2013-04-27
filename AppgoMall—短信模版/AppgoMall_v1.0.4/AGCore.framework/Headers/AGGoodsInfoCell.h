//
//  SKGoodsInfoCell.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-11-1.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AGAPIFacade.h"
#import "AGGoodsInfo.h"

/**
 *	@brief	商品基本信息单元格
 */
@interface AGGoodsInfoCell : UITableViewCell
{
@private
    AGAPIFacade *_facade;
    AGGoodsInfo *_goodsInfo;
    BOOL _needLayout;
    
    UIImageView *_backgroundImageView;
    UILabel *_priceSymbolLabel;
    UILabel *_priceLabel;
    UILabel *_saleHeadLabel;
    UILabel *_saleCountLabel;
    UILabel *_saleTailLabel;
//    UILabel *_titleLabel;
//    UIImageView *_lineImageView;
}

/**
 *	@brief	商品信息
 */
@property (nonatomic,retain) AGGoodsInfo *goodsInfo;


@end
