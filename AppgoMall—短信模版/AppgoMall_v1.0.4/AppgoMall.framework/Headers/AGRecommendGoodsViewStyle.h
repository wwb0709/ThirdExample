//
//  AGRecommendGoodsViewStyle.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12/12/2.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#ifndef StoreKitSDK_AGRecommendGoodsViewStyle_h
#define StoreKitSDK_AGRecommendGoodsViewStyle_h

/**
 *	@brief	推荐商品列表视图风格
 */
typedef enum
{
	SKRecommendGoodsViewStyleQuiltX3 = 0,       /**< 三列商品瀑布流视图风格 */
	SKRecommendGoodsViewStyleQuiltX2 = 1,       /**< 两列商品瀑布流视图风格 */
	SKRecommendGoodsViewStyleQuiltX1 = 2,       /**< 单列商品瀑布流视图风格 */
    SKRecommendGoodsViewStyleList = 3,           /**< 商品列表视图风格 */
    SKRecommendGoodsViewStyleListX2 = 4         /**< 双列商品列表视图风格 */
}
AGRecommendGoodsViewStyle;

#endif
