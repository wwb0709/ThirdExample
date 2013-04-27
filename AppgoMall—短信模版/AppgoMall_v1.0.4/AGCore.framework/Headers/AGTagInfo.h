//
//  AGTagInfo.h
//  AGCore
//
//  Created by 冯 鸿杰 on 12-12-11.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	精品商品标签信息
 */
@interface AGTagInfo : NSObject
{
@private
    NSInteger _tid;
    NSString *_name;
    NSString *_image;
}

/**
 *	@brief	标签id
 */
@property (nonatomic) NSInteger tid;

/**
 *	@brief	标签名称
 */
@property (nonatomic,copy) NSString *name;

/**
 *	@brief	标签图标
 */
@property (nonatomic,copy) NSString *image;

/**
 *	@brief	创建标签信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	标签信息
 */
+ (AGTagInfo *)tagInfoWithResponse:(NSDictionary *)response;



@end
