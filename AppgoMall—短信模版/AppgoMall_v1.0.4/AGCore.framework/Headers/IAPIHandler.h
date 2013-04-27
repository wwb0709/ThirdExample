//
//  IAPIHandler.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-9-25.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#pragma once

@class AGErrorInfo;
@class AGGoodsInfo;

/**
 *	@brief	性别
 */
typedef enum
{
	GenderTypeMale = 0, /**< 男 */
	GenderTypeFemale = 1, /**< 女 */
    GenderTypeUnknown = 2   /**< 未知 */
}
GenderType;

/**
 *	@brief	平台类型
 */
typedef enum
{
    SNSTypeUnknown = 0, /**< 未知 */
	SNSTypeSinaWeibo = 1, /**< 新浪微博 */
	SNSTypeQQ = 2, /**< QQ */
    SNSTypeTaoBao = 3   /**< 淘宝 */
}
SNSType;

/**
 *	@brief	API处理器协议
 */
@protocol IAPIHandler <NSObject>

@optional

#pragma mark 获取设备令牌

/**
 *	@brief	获取设备令牌成功
 *
 *	@param 	token 	令牌
 *	@param 	serverTime 	服务器时间
 *  @param  userData    附加数据
 */
- (void)getDeviceTokenSuccess:(NSString *)token serverTime:(CGFloat)serverTime userData:(id)userData;

/**
 *	@brief	获取设备令牌失败
 *
 *	@param 	errorInfo 	错误信息
 *  @param  userData    附加数据
 */
- (void)getDeviceTokenFailure:(AGErrorInfo *)errorInfo userData:(id)userData;


#pragma mark 获取推荐信息

/**
 *	@brief	获取推荐信息成功
 *
 *	@param 	ads 	推荐商品信息
 *  @param  userData    附加数据
 */
- (void)getRecommendSuccess:(NSArray *)ads userData:(id)userData;


/**
 *	@brief	获取推荐信息失败
 *
 *	@param 	errorInfo 	错误信息
 *  @param  userData    附加数据
 */
- (void)getRecommendFailure:(AGErrorInfo *)errorInfo userData:(id)userData;


#pragma mark 获取商品分类列表

/**
 *	@brief	获取商品分类列表成功
 *
 *	@param 	goodsCategorysArray 	商品分类列表
 *  @param  userData    附加数据
 */
- (void)getGoodsCategorysSuccess:(NSArray *)goodsCategorysArray userData:(id)userData;

/**
 *	@brief	获取商品分类列表失败
 *
 *	@param 	errorInfo 	错误信息
 *  @param  userData    附加数据
 */
- (void)getGoodsCategorysFailure:(AGErrorInfo *)errorInfo userData:(id)userData;

#pragma mark 登录

/**
 *	@brief	登录成功
 *
 *	@param 	token 	用户令牌
 *  @param  userData    附加数据
 */
- (void)loginSuccess:(NSString *)token userData:(id)userData;

/**
 *	@brief	登录失败
 *
 *	@param 	errorInfo 	错误描述
 *  @param  userData    附加数据
 */
- (void)loginFailure:(AGErrorInfo *)errorInfo userData:(id)userData;

#pragma mark 获取分类商品列表

/**
 *	@brief	获取分类商品列表成功,如果itemSize为0或goodsList为空则表示无更多商品
 *
 *	@param 	goodsList 	商品列表
 *	@param 	itemSize 	商品数量
 *  @param  total   商品总数
 *  @param  userData    附加数据
 */
- (void)getCategoryGoodsListSuccess:(NSArray *)goodsList
                           itemSize:(NSInteger)itemSize
                              total:(NSInteger)total
                           userData:(id)userData;

/**
 *	@brief	获取分类商品列表失败
 *
 *	@param 	errorInfo 	错误描述
 *  @param  userData    附加数据
 */
- (void)getCategoryGoodsListFailure:(AGErrorInfo *)errorInfo userData:(id)userData;

#pragma mark 获取商品详情

/**
 *	@brief	获取商品详情成功
 *
 *	@param 	goodsInfo 	商品信息
 *  @param  userData    附加数据
 */
- (void)getGoodsInfoSuccess:(AGGoodsInfo *)goodsInfo userData:(id)userData;

/**
 *	@brief	获取商品详情失败
 *
 *	@param 	errorInfo 	错误描述
 *  @param  userData    附加数据
 */
- (void)getGoodsInfoFailure:(AGErrorInfo *)errorInfo userData:(id)userData;

#pragma mark 发表评论

/**
 *	@brief	发表评论成功
 *
 *  @param  userData    附加数据
 */
- (void)addCommentSuccess:(id)userData;

/**
 *	@brief	发表评论失败
 *
 *  @param  userData    附加数据
 *
 *	@param 	errorInfo 	错误描述
 */
- (void)addCommentFailure:(AGErrorInfo *)errorInfo userData:(id)userData;

#pragma mark 收藏商品

