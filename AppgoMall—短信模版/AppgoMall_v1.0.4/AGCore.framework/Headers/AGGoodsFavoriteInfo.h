//
//  SKGoodsFavoriteInfo.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-11-10.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	商品收藏信息
 */
@interface AGGoodsFavoriteInfo : NSObject
{
@private
    NSString *_favoriteId;
    NSString *_itemKey;
    CGFloat _createAt;
}

/**
 *	@brief	收藏ID
 */
@property (nonatomic,copy) NSString *favoriteId;

/**
 *	@brief	商品ID
 */
@property (nonatomic,copy) NSString *itemKey;

/**
 *	@brief	收藏时间
 */
@property (nonatomic) CGFloat createAt;

/**
 *	@brief  创建收藏信息
 *
 *	@param 	dict 	字典数据对象
 *
 *	@return	收藏信息
 */
+ (AGGoodsFavoriteInfo *)favoriteInfoWithDict:(NSDictionary *)dict;

@end
