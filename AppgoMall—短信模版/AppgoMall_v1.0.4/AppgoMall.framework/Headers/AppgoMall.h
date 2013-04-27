//
//  AGApi.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12/12/2.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGCore/AppgoMallDelegate.h"
#import "AGRecommendGoodsViewStyle.h"
#import "IAGAdViewMediator.h"

/**
 *	@brief	掌淘联盟SDK Api
 */
@interface AppgoMall : NSObject

/**
 *	@brief	启动应用
 *
 *	@param 	appKey 	应用Key
 *	@param 	appDelegate 	应用事件委托
 *	@param 	debugMode 	调试模式
 */
+ (void)startupApp:(NSString *)appKey
       appDelegate:(id<AppgoMallDelegate>)appDelegate
         debugMode:(BOOL)debugMode;

/**
 *	@brief	处理打开链接信息
 *
 *	@param 	url 	URL地址
 *
 *	@return	YES：接受处理请求；NO：拒绝请求
 */
+ (BOOL)handleOpenURL:(NSURL *)url;


/**
 *	@brief	模态显示推荐商品视图,当需要从视图控制器中presendModalViewController时使用此方法
 *
 *	@param 	parentController 	父级视图控制器
 *	@param 	title 	标题
 *	@param 	style 	样式
 *	@param 	pageSize 	分页大小
 *	@param 	allowUserChangeStyle 	允许用户变更样式
 *  @param  showHeader  显示顶部推荐商品
 *
 *	@return	推荐商品视图控制器
 */
+ (UIViewController *)presendModalRecommendGoodsController:(UIViewController *)parentController
                                                     title:(NSString *)title
                                                     style:(AGRecommendGoodsViewStyle)style
                                                  pageSize:(NSInteger)pageSize
                                      allowUserChangeStyle:(BOOL)allowUserChangeStyle
                                                showHeader:(BOOL)showHeader;

/**
 *	@brief	模态显示推荐商品视图,当需要从视图控制器中presendModalViewController时使用此方法
 *
 *	@param 	parentController 	父级视图控制器
 *  @param  title   标题
 *
 *	@return	推荐商品视图控制器
 */
+ (UIViewController *)presendModalRecommendGoodsController:(UIViewController *)parentController
                                                     title:(NSString *)title;


/**
 *	@brief	显示推荐商品视图,当使用UINavigationController进行pushViewController时使用此方法
 *
 *	@param 	parentController 	父级视图控制器
 *	@param 	title 	标题
 *	@param 	style 	样式
 *	@param 	pageSize 	分页大小
 *	@param 	allowUserChangeStyle 	允许用户变更样式
 *  @param  showHeader  显示顶部推荐商品
 *
 *	@return	推荐商品视图控制器
 */
+ (UIViewController *)pushRecommendGoodsController:(UINavigationController *)parentController
                                             title:(NSString *)title
                                             style:(AGRecommendGoodsViewStyle)style
                                          pageSize:(NSInteger)pageSize
                              allowUserChangeStyle:(BOOL)allowUserChangeStyle
                                        showHeader:(BOOL)showHeader;

/**
 *	@brief	显示推荐商品视图,当使用UINavigationController进行pushViewController时使用此方法
 *
 *	@param 	parentController 	父级视图控制器
 *  @param  title   标题
 *
 *	@return	推荐商品视图控制器
 */
+ (UIViewController *)pushRecommendGoodsController:(UINavigationController *)parentController
                                             title:(NSString *)title;


/**
 *	@brief	创建推荐商品视图控制器
 *
 *	@param 	style 	推荐商品视图风格
 *	@param 	pageSize 	商品分页尺寸
 *	@param 	allowUserChangeStyle 	允许用户变更变更视图风格标识，YES：允许；NO：不允许
 *  @param  showHeader  显示顶部推荐商品
 *
 *	@return	推荐商品视图控制器
 */
+ (UIViewController *)recommendGoodsControllerWithStyle:(AGRecommendGoodsViewStyle)style
                                               pageSize:(NSInteger)pageSize
                                   allowUserChangeStyle:(BOOL)allowUserChangeStyle
                                             showHeader:(BOOL)showHeader;

/**
 *	@brief	创建推荐商品视图控制器
 *
 *  @param  title   标题
 *
 *	@return	推荐商品视图控制器
 */
+ (UIViewController *)recommendGoodsController;

/**
 *	@brief	创建推荐商品顶部视图
 *
 *	@param 	viewController 	视图所属视图控制器
 *
 *	@return	推荐商品顶部视图中介对象
 */
+ (id<IAGAdViewMediator>)recommendGoodsTopViewWithViewController:(UIViewController *)viewController;


/**
 *	@brief	模态显示商品分类视图
 *
 *	@param 	parentController 	父级视图控制器
 *
 *	@return	商品分类视图控制器
 */
+ (UIViewController *)presendModalCategorysController:(UIViewController *)parentController;

/**
 *	@brief	显示商品分类视图
 *
 *	@param 	parentController 	父级视图控制器
 *
 *	@return	商品分类视图控制器
 */
+ (UIViewController *)pushCategorysController:(UINavigationController *)parentController;

/**
 *	@brief	创建商品分类视图控制器
 *
 *	@return	商品分类视图控制器
 */
+ (UIViewController *)categorysController;


@end
