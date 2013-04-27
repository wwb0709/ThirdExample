//
//  SKAPIFacade.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-9-25.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EventDispatcher.h"
#import "IAPIHandler.h"
#import "IUIAction.h"
#import "ImageCacheManager.h"
#import "AGAPIProxy.h"
#import "SinaWeiboOAuth2Client.h"
#import "QQSpaceOAuth2Client.h"
#import "TecentWeiboOAuth2Client.h"
#import "NotificationDefinition.h"
#import "AGImagePreloadManager.h"
#import "QQSpaceUserInfo.h"
#import "AppgoMallDelegate.h"
#import "AGUserInfo.h"

#define AG_VERSION @"1.0.0"

/**
 *	@brief	尚未登录
 */
#define AG_NOTIF_NOT_LOGGED_IN @"agnNotLoggedIn"

/**
 *	@brief	登录成功
 */
#define AG_NOTIF_LOGIN_SUC @"loginSuc"

/**
 *	@brief	登录失败
 */
#define AG_NOTIF_LOGIN_FAI @"loginFai"

/**
 *	@brief	添加评论成功
 */
#define AG_NOTIF_ADD_COMMENT_SUC @"addCommentSuc"

/**
 *	@brief	添加评论失败
 */
#define AG_NOTIF_ADD_COMMENT_FAI @"addCommentFai"

/**
 *	@brief	添加收藏成功
 */
#define AG_NOTIF_ADD_FAVORITE_SUC @"addFavoriteSuc"

/**
 *	@brief	添加收藏失败
 */
#define AG_NOTIF_ADD_FAVORITE_FAI @"addFavoriteFai"

/**
 *	@brief	移除收藏成功
 */
#define AG_NOTIF_REMOVE_FAVORITE_SUC @"removeFavoriteSuc"

/**
 *	@brief	移除收藏失败
 */
#define AG_NOTIF_REMOVE_FAVORITE_FAI @"removeFavoriteFai"

/**
 *	@brief	新浪微博授权成功
 */
#define AG_NOTIF_SINA_WEIBO_AUTHORIZE_SUC @"sinaWeiboAuthorizeSuc"

/**
 *	@brief	新浪微博授权失败
 */
#define AG_NOTIF_SINA_WEIBO_AUTHORIZE_FAI @"sinaWeiboAuthorizeFai"

/**
 *	@brief	新浪微博获取用户信息成功
 */
#define AG_NOTIF_SINA_WEIBO_GET_USER_INFO_SUC @"sinaWeiboGetUserInfoSuc"

/**
 *	@brief	新浪微博获取用户信息失败
 */
#define AG_NOTIF_SINA_WEIBO_GET_USER_INFO_FAI @"sinaWeiboGetUserInfoFai"

/**
 *	@brief	新浪微博分享内容成功
 */
#define AG_NOTIF_SINA_WEIBO_PUBLISH_CONTENT_SUC @"sinaWeiboPublishContentSuc"

/**
 *	@brief	新浪微博分享内容失败
 */
#define AG_NOTIF_SINA_WEIBO_PUBLISH_CONTENT_FAI @"sinaWeiboPublishContentFai"

/**
 *	@brief	腾讯微博授权成功
 */
#define AG_NOTIF_TECENT_WEIBO_AUTHORIZE_SUC @"tecentWeiboAuthorizeSuc"

/**
 *	@brief	腾讯微博授权失败
 */
#define AG_NOTIF_TECENT_WEIBO_AUTHORIZE_FAI @"tecentWeiboAuthorizeFai"

/**
 *	@brief	QQ登录授权成功
 */
#define AG_NOTIF_QQ_LOGIN_AUTHORIZE_SUC @"qqLoginAuthorizeSuc"

/**
 *	@brief	QQ登录授权失败
 */
#define AG_NOTIF_QQ_LOGIN_AUTHORIZE_FAI @"qqLoginAuthorizeFai"

/**
 *	@brief	QQ登录获取用户信息成功
 */
#define AG_NOTIF_QQ_LOGIN_GET_USER_INFO_SUC @"qqLoginGetUserInfoSuc"

/**
 *	@brief	QQ登录获取用户信息失败
 */
#define AG_NOTIF_QQ_LOGIN_GET_USER_INFO_FAI @"qqLoginGetUserInfoFai"

/**
 *	@brief	更新收藏商品
 */
#define AG_NOTIF_UPDATE_FAVORITED_GOODS @"updateFavoritedGoods"

/**
 *	@brief	API前置器类，开发者通过使用此类对象来与服务器API进行交互
 */
