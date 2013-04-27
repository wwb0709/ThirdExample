//
//  SKGoodsInfo.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-9-26.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGTagInfo.h"

/**
 *	@brief	商品类型
 */
typedef enum
{
	SKGoodsInfoTypeGoods = 1, /**< 商品 */
	SKGoodsInfoTypeLink = 2 /**< 链接 */
}
AGGoodsInfoType;


/**
 *	@brief	商品信息
 */
@interface AGGoodsInfo : NSObject
{
@private
    NSArray *_imageUrls;
    NSMutableDictionary *_thumbImageDict;
    CGSize _originalImageSize;
    NSString *_title;
    NSString *_iid;
    CGFloat _price;
    CGFloat _couponprice;
    NSString *_clickUrl;
    NSInteger _favCount;
    NSInteger _cmtCount;
    NSInteger _volume;
    AGGoodsInfoType _type;
    AGTagInfo *_tagInfo;
    NSInteger _imgsize;
    
    NSString *_nextCmtTimeLine;
    NSMutableArray *_comments;
    NSMutableArray *_evaluations;
}

/**
 *	@brief	图片路径集合
 */
@property (nonatomic,retain) NSArray *imageUrls;

/**
 *	@brief	图片路径
 */
@property (nonatomic,readonly) NSString *imageUrl;

/**
 *	@brief	商品名称
 */
@property (nonatomic,copy) NSString *title;

/**
 *	@brief	商品ID
 */
@property (nonatomic,copy) NSString *iid;

/**
 *	@brief	商品价格
 */
@property (nonatomic) CGFloat price;

/**
 *	@brief	促销价格
 */
@property (nonatomic) CGFloat couponprice;


/**
 *	@brief	商品地址
 */
@property (nonatomic,copy) NSString *clickUrl;

/**
 *	@brief	收藏数量
 */
@property (nonatomic) NSInteger favCount;

/**
 *	@brief	评论数量
 */
@property (nonatomic) NSInteger cmtCount;

/**
 *	@brief	售出数量
 */
@property (nonatomic) NSInteger volume;

/**
 *	@brief	下一页评论标识
 */
@property (nonatomic,copy) NSString *nextCmtTimeLine;

/**
 *	@brief	评论列表
 */
@property (nonatomic,retain) NSMutableArray *comments;

/**
 *	@brief	评价列表
 */
@property (nonatomic,retain) NSMutableArray *evaluations;

/**
 *	@brief	商品类型
 */
@property (nonatomic) AGGoodsInfoType type;

/**
 *	@brief	标签
 */
@property (nonatomic,retain) AGTagInfo *tagInfo;

/**
 *	@brief	图片数量
 */
@property (nonatomic) NSInteger imgsize;

/**
 *	@brief	取得原图尺寸(仅用于精品商品)
 */
@property (nonatomic,readonly) CGSize originalImageSize;

/**
 *	@brief	获取缩略图路径(仅用于精品商品)
 *
 *	@param 	width 	缩略图宽度规格
 *
 *	@return	缩略图路径
 */
- (NSString *)thumbImageUrlWithWidth:(NSInteger)width;


/**
 *	@brief  创建商品信息
 *
 *	@param 	dict 	字典数据对象
 *
 *	@return	商品信息
 */
+ (AGGoodsInfo *)goodsInfoWithDict:(NSDictionary *)dict;


@end
