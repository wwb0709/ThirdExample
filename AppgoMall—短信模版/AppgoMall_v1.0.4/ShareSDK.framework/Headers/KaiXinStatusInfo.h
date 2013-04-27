//
//  KaiXinStatusInfo.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-10.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	开心网状态信息
 */
@interface KaiXinStatusInfo : NSObject
{
@private
    NSString *_rid;
    
    NSDictionary *_sourceData;
}

/**
 *	@brief	状态ID
 */
@property (nonatomic,copy) NSString *rid;

/**
 *	@brief	源数据
 */
@property (nonatomic,copy) NSDictionary *sourceData;

/**
 *	@brief	创建状态信息
 *
 *	@param 	response 	回复状态
 *
 *	@return	状态信息
 */
+ (KaiXinStatusInfo *)statusInfoWithResponse:(NSDictionary *)response;


@end
