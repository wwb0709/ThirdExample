//
//  SKAPIProxy.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-9-25.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGHTTPTokenProxy.h"

/**
 *	@brief	分类商品列表排序字段
 */
typedef enum
{
	SKCategoryGoodsSortFieldSales = 1,  /**< 销量 */
	SKCategoryGoodsSortFieldPV = 2,     /**< 人气值 */
	SKCategoryGoodsSortFieldPrice = 3   /**< 价格 */
}
AGCategoryGoodsSortField;

/**
 *	@brief	分类商品列表排序方式
 */
typedef enum
{
	SKCategoryGoodsSortOrderDESC = 0,   /**< 降序 */
	SKCategoryGoodsSortOrderASC = 1     /**< 升序 */
}
AGCategoryGoodsSortOrder;

/**
 *	@brief	推广渠道
 */
typedef enum
{
	SKPromotionTypeStore = 10,      /**< 商城 */
	SKPromotionTypeShowcase = 20,   /**< 橱窗 */
    SKPromotionTypeBoutique = 30    /**< 精品 */
}
AGPromotionType;


/**
 *	@brief	API接口代理，负责组织请求数据以及处理解析数据结果
 */
@interface AGAPIProxy : NSObject <AGHTTPTokenProxyDelegate>
{
@private
    NSMutableArray *_requestTokenProxyArray;        //请求令牌代理数组
}

#pragma mark 商城

/**
 *	@brief	获取设备令牌
 *
 *  @param  appKey  应用Key
 *  @param  userData    附加数据，在接口结果中返回
 *
 *  @return HTTP令牌代理
 */
- (AGHTTPTokenProxy *)getDeviceToken:(NSString *)appKey userData:(id)userData;