/**
 *	@brief	收藏商品成功
 *
 *  @param  userData 附加数据
 */
- (void)addFavoriteSuccess:(id)userData;

/**
 *	@brief	收藏商品失败
 *
 *	@param 	errorInfo 	错误描述
 *  @param  userData    附加数据
 */
- (void)addFavoriteFailure:(AGErrorInfo *)errorInfo userData:(id)userData;

#pragma mark 取消商品收藏

/**
 *	@brief	取消商品收藏成功
 *
 *  @param  userData    附加数据
 */
- (void)removeFavoriteSuccess:(id)userData;

/**
 *	@brief	取消商品收藏失败
 *
 *	@param 	errorInfo 	错误描述
 *  @param  userData    附加数据
 */
- (void)removeFavoriteFailure:(AGErrorInfo *)errorInfo userData:(id)userData;

#pragma mark 获取评论列表

/**
 *	@brief	获取评论列表成功
 *
 *	@param 	comments 	评论列表
 *	@param 	commentsSize 	评论数量
 *	@param 	commentTotal 	评论总数量
 *	@param 	nextTimeline 	下次请求标识
 *  @param  userData    附加数据
 */
- (void)getCommentListSuccess:(NSArray *)comments
                 commentsSize:(NSInteger)commentsSize
                 commentTotal:(NSInteger)commentTotal
                 nextTimeline:(NSString *)nextTimeline
                     userData:(id)userData;

/**
 *	@brief	获取评论列表失败
 *
 *	@param 	errorInfo 	错误描述
 *  @param  userData    附加数据
 */
- (void)getCommentListFailure:(AGErrorInfo *)errorInfo userData:(id)userData;

#pragma mark 搜索商品

/**
 *	@brief	搜索商品成功
 *
 *	@param 	goodsList 	商品列表
 *	@param 	itemsSize 	商品数量
 *	@param 	nextPageNum 	下一页页码
 *  @param  userData    附加数据
 */
- (void)searchGoodsSuccess:(NSArray *)goodsList
                 itemsSize:(NSInteger)itemsSize
               nextPageNum:(NSInteger)nextPageNum
                  userData:(id)userData;

/**
 *	@brief	搜索商品失败
 *
 *	@param 	errorInfo 	错误描述
 *  @param  userData    附加数据
 */
- (void)searchGoodsFailure:(AGErrorInfo *)errorInfo
                  userData:(id)userData;

#pragma mark 获取首页商品列表

/**
 *	@brief	获取首页商品成功
 *
 *	@param 	goodsList 	商品列表
 *	@param 	itemSize 	总商品数量
 *  @param  popularnum  热门指数。
 *  @param  userData    附加数据
 */
- (void)getIndexGoodsListSuccess:(NSArray *)goodsList
                       itemsSize:(NSInteger)itemSize
                      popularnum:(long long)popularnum
                        userData:(id)userData;

/**
 *	@brief	获取首页商品失败
 *
 *	@param 	errorInfo 	错误描述
 *  @param  userData    附加数据
 */
- (void)getIndexGoodsFailure:(AGErrorInfo *)errorInfo userData:(id)userData;

#pragma mark 意向购买

/**
 *	@brief	意向购买成功
 *
 *  @param  clickUrl    商品详情URL
 *  @param  userData    附加数据
 */
- (void)gotoBuySuccess:(NSString *)clickUrl userData:(id)userData;

/**
 *	@brief	意向购买失败
 *
 *	@param 	errorInfo 	错误描述
 *  @param  userData    附加数据
 */
- (void)gotoBuyFailure:(AGErrorInfo *)errorInfo userData:(id)userData;

#pragma mark 获取商品收藏列表

/**
 *	@brief	获取收藏列表成功
 *
 *	@param 	favoriteList 	收藏列表
 *	@param 	favoritedCount 	收藏数量
 *	@param 	userData 	附加数据
 */
- (void)getGoodsFavoritedListSuccess:(NSArray *)favoriteList
                      favoritedCount:(NSInteger)favoritedCount
                            userData:(id)userData;

/**
 *	@brief	获取收藏列表失败
 *
 *	@param 	errorInfo 	错误信息
 *	@param 	userData 	附加数据
 */
- (void)getGoodsFavoritedListFailure:(AGErrorInfo *)errorInfo
                            userData:(id)userData;

#pragma mark 添加商品PV

/**
 *	@brief	增加商品PV成功
 *
 *	@param 	userData 	附加数据
 */
- (void)addGoodsPVSuccess:(id)userData;

/**
 *	@brief	增加商品PV失败
 *
 *	@param 	errorInfo 	错误信息
 *	@param 	userData 	附加数据
 */
- (void)addGoodsPVFailure:(AGErrorInfo *)errorInfo userData:(id)userData;

#pragma mark 获取橱窗商品列表

