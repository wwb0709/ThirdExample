//
//  RenRenStatusInfo.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-10.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	状态信息
 */
@interface RenRenStatusInfo : NSObject
{
@private
    long long _postId;
    
    NSDictionary *_sourceData;
}

/**
 *	@brief	文章ID
 */
@property (nonatomic) long long postId;

/**
 *	@brief	源数据
 */
@property (nonatomic, retain) NSDictionary *sourceData;

/**
 *	@brief	状态信息
 *
 *	@param 	response 	回复信息
 *
 *	@return	状态信息
 */
+ (RenRenStatusInfo *)statusWithResponse:(NSDictionary *)response;


@end
