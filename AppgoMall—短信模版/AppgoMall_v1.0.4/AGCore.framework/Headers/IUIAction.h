//
//  IUIAction.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-10-12.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	UI访问器协议,所有由接口回调视图的数据都由此协议进行转发
 */
@protocol IUIAction <NSObject>

@optional

/**
 *	@brief	取得广告列表
 *
 *	@param 	ads 	广告列表数据
 */
- (void)getAds:(NSArray *)ads;

/**
 *	@brief	获取广告列表错误
 *
 *	@param 	errorInfo 	错误信息
 */
- (void)getAdsError:(AGErrorInfo *)errorInfo;

/**
 *	@brief	取得推荐商品列表
 *
 *	@param 	goodsList 	商品列表数据
 *  @param  popularnum    热门指数
 *  @param  itemSize    商品数量
 */
- (void)getRecommendGoodsList:(NSArray *)goodsList
                   popularnum:(long long)popularnum
                     itemSize:(NSInteger)itemSize;
/**
 *	@brief	获取推荐商品列表错误
 *
 *	@param 	errorInfo 	错误信息
 */
- (void)getRecommendGoodsListError:(AGErrorInfo *)errorInfo;

/**
 *	@brief	取得商品分类列表
 *
 *	@param 	categoryList 	分类列表
 */
- (void)getGoodsCategoryList:(NSArray *)categoryList;

/**
 *	@brief	获取商品分类列表错误
 *
 *	@param 	errorInfo 	错误信息
 */
- (void)getGoodsCategoryListError:(AGErrorInfo *)errorInfo;

/**
 *	@brief	取得分类商品列表
 *
 *	@param 	goodsList 	商品列表
 *	@param 	itemSize 	商品数量
 *  @param  total   商品总数
 */
- (void)getCategoryGoodsList:(NSArray *)goodsList
                    itemSize:(NSInteger)itemSize
                       total:(NSInteger)total;

/**
 *	@brief	获取分类商品列表失败
 *
 *	@param 	errorInfo 	错误信息
 */
- (void)getCategoryGoodsListError:(AGErrorInfo *)errorInfo;

/**
 *	@brief	取得商品信息
 *
 *	@param 	goodsInfo 	商品信息
 */
- (void)getGoods:(AGGoodsInfo *)goodsInfo;

/**
 *	@brief	获取商品信息失败
 *
 *	@param 	errorInfo 	错误信息
 */
- (void)getGoodsError:(AGErrorInfo *)errorInfo;

/**
 *	@brief	取得商品评论列表
 *
 *	@param 	commentList 	评论列表
 *	@param 	itemSize 	评论数量
 *	@param 	amount 	评论总数
 *	@param 	nextTimeLine 	下一页评论标识
 */
- (void)getCommentList:(NSArray *)commentList
              itemSize:(NSInteger)itemSize
                amount:(NSInteger)amount
          nextTimeLine:(NSString *)nextTimeLine;

/**
 *	@brief	获取商品评论失败
 *
 *	@param 	errorInfo 	错误描述
 */
- (void)getCommentListError:(AGErrorInfo *)errorInfo;

/**
 *	@brief	取得搜索商品列表
 *
 *	@param 	goodsList 	商品列表
 *	@param 	itemSize 	商品数量
 *	@param 	nextPageNo 	下一页页码
 */
- (void)searchGoods:(NSArray *)goodsList
           itemSize:(NSInteger)itemSize
         nextPageNo:(NSInteger)nextPageNo;

/**
 *	@brief	搜索商品失败
 *
 *	@param 	errorInfo 	错误描述
 */
- (void)searchGoodsError:(AGErrorInfo *)errorInfo;

/**
 *	@brief	取得橱窗商品列表
 *
 *	@param 	items 	商品列表
 *	@param 	puts 	投放比例
 *	@param 	backgroundColor 	背景颜色
 *	@param 	titleColor 	标题颜色
 *	@param 	priceColor 	价格颜色
 */
- (void)getShowcaseList:(NSArray *)items
                   puts:(NSInteger)puts
        backgroundColor:(UIColor *)backgroundColor
             titleColor:(UIColor *)titleColor
             priceColor:(UIColor *)priceColor;

/**
 *	@brief	获取橱窗商品列表失败
 *
 *	@param 	errorInfo 	错误描述
 */
- (void)getShowcaseListError:(AGErrorInfo *)errorInfo;


/**
 *	@brief	获取精品列表成功
 *
 *	@param 	items 	精品列表
 *	@param 	pageNo 	页码
 *	@param 	pageSize 	分页大小
 *	@param 	total 	总精品数量
 */
- (void)getBoutiqueItems:(NSArray *)items
                  pageNo:(NSInteger)pageNo
                pageSize:(NSInteger)pageSize
                   total:(NSInteger)total;

/**
 *	@brief	获取精品列表失败
 *
 *	@param 	errorInfo 	错误描述
 */
- (void)getBoutiqueItemsError:(AGErrorInfo *)errorInfo;


/**
 *	@brief	获取精品标签列表成功
 *
 *	@param 	tags 	标签列表
 *	@param 	itemSize 	标签数量
 */
- (void)getBoutiqueTags:(NSArray *)tags itemSize:(NSInteger)itemSize;

/**
 *	@brief	获取精品标签列表失败
 *
 *	@param 	errorInfo 	错误描述
 */
- (void)getBoutiqueTagsError:(AGErrorInfo *)errorInfo;

/**
 *	@brief	获取精品图片列表成功
 *
 *	@param 	images 	图片列表
 *	@param 	itemSize 	图片数量
 */
- (void)getBoutiqueItemImages:(NSArray *)images itemSize:(NSInteger)itemSize;

/**
 *	@brief	获取精品图片列表失败
 *
 *	@param 	errorInfo 	错误描述
 */
- (void)getBoutiqueItemImagesError:(AGErrorInfo *)errorInfo;


@end