/**
 *	@brief	获取橱窗商品列表成功
 *
 *	@param 	items 	商品列表
 *	@param 	puts 	投放量
 *	@param 	backgroundColor 	背景颜色
 *	@param 	titleColor 	标题颜色
 *	@param 	priceColor 	价格颜色
 *  @param  userData    附加数据
 */
- (void)getShowcaseListSuccess:(NSArray *)items
                          puts:(NSInteger)puts
               backgroundColor:(UIColor *)backgroundColor
                    titleColor:(UIColor *)titleColor
                    priceColor:(UIColor *)priceColor
                      userData:(id)userData;

/**
 *	@brief	获取橱窗商品列表失败
 *
 *	@param 	errorInfo 	错误信息
 *	@param 	userData 	附加数据
 */
- (void)getShowcaseListFailure:(AGErrorInfo *)errorInfo
                      userData:(id)userData;

#pragma mark 增加橱窗商品展示次数

/**
 *	@brief	增加橱窗商品展示次数成功
 *
 *	@param 	userData 	附加数据
 */
- (void)addShowcaseItemShowCountSuccess:(id)userData;

/**
 *	@brief	增加橱窗商品展示次数失败
 *
 *	@param 	errorInfo 	错误信息
 *	@param 	userData 	附加数据
 */
- (void)addShowcaseItemShowCountFailure:(AGErrorInfo *)errorInfo
                               userData:(id)userData;

#pragma mark 增加橱窗商品点击次数

/**
 *	@brief	增加橱窗商品点击次数成功
 *
 *	@param 	userData 	附加数据
 */
- (void)addShowcaseItemClickCountSuccess:(id)userData;

/**
 *	@brief	增加橱窗商品点击次数失败
 *
 *	@param 	errorInfo 	错误信息
 *	@param 	userData 	附加数据
 */
- (void)addShowcaseItemClickCountFailure:(AGErrorInfo *)errorInfo
                                userData:(id)userData;

#pragma mark 分享购买商品

/**
 *	@brief	分享购买商品成功
 *
 *	@param 	clickUrl 	商品链接地址
 *	@param 	userData 	附加数据
 */
- (void)shareBuyGoodsSuccess:(NSString *)clickUrl userData:(id)userData;

/**
 *	@brief	分享购买商品失败
 *
 *	@param 	errorInfo 	错误信息
 *	@param 	userData 	附加数据
 */
- (void)shareBuyGoodsFailure:(AGErrorInfo *)errorInfo userData:(id)userData;

#pragma mark 错误发送

/**
 *	@brief	错误发送成功
 *
 *	@param 	userData 	附加数据
 */
- (void)errorSendSuccess:(id)userData;

/**
 *	@brief	错误发送失败
 *
 *	@param 	errorInfo 	错误信息
 *	@param 	userData 	附加数据
 */
- (void)errorSendFailure:(AGErrorInfo *)errorInfo userData:(id)userData;

#pragma mark 获取精品列表

/**
 *	@brief	获取精品列表成功
 *
 *	@param 	items 	精品列表
 *  @param  pageNo  页码
 *	@param 	itemSize 	返回的商品数量
 *	@param 	amount 	精品总数
 *	@param 	userData 	附加数据
 */
- (void)getBoutiqueItemsSuccess:(NSArray *)items
                         pageNo:(NSInteger)pageNo
                       itemSize:(NSInteger)itemSize
                         amount:(NSInteger)amount
                       userData:(id)userData;

/**
 *	@brief	获取精品列表失败
 *
 *	@param 	errorInfo 	错误信息
 *	@param 	userData 	附加数据
 */
- (void)getBoutiqueItemsFailure:(AGErrorInfo *)errorInfo
                       userData:(id)userData;


#pragma mark 获取精品标签列表

/**
 *	@brief	获取精品标签列表成功
 *
 *	@param 	tags 	标签列表
 *	@param 	itemSize 	标签数量
 *	@param 	userData 	附加数据
 */
- (void)getBoutiqueTagsSuccess:(NSArray *)tags
                      itemSize:(NSInteger)itemSize
                      userData:(id)userData;

/**
 *	@brief	获取精品标签列表失败
 *
 *	@param 	errorInfo 	错误信息
 *	@param 	userData 	附加数据
 */
- (void)getBoutiqueTagsFailure:(AGErrorInfo *)errorInfo
                      userData:(id)userData;

#pragma mark 获取精品商品图片列表

/**
 *	@brief	获取精品商品图片列表成功
 *
 *	@param 	images 	图片列表
 *	@param 	itemSize 	图片数量
 *	@param 	userData 	附加数据
 */
- (void)getBoutiqueItemImagesSuccess:(NSArray *)images
                            itemSize:(NSInteger)itemSize
                            userData:(id)userData;

/**
 *	@brief	获取精品商品图片列表失败
 *
 *	@param 	errorInfo 	错误信息
 *	@param 	userData 	附加数据
 */
- (void)getBoutiqueItemImagesFailure:(AGErrorInfo *)errorInfo
                            userData:(id)userData;



@end