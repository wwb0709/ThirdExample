//
//  SKEvaluationInfo.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-10-19.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	商品评价信息
 */
@interface AGEvaluationInfo : NSObject
{
@private
    NSString *_eid;
    NSString *_name;
    NSString *_content;
    CGFloat _time;
}

/**
 *	@brief	评价ID
 */
@property (nonatomic,copy) NSString *eid;

/**
 *	@brief	评价人昵称
 */
@property (nonatomic,copy) NSString *name;

/**
 *	@brief	评价内容
 */
@property (nonatomic,copy) NSString *content;

/**
 *	@brief	评价时间(单位：毫秒)
 */
@property (nonatomic) CGFloat time;

/**
 *	@brief	创建评价信息
 *
 *	@param 	dict 	字典数据对象
 *
 *	@return	评价信息对象
 */
+ (AGEvaluationInfo *)evaluationInfoWithDict:(NSDictionary *)dict;


@end