@interface AGAPIFacade : EventDispatcher <IAPIHandler>
{
@private
    AGAPIProxy *_apiProxy;
    NSBundle *_sdkBundle;
    ImageCacheManager *_imageCacheManager;
    SinaWeiboOAuth2Client *_sinaWeiboClient;
    QQSpaceOAuth2Client *_qqloginClient;
    TecentWeiboOAuth2Client *_tecentWeiboClient;
    AGImagePreloadManager *_preloadManager;
    
    BOOL _initialized;
    BOOL _debugMode;
    CGFloat _timeFiexedValue;
    NSString *_deviceToken;
    NSString *_userToken;
    NSMutableArray *_favoritedGoodsList;
    NSMutableArray *_delaySelectorList;
    NSMutableDictionary *_requestFavoriteGoods;         //正在请求收藏/取消收藏的商品
    AGPromotionType _promotionType;
    
    id _delegate;
}

/**
 *	@brief	图片缓存管理器
 */
@property (nonatomic,readonly) ImageCacheManager *imageCacheManager;

/**
 *	@brief	新浪微博客户端工具类
 */
@property (nonatomic,readonly) SinaWeiboOAuth2Client *sinaWeiboClient;

/**
 *	@brief	腾讯微博客户端工具类
 */
@property (nonatomic,readonly) TecentWeiboOAuth2Client *tecentWeiboClient;

/**
 *	@brief	QQ登录客户端工具类
 */
@property (nonatomic,readonly) QQSpaceOAuth2Client *qqloginClient;

/**
 *	@brief	预加载图片管理器
 */
@property (nonatomic,readonly) AGImagePreloadManager *preloadManager;

/**
 *	@brief	初始化标识，YES表示已经启动应用，否则尚未启动应用。
 */
@property (nonatomic,readonly) BOOL initialized;

/**
 *	@brief	用户登录标识
 */
@property (nonatomic,readonly) BOOL hasLogged;

/**
 *	@brief	推广渠道.
 */
@property (nonatomic,readonly) AGPromotionType promotionType;

/**
 *	@brief	登录用户信息，未登录未nil
 */
@property (nonatomic,readonly) AGUserInfo *loggedUser;


/**
 *	@brief	获取API前置器共享实例
 *
 *	@return	API前置器对象
 */
+ (AGAPIFacade *)shareInstance;

#pragma mark Bundle

/**
 *	@brief	根据图片资源名称
 *
 *	@param 	named 	名称
 *
 *	@return	图片资源
 */
- (UIImage *)imageNamed:(NSString *)named;

#pragma mark Other

/**
 *	@brief	注销登录
 */
- (void)logout;

/**
 *	@brief	商品是否被收藏
 *
 *	@param 	goodsInfo 	商品信息
 *
 *	@return	YES：收藏  NO：未收藏
 */
- (BOOL)goodsFavorited:(AGGoodsInfo *)goodsInfo;

/**
 *	@brief	检测广告列表缓存
 *
 *	@return	YES 存在，NO 不存在
 */
- (BOOL)checkAdsCache;

/**
 *	@brief	移除广告缓存
 */
- (void)removeAdsCache;

/**
 *	@brief	检测推荐商品
 *
 *	@param 	popularnum 	热门指数
 *	@param 	itemSize 	取得商品的数量
 *
 *	@return	YES 存在， NO 不存在
 */
- (BOOL)checkRecommendGoodsListCacheWithPopularNum:(long long)popularnum
                                          itemSize:(NSInteger)itemSize;

/**
 *	@brief	移除推荐商品缓存
 *
 *	@param 	popularnum 	热门指数
 *	@param 	itemSize 	取得商品数量
 */
- (void)removeRecommendGoodsListCacheWithPopularNum:(long long)popularnum
                                           itemSize:(NSInteger)itemSize;


/**
 *	@brief	检测分类列表缓存
 *
 *	@return	YES 存在，NO 不存在
 */
- (BOOL)checkGoodsCategoryListCache;

/**
 *	@brief	移除商品分类列表缓存
 */
- (void)removeGoodsCategoryListCache;

/**
 *	@brief	检测分类商品列表缓存
 *
 *	@param 	categoryId 	分类ID
 *	@param 	pagenum 	页码
 *	@param 	pageSize 	分页大小
 *	@param 	sortfield 	排序字段
 *	@param 	order 	排序
 *
 *	@return	YES 存在， NO 不存在
 */
- (BOOL)checkCategoryGoodsListCacheWithCategoryId:(NSInteger)categoryId
                                          pagenum:(NSInteger)pagenum
                                         pageSize:(NSInteger)pageSize
                                        sortfield:(AGCategoryGoodsSortField)sortfield
                                            order:(AGCategoryGoodsSortOrder)order;

