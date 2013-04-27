//
//  TecentWeiboMusicInfo.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 12-12-26.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	音乐信息
 */
@interface TecentWeiboMusicInfo : NSObject
{
@private
    NSString *_author; 
    NSString *_url; 
    NSString *_title; 
}

/**
 *	@brief	演唱者
 */
@property (nonatomic,copy) NSString *author;

/**
 *	@brief	音频地址
 */
@property (nonatomic,copy) NSString *url;

/**
 *	@brief	音频名字，歌名
 */
@property (nonatomic,copy) NSString *title;

/**
 *	@brief	创建音乐信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	音乐信息
 */
+ (TecentWeiboMusicInfo *)musicInfoWithResponse:(NSDictionary *)response;


@end
