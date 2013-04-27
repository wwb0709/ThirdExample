//
//  SKBaseCachePolicy.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-11-12.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGHTTPToken.h"

/**
 *	@brief	基础缓存策略
 */
@interface AGBaseCachePolicy : NSObject <IAGHTTPCachePolicy>
{
@private
    BOOL _needCacheData;
    NSString *_cacheFileName;
}

/**
 *	@brief	初始化策略
 *
 *	@param 	needCacheData 	是否需要缓存数据
 *  @param  cacheFileName   缓存文件名称
 *
 *	@return	策略对象
 */
- (id)initWithNeedCacheData:(BOOL)needCacheData cacheFileName:(NSString *)cacheFileName;


@end