/**
 *	@brief	移除分类商品列表缓存
 *
 *	@param 	categoryId 	分类ID
 *	@param 	pagenum 	页码
 *	@param 	pageSize 	分页大小
 *	@param 	sortfield 	排序字段
 *	@param 	order 	排序
 */
- (void)removeCategoryGoodsListCacheWithCategoryId:(NSInteger)categoryId
                                           pagenum:(NSInteger)pagenum
                                          pageSize:(NSInteger)pageSize
                                         sortfield:(AGCategoryGoodsSortField)sortfield
                                             order:(AGCategoryGoodsSortOrder)order;


/**
 *	@brief	检测商品信息缓存
 *
 *	@param 	goodsId 	商品ID
 *
 *	@return	YES 存在， NO 不存在
 */
- (BOOL)checkGoodsInfoCacheWithGoodsId:(NSString *)goodsId;

/**
 *	@brief	移除商品信息缓存
 *
 *	@param 	goodsId 	商品信息ID
 */
- (void)removeGoodsInfoCacheWithGoodsId:(NSString *)goodsId;

/**
 *	@brief	检测评论列表缓存
 *
 *	@param 	goodsInfo 	商品信息
 *	@param 	startTimeLine 	起始分页时间
 *	@param 	pageSize 	页码
 *
 *  @return YES 存在，NO 不存在
 */
- (BOOL)checkCommentListCacheWithGoodsInfo:(AGGoodsInfo *)goodsInfo
                             startTimeLine:(NSString *)startTimeLine
                                  pageSize:(NSInteger)pageSize;

/**
 *	@brief	移除评论列表缓存
 *
 *	@param 	goodsInfo 	商品信息
 *	@param 	startTimeLine 	起始分页时间
 *	@param 	pageSize 	页码
 */
- (void)removeCommentListCacheWithGoodsInfo:(AGGoodsInfo *)goodsInfo
                              startTimeLine:(NSString *)startTimeLine
                                   pageSize:(NSInteger)pageSize;


/**
 *	@brief	检测搜索商品缓存
 *
 *	@param 	text 	搜索文本
 *	@param 	categoryid 	分类ID
 *	@param 	pageNo 	页码
 *	@param 	pageSize 	分页大小
 *
 *	@return	YES 存在，NO 不存在
 */
- (BOOL)checkSearchGoodsCacheWithText:(NSString *)text
                           categoryid:(NSInteger)categoryid
                               pageNo:(NSInteger)pageNo
                             pageSize:(NSInteger)pageSize;

/**
 *	@brief	移除搜索商品缓存
 *
 *	@param 	text 	搜索文本
 *	@param 	categoryid 	分类ID
 *	@param 	pageNo 	页码
 *	@param 	pageSize 	分页大小
 */
- (void)removeSearchGoodsCacheWithText:(NSString *)text
                            categoryid:(NSInteger)categoryid
                                pageNo:(NSInteger)pageNo
                              pageSize:(NSInteger)pageSize;

/**
 *	@brief	检测精品列表缓存
 *
 *  @param  tagId   标签ID
 *	@param 	pageNo 	页码
 *	@param 	pageSize 	分页大小
 *
 *	@return	YES 存在，NO 不存在
 */
- (BOOL)checkBoutiqueItemsCacheWithTagId:(NSInteger)tagId
                                  pageNo:(NSInteger)pageNo
                                 pageSize:(NSInteger)pageSize;

/**
 *	@brief	移除精品列表缓存
 *
 *  @param  tagId   标签ID
 *	@param 	pageNo 	页码
 *	@param 	pageSize 	分页大小
 */
- (void)removeBoutiqueItemsCacheWithTagId:(NSInteger)tagId
                                   pageNo:(NSInteger)pageNo
                                  pageSize:(NSInteger)pageSize;

/**
 *	@brief	检测精品标签列表缓存
 *
 *	@return	YES 存在，NO 不存在
 */
- (BOOL)checkBoutiqueTagsCache;


/**
 *	@brief	移除精品标签列表缓存
 */
- (void)removeBoutiqueTagsCache;

/**
 *	@brief	处理打开链接
 *
 *	@param 	url 	URL地址
 *
 *	@return	YES表示处理地址，NO：不是不处理
 */
- (BOOL)handleOpenURL:(NSURL *)url;


#pragma mark 商城 API

/**
 *	@brief	启动应用,应用启动时调用。
 *
 *	@param 	appKey 	应用Key
 *  @param  appDelegate 应用事件委托
 *  @param  debugMode   调试模式
 */
