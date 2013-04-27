//
//  SKGoodsCategoryInfo.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-9-26.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	商品分类信息
 */
@interface AGGoodsCategoryInfo : NSObject
{
@private
    NSInteger _cid;
    NSString *_title;
    NSString *_iconUrl;
    NSArray *_subCategorysArray;
}

/**
 *	@brief	分类ID
 */
@property (nonatomic) NSInteger cid;

/**
 *	@brief	分类名称
 */
@property (nonatomic,copy) NSString *title;

/**
 *	@brief	分类图标URL
 */
@property (nonatomic,copy) NSString *iconUrl;

/**
 *	@brief	子分类集合
 */
@property (nonatomic,retain) NSArray *subCategorysArray;

/**
 *	@brief	创建商品分类信息
 *
 *	@param 	dict 	字典数据对象
 *
 *	@return	商品分类信息
 */
+ (AGGoodsCategoryInfo *)goodsCategoryInfoWithDict:(NSDictionary *)dict;


@end
