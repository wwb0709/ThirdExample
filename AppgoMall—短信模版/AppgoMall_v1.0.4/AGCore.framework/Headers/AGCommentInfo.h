//
//  SKCommentInfo.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-9-27.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	评论信息
 */
@interface AGCommentInfo : NSObject
{
@private
    NSString *_cmtid;
    NSString *_name;
    NSString *_face;
    NSString *_text;
    CGFloat _time;
}

/**
 *	@brief	评论ID
 */
@property (nonatomic,copy) NSString *cmtid;

/**
 *	@brief	评论人
 */
@property (nonatomic,copy) NSString *name;

/**
 *	@brief	评论人头像
 */
@property (nonatomic,copy) NSString *face;

/**
 *	@brief	评论内容
 */
@property (nonatomic,copy) NSString *text;

/**
 *	@brief	评论时间（单位：毫秒）
 */
@property (nonatomic) CGFloat time;

/**
 *	@brief	创建评论信息
 *
 *	@param 	dict 	字典数据对象
 *
 *	@return	评论信息
 */
+ (AGCommentInfo *)commentInfoWithDict:(NSDictionary *)dict;



@end
