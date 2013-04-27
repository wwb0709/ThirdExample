//
//  SinaUrlInfo.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12-11-26.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	URL类型
 */
typedef enum
{
	SinaUrlInfoTypeURL = 0, /**< 普通网页 */
	SinaUrlInfoTypeVideo = 1, /**< 视频 */
	SinaUrlInfoTypeMusic = 2, /**< 音乐 */
	SinaUrlInfoTypeActivity = 3, /**< 活动 */
	SinaUrlInfoTypeVote = 4 /**< 投票 */
}
SinaUrlInfoType;


/**
 *	@brief	URL信息
 */
@interface SinaUrlInfo : NSObject
{
@private
    NSString *_shortUrl;
    NSString *_longUrl;
    SinaUrlInfoType _type;
    BOOL _result;
}

/**
 *	@brief	短链接
 */
@property (nonatomic,copy) NSString *shortUrl;

/**
 *	@brief	长链接
 */
@property (nonatomic,copy) NSString *longUrl;

/**
 *	@brief	类型
 */
@property (nonatomic) SinaUrlInfoType type;

/**
 *	@brief	可用状态
 */
@property (nonatomic) BOOL result;

/**
 *	@brief	创建URL信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	URL信息对象
 */
+ (SinaUrlInfo *)urlInfoWithResponse:(NSDictionary *)response;



@end
