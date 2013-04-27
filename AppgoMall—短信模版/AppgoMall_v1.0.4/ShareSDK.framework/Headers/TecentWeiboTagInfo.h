//
//  TecentWeiboTagInfo.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 12-12-26.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	标签信息
 */
@interface TecentWeiboTagInfo : NSObject
{
@private
    NSString *_Id;   
    NSString *_name;
}

/**
 *	@brief	个人标签id
 */
@property (nonatomic,copy) NSString *Id;

/**
 *	@brief	标签名
 */
@property (nonatomic,copy) NSString *name;

/**
 *	@brief	创建标签信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	标签信息
 */
+ (TecentWeiboTagInfo *)tagInfoWithResponse:(id)response;


@end