/**
 *	@brief	获取推荐信息
 *
 *	@param 	deviceToken 	设备令牌
 *  @param  needCacheData   是否需要缓存数据
 *  @param  userData    附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)getRecommend:(NSString *)deviceToken
                     needCacheData:(BOOL)needCacheData
                          userData:(id)userData;

/**
 *	@brief	获取商品分类列表
 *
 *	@param 	deviceToken 	设备令牌
 *  @param  needCacheData   是否需要缓存数据
 *  @param  userData    附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)getGoodsCategorys:(NSString *)deviceToken
                          needCacheData:(BOOL)needCacheData
                               userData:(id)userData;

/**
 *	@brief	用户登录
 *
 *	@param 	deviceToken 	设备令牌
 *	@param 	account 	微博ID／QQ OpenID
 *	@param 	nickname 	昵称
 *	@param 	icon 	图标
 *	@param 	gender 	性别
 *	@param 	age 	年龄,无年龄信息请填负数
 *	@param 	mobile 	手机号码
 *	@param 	snsFrom 	社交平台类型
 *	@param 	snsAuthDesc 	SNS认证信息
 *	@param 	weiboUrl 	微博地址
 *  @param  userData    附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)login:(NSString *)deviceToken
                    account:(NSString *)account
                   nickname:(NSString *)nickname
                       icon:(NSString *)icon
                     gender:(GenderType)gender
                        age:(NSInteger)age
                     mobile:(NSString *)mobile
                    snsFrom:(SNSType)snsFrom
                snsAuthDesc:(NSString *)snsAuthDesc
                   weiboUrl:(NSString *)weiboUrl
                   userData:(id)userData;

/**
 *	@brief	获取分类的商品列表
 *
 *	@param 	deviceToken 	设备令牌
 *	@param 	categoryId 	分类ID
 *	@param 	pagenum 	页码
 *	@param 	pageSize 	分页大小
 *  @param  sortfield   排序字段
 *  @param  order       排序方式
 *  @param  needCacheData   是否需要缓存数据
 *  @param  userData    附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)getCategoryGoodsList:(NSString *)deviceToken
                                categoryId:(NSInteger)categoryId
                                   pagenum:(NSInteger)pagenum
                                  pageSize:(NSInteger)pageSize
                                 sortfield:(AGCategoryGoodsSortField)sortfield
                                     order:(AGCategoryGoodsSortOrder)order
                             needCacheData:(BOOL)needCacheData
                                  userData:(id)userData;

/**
 *	@brief	获取商品详细信息
 *
 *	@param 	deviceToken 	设备令牌
 *	@param 	goodsId 	商品ID
 *  @param  promotion   推广渠道
 *  @param  needCacheData   是否需要缓存数据
 *  @param  userData    附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)getGoodsInfo:(NSString *)deviceToken
                           goodsId:(NSString *)goodsId
                         promotion:(AGPromotionType)promotion
                     needCacheData:(BOOL)needCacheData
                          userData:(id)userData;


/**
 *	@brief	发表评论
 *
 *	@param 	userToken 	用户令牌
 *	@param 	goodsId 	商品ID
 *	@param 	text 	评论内容
 *  @param  userData    附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)addComment:(NSString *)userToken
                         goodsId:(NSString *)goodsId
                            text:(NSString *)text
                        userData:(id)userData;

/**
 *	@brief	收藏商品
 *
 *	@param 	userToken 	设备令牌
 *	@param 	goodsId 	商品ID
 *  @param  userData    附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)addFavorite:(NSString *)deviceToken
                          goodsId:(NSString *)goodsId
                         userData:(id)userData;

/**
 *	@brief	取消商品收藏
 *
 *	@param 	userToken 	设备令牌
 *	@param 	goodsId 	商品ID
 *  @param  userData    附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)removeFavorite:(NSString *)deviceToken
                             goodsId:(NSString *)goodsId
                            userData:(id)userData;

/**
 *	@brief	获取评论列表
 *
 *	@param 	deviceToken 	设备令牌
 *	@param 	goodsId 	商品ID
 *	@param 	startTimeLine 	起始评论标识,第一页此值传0
 *	@param 	pageSize 	分页大小
 *  @param  needCacheData   是否需要缓存数据
 *  @param  userData    附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)getCommentList:(NSString *)deviceToken
                             goodsId:(NSString *)goodsId
                       startTimeLine:(NSString *)startTimeLine
                            pageSize:(NSInteger)pageSize
                       needCacheData:(BOOL)needCacheData
                            userData:(id)userData;

/**
 *	@brief	搜索商品
 *
 *	@param 	deviceToken 	设备令牌
 *	@param 	text 	搜索内容
 *  @param  categoryid  分类ID
 *	@param 	pagenum 	页码
 *	@param 	pageSize 	分页大小
 *  @param  needCacheData   是否需要缓存数据
 *  @param  userData    附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)searchGoods:(NSString *)deviceToken
                             text:(NSString *)text
                       categoryid:(NSInteger)categoryid
                          pagenum:(NSInteger)pagenum
                         pageSize:(NSInteger)pageSize
                    needCacheData:(BOOL)needCacheData
                         userData:(id)userData;

/**
 *	@brief	获取首页商品列表
 *
 *	@param 	deviceToken 	设备令牌
 *	@param 	popularnum 	该App所有类别的热门指数,首次传0
 *	@param 	itemSize 	商品数量
 *  @param  needCacheData   是否需要缓存数据
 *  @param  userData    附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)getIndexGoodsList:(NSString *)deviceToken
                             popularnum:(long long)popularnum
                               itemSize:(NSInteger)itemSize
                          needCacheData:(BOOL)needCacheData
                               userData:(id)userData;

/**
 *	@brief	意向购买商品
 *
 *	@param 	deviceToken 	设备令牌
 *	@param 	goodsId 	商品ID
 *  @param  promotion   推广渠道
 *  @param  userData    附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)gotoBuy:(NSString *)deviceToken
                      goodsId:(NSString *)goodsId
                    promotion:(AGPromotionType)promotion
                     userData:(id)userData;

/**
 *	@brief	获取商品收藏列表
 *
 *	@param 	deviceToken 	设备令牌
 *	@param 	userData 	附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)getGoodsFavoritedList:(NSString *)deviceToken
                                   userData:(id)userData;

/**
 *	@brief	添加商品PV
 *
 *  @param  deviceToken 设备令牌
 *	@param 	goodsId 	商品ID
 *  @param  promotion   推广渠道
 *	@param 	userData 	附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)addGoodsPV:(NSString *)deviceToken
                         goodsId:(NSString *)goodsId
                       promotion:(AGPromotionType)promotion
                        userData:(id)userData;

/**
 *	@brief	分享购买商品
 *
 *	@param 	deviceToken 	设备令牌
 *	@param 	goodsId 	商品ID
 *	@param 	promotion 	推广渠道
 *	@param 	userData 	附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)shareBuyGoods:(NSString *)deviceToken
                            goodsId:(NSString *)goodsId
                          promotion:(AGPromotionType)promotion
                           userData:(id)userData;

/**
 *	@brief	发送错误信息
 *
 *	@param 	deviceToken 	设备令牌
 *	@param 	appName 	应用名称
 *	@param 	appId 	应用ID
 *	@param 	appVersion 	应用版本
 *	@param 	msg 	内容
 *	@param 	sdkVersion 	SDK版本
 *	@param 	userData 	附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)errorSend:(NSString *)deviceToken
                        appName:(NSString *)appName
                          appId:(NSString *)appId
                     appVersion:(NSString *)appVersion
                            msg:(NSString *)msg
                     sdkVersion:(NSString *)sdkVersion
                       userData:(id)userData;



#pragma mark 橱窗

/**
 *	@brief	获取橱窗商品列表
 *
 *	@param 	deviceToken 	设备令牌
 *	@param 	userData 	附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)getShowcaseList:(NSString *)deviceToken userData:(id)userData;

/**
 *	@brief	增加橱窗商品展示次数
 *
 *	@param 	deviceToken 	设备令牌
 *	@param 	goodsIds 	商品ID列表，多个商品以逗号分隔
 *	@param 	userData 	附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)addShowcaseItemShowCount:(NSString *)deviceToken
                                      goodsIds:(NSString *)goodsIds
                                      userData:(id)userData;

/**
 *	@brief	增加橱窗商品点击次数
 *
 *	@param 	deviceToken 	设备令牌
 *	@param 	goodsId 	商品ID
 *	@param 	userData 	附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)addShowcaseItemClickCount:(NSString *)deviceToken
                                        goodsId:(NSString *)goodsId
                                       userData:(id)userData;

#pragma mark 精品

/**
 *	@brief	获取精品列表
 *
 *  @param  deviceToken 设备令牌
 *  @param  tagId   标签id
 *	@param 	pageNo 	页码
 *	@param 	pageSize 	分页大小
 *  @param  needCacheData   是否需要缓存数据
 *  @param  userData    附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)getBoutiqueItems:(NSString *)deviceToken
                                 tagId:(NSInteger)tagId
                                pageNo:(NSInteger)pageNo
                              pageSize:(NSInteger)pageSize
                         needCacheData:(BOOL)needCacheData
                              userData:(id)userData;

/**
 *	@brief	获取精品标签列表
 *
 *	@param 	deviceToken 	设备令牌
 *	@param 	needCacheData 	是否需要缓存数据
 *	@param 	userData 	附加数据，在接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)getBoutiqueTags:(NSString *)deviceToken
                        needCacheData:(BOOL)needCacheData
                             userData:(id)userData;
/**
 *	@brief	获取精品商品图片列表
 *
 *	@param 	deviceToken 	设备令牌
 *	@param 	goodsId 	商品ID
 *	@param 	needCacheData 	是否需要缓存数据
 *	@param 	userData 	附加数据，再接口结果中返回
 *
 *	@return	HTTP令牌代理
 */
- (AGHTTPTokenProxy *)getBoutiqueItemImages:(NSString *)deviceToken
                                    goodsId:(NSString *)goodsId
                              needCacheData:(BOOL)needCacheData
                                   userData:(id)userData;



@end
