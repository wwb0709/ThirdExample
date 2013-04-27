//
//  SKHTTPTokenProxy.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-9-25.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGHTTPToken.h"
#import "IAPIHandler.h"

@class AGHTTPTokenProxy;

/**
 *	@brief	HTTP令牌代理委托
 */
@protocol AGHTTPTokenProxyDelegate <NSObject>

@optional

/**
 *	@brief	代理令牌工作完毕
 *
 *	@param 	httpTokenProxy 	HTTP令牌代理
 */
- (void)httpTokenProxyOnFinish:(AGHTTPTokenProxy *)httpTokenProxy;


@end

/**
 *	@brief	HTTP令牌代理，主要对请求中返回数据进行处理并进行分发
 */
@interface AGHTTPTokenProxy : NSObject
{
@private
    AGHTTPToken *_token;
    NSMutableArray *_handlerArray;
    
    id _delegate;
}

#pragma mark Constructor

/**
 *	@brief	初始化令牌代理
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithToken:(AGHTTPToken *)token delegate:(id<AGHTTPTokenProxyDelegate>)delegate;


/**
 *	@brief	初始化获取设备令牌代理
 *
 *	@param 	token 	令牌对象
 *  @param  delegate    委托
 *
 *	@return	代理对象
 */
- (id)initWithGetDeviceToken:(AGHTTPToken *)token delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化获取推荐信息代理
 *
 *	@param 	token 	令牌对象
 *  @param  delegate    委托
 *
 *	@return	代理对象
 */
- (id)initWithGetRecommend:(AGHTTPToken *)token delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化获取商品分类信息代理
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithGetGoodsCategorys:(AGHTTPToken *)token delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化登录代理
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithLogin:(AGHTTPToken *)token delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化获取分类商品列表代理
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithGetCategoryGoodsList:(AGHTTPToken *)token delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化获取商品详情代理
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithGetGoodsInfo:(AGHTTPToken *)token delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化添加评论代理
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithAddComment:(AGHTTPToken *)token delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化收藏商品代理
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithAddFavorite:(AGHTTPToken *)token delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化取消收藏商品代理
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithRemoveFavorite:(AGHTTPToken *)token delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化获取评论列表代理
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithGetCommentList:(AGHTTPToken *)token delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化查找商品代理
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithSearchGoods:(AGHTTPToken *)token delegate:(id<AGHTTPTokenProxyDelegate>)delegate;


/**
 *	@brief	初始化获取首页商品列表代理
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithGetIndexGoodsList:(AGHTTPToken *)token delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化意向购买代理
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithGotoBuy:(AGHTTPToken *)token delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化获取商品收藏列表代理
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithGetGoodsFavoritedList:(AGHTTPToken *)token
                           delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化增加商品PV
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithAddGoodsPV:(AGHTTPToken *)token
                delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化获取橱窗列表
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithGetShowcaseList:(AGHTTPToken *)token
                     delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化增加橱窗商品展示次数
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithAddShowcaseItemShowCount:(AGHTTPToken *)token
                              delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化增加橱窗商品点击次数
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithAddShowcaseItemClickCount:(AGHTTPToken *)token
                               delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化分享购买商品
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithShareBuyGoods:(AGHTTPToken *)token
                   delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化错误发送
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithErrorSend:(AGHTTPToken *)token
               delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化获取精品列表
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithGetBoutiqueItems:(AGHTTPToken *)token
                      delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化获取精品标签列表
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithGetBoutiqueTags:(AGHTTPToken *)token
                     delegate:(id<AGHTTPTokenProxyDelegate>)delegate;

/**
 *	@brief	初始化获取精品商品图片列表
 *
 *	@param 	token 	令牌对象
 *	@param 	delegate 	委托
 *
 *	@return	代理对象
 */
- (id)initWithGetBoutiqueItemImages:(AGHTTPToken *)token
                           delegate:(id<AGHTTPTokenProxyDelegate>)delegate;





#pragma mark Handler

/**
 *	@brief	添加事件处理器
 *
 *	@param 	handler 	事件处理器
 */
- (void)addHandler:(id<IAPIHandler>)handler;

/**
 *	@brief	移除事件处理器
 *
 *	@param 	handler 	事件处理器
 */
- (void)removeHandler:(id<IAPIHandler>)handler;

/**
 *	@brief	移除所有事件处理器
 */
- (void)removeAllHandler;



@end