- (void)startupApp:(NSString *)appKey
       appDelegate:(id)appDelegate
         debugMode:(BOOL)debugMode;

/**
 *	@brief	初始化应用信息
 */
- (void)cleanup;


/**
 *	@brief	获取商品广告信息
 *
 *	@param 	action 	UI行为协议对象,需要实现协议方法：
 *                      - (void)getAds:(NSArray *)ads;
 *                      - (void)getAdsError:(SKErrorInfo *)errorInfo;
 *  @param  needCacheData   是否需要缓存标志
 */
- (void)getAds:(id<IUIAction>)action needCacheData:(BOOL)needCacheData;


/**
 *	@brief	获取推荐信息
 *
 *	@param 	action 	UI行为协议对象,需要实现协议方法:
 *                      - (void)getRecommendGoodsList:(NSDictionary *)goodsList nextiids:(NSString *)nextiids itemSize:(NSInteger)itemSize;
 *                      - (void)getRecommendGoodsListError:(SKErrorInfo *)errorInfo;
 *  @param  popularnum    该App所有类别的热门指数,首次传0
 *  @param  itemSize    取得商品的数量
 *  @param  needCacheData   是否需要缓存标志
 */
- (void)getRecommendGoodsList:(id<IUIAction>)action
                   popularnum:(long long)popularnum
                     itemSize:(NSInteger)itemSize
                needCacheData:(BOOL)needCacheData;

/**
 *	@brief	获取商品分类列表
 *
 *  @param  action    UI行为协议对象,需要实现协议方法：
 *                      - (void)getGoodsCategoryList:(NSArray *)categoryList;
 *                      - (void)getGoodsCategoryListError:(SKErrorInfo *)errorInfo;
 *  @param  needCacheData   是否需要缓存标志
 */
- (void)getGoodsCategoryList:(id<IUIAction>)action needCacheData:(BOOL)needCacheData;

/**
 *	@brief	获取分类商品列表
 *
 *	@param 	action 	UI行为协议对象，需要实现协议方法：
 *                      - (void)getCategoryGoodsList:(NSArray *)goodsList pageSize:(NSInteger)pageSize nextStartGoodsId:(NSString *)nextStartGoodsId;
 *                      - (void)getCategoryGoodsListError:(SKErrorInfo *)errorInfo;
 *	@param 	categoryId 	分类ID
 *	@param 	startGoodsId 	起始商品ID，如果为首次获取则传nil
 *	@param 	pageSize 	分页大小，表示一页获取的商品数量
 *  @param  sortfield   排序字段
 *  @param  order   排序方式
 *  @param  needCacheData   是否需要缓存标志
 */
- (void)getCategoryGoodsList:(id<IUIAction>)action
                  categoryId:(NSInteger)categoryId
                     pagenum:(NSInteger)pagenum
                    pageSize:(NSInteger)pageSize
                   sortfield:(AGCategoryGoodsSortField)sortfield
                       order:(AGCategoryGoodsSortOrder)order
               needCacheData:(BOOL)needCacheData;

/**
 *	@brief	获取商品信息
 *
 *	@param 	action 	UI行为协议对象，需要实现协议方法：
 *                      - (void)getGoods:(SKGoodsInfo *)goodsInfo;
 *                      - (void)getGoodsError:(SKErrorInfo *)errorInfo;
 *	@param 	goodsId 	商品ID
 *  @param  needCacheData   是否需要缓存标志
 */
- (void)getGoodsInfo:(id<IUIAction>)action
             goodsId:(NSString *)goodsId
       needCacheData:(BOOL)needCacheData;

/**
 *	@brief	用户登录
 *
 *	@param 	account 	微博ID／QQ OpenID
 *	@param 	nickname 	昵称
 *	@param 	icon 	图标
 *	@param 	gender 	性别
 *	@param 	age 	年龄
 *	@param 	mobile 	手机号码
 *	@param 	snsFrom 	社交平台类型
 *	@param 	snsAuthDesc 	SNS认证信息
 *	@param 	weiboUrl 	微博地址
 */
- (void)login:(NSString *)account
     nickname:(NSString *)nickname
         icon:(NSString *)icon
       gender:(GenderType)gender
          age:(NSInteger)age
       mobile:(NSString *)mobile
      snsFrom:(SNSType)snsFrom
  snsAuthDesc:(NSString *)snsAuthDesc
     weiboUrl:(NSString *)weiboUrl;

/**
 *	@brief	发表评论
 *
 *	@param 	goodsInfo 	商品信息
 *	@param 	text 	评论内容
 */
- (void)addComment:(AGGoodsInfo *)goodsInfo
              text:(NSString *)text;

