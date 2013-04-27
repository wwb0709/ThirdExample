//
//  SinaVisibleInfo.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12-11-24.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	可见性信息
 */
@interface SinaVisibleInfo : NSObject
{
@private
    NSInteger _type;
    NSString *_listid;
}

/**
 *	@brief	类型
 */
@property (nonatomic) NSInteger type;

/**
 *	@brief	分组ID
 */
@property (nonatomic,copy) NSString *listid;

/**
 *	@brief	创建可视信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	 可视信息
 */
+ (SinaVisibleInfo *)visibleInfoWithResponse:(NSDictionary *)response;



@end
