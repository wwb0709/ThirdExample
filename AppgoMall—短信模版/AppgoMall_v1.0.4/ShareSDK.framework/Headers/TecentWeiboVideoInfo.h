//
//  TecentWeiboVideoInfo.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 12-12-26.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	视频信息
 */
@interface TecentWeiboVideoInfo : NSObject
{
@private
    NSString *_picurl;      
    NSString *_player;     
    NSString *_realurl;   
    NSString *_shorturl;
    NSString *_title; 
}

/**
 *	@brief	缩略图
 */
@property (nonatomic,copy) NSString *picurl;

/**
 *	@brief	播放器地址
 */
@property (nonatomic,copy) NSString *player;

/**
 *	@brief	视频原地址
 */
@property (nonatomic,copy) NSString *realurl;

/**
 *	@brief	视频的短url
 */
@property (nonatomic,copy) NSString *shorturl;

/**
 *	@brief	视频标题
 */
@property (nonatomic,copy) NSString *title;

/**
 *	@brief	创建视频信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	视频信息
 */
+ (TecentWeiboVideoInfo *)videoInfoWithResponse:(NSDictionary *)response;


@end
