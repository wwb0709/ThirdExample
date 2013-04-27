//
//  ShuoMusicMediaInfo.h
//  SNSServiceSDK
//
//  Created by hower on 12/13/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	音乐媒体信息
 */
@interface ShuoMusicMediaInfo : NSObject
{
@private
    NSString *_src;
    NSString *_title;
    NSString *_artist;
    NSString *_album;
    NSString *_type;
}

/**
 *	@brief	音乐路径
 */
@property (nonatomic,copy) NSString *src;

/**
 *	@brief	标题
 */
@property (nonatomic,copy) NSString *title;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *artist;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *album;

/**
 *	@brief	类型
 */
@property (nonatomic,copy) NSString *type;

/**
 *	@brief	创建音乐媒体信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	音乐媒体信息
 */
+ (ShuoMusicMediaInfo *)musicMediaInfoWithResponse:(NSDictionary *)response;


@end