/**
 *	@brief	添加收藏
 *
 *	@param 	goodsInfo 	商品信息
 */
- (void)addFavorite:(AGGoodsInfo *)goodsInfo;

/**
 *	@brief	取消收藏
 *
 *	@param 	goodsInfo 	商品信息
 */
- (void)removeFavorite:(AGGoodsInfo *)goodsInfo;

/**
 *	@brief	获取评论列表
 *
 *	@param 	action 	UI行为协议对象，需要实现协议方法：
 *                  - (void)getCommentList:(NSArray *)commentList itemSize:(NSInteger)itemSize amount:(NSInteger)amount nextStartCommentId:(NSString *)nextStartCommentId;
 *                  - (void)getCommentListError:(SKErrorInfo *)errorInfo;
 *	@param 	goodsInfo 	商品信息
 *	@param 	startTimeLine 	起始评论标识
 *	@param 	pageSize 	分页大小
 *  @param  needCacheData   是否需要缓存标志
 */
- (void)getCommentList:(id<IUIAction>)action
             goodsInfo:(AGGoodsInfo *)goodsInfo
         startTimeLine:(NSString *)startTimeLine
              pageSize:(NSInteger)pageSize
         needCacheData:(BOOL)needCacheData;


/**
 *	@brief	搜索商品
 *
 *	@param 	action 	UI行为协议对象，需要实现协议方法：
 *                  - (void)searchGoods:(NSArray *)goodsList itemSize:(NSInteger)itemSize nextPageNo:(NSInteger)nextPageNo;
 *                  - (void)searchGoodsError:(SKErrorInfo *)errorInfo;
 *	@param 	text 	商品信息
 *  @param  categoryid  分类ID
 *	@param 	pageNo 	页码
 *	@param 	pageSize 	分页大小
 *  @param  needCacheData   是否需要缓存标志
 */
- (void)searchGoods:(id<IUIAction>)action
               text:(NSString *)text
         categoryid:(NSInteger)categoryid
             pageNo:(NSInteger)pageNo
           pageSize:(NSInteger)pageSize
      needCacheData:(BOOL)needCacheData;

/**
 *	@brief	购买商品
 *
 *	@param 	goodsInfo 	商品信息
 */
- (void)gotoBuyGoods:(AGGoodsInfo *)goodsInfo;

/**
 *	@brief	增加商品PV
 *
 *	@param 	goodsInfo 	商品信息
 */
- (void)addGoodsPV:(AGGoodsInfo *)goodsInfo;

/**
 *	@brief	分享购买商品
 *
 *	@param 	goodsInfo 	商品信息
 */
- (void)shareBuyGoods:(AGGoodsInfo *)goodsInfo;

#pragma mark 橱窗API

/**
 *	@brief	获取橱窗商品列表
 *
 *	@param 	action 	UI行为协议对象
 */
- (void)getShowcaseList:(id<IUIAction>)action;

/**
 *	@brief	增加橱窗商品展示次数
 *
 *	@param 	goodsInfoList 	商品列表
 */
- (void)addShowcaseItemShowCount:(NSArray *)goodsInfoList;

/**
 *	@brief	增加橱窗商品点击次数
 *
 *	@param 	goodsInfo 	商品信息
 */
- (void)addShowcaseItemClickCount:(AGGoodsInfo *)goodsInfo;


#pragma mark 精品API

/**
 *	@brief	获取精品列表
 *
 *	@param 	action 	UI行为协议对象
 *  @param  tagId   标签Id
 *	@param 	pageNo 	页码
 *	@param 	pageSize 	分页尺寸
 *	@param 	needCacheData 	是否需要缓存标志
 */
- (void)getBoutiqueItems:(id<IUIAction>)action
                   tagId:(NSInteger)tagId
                  pageNo:(NSInteger)pageNo
                pageSize:(NSInteger)pageSize
           needCacheData:(BOOL)needCacheData;

/**
 *	@brief	获取精品标签列表
 *
 *	@param 	action 	UI行为协议对象
 *	@param 	needCacheData 	是否需要缓存标识
 */
- (void)getBoutiqueTags:(id<IUIAction>)action
          needCacheData:(BOOL)needCacheData;

/**
 *	@brief	获取精品图片列表
 *
 *	@param 	action 	UI行为协议对象
 *	@param 	goodsId 	商品ID
 *	@param 	needCacheData 	是否需要缓存标识
 */
- (void)getBoutiqueItemImages:(id<IUIAction>)action
                      goodsId:(NSString *)goodsId
                needCacheData:(BOOL)needCacheData;



@end
