//
//  ISSPublishContent.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-6.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	分享内容的消息类型，仅对微信、QQApi有效
 */
typedef enum
{
	SSPublishContentMediaTypeText = 0, /**< 文本 */
	SSPublishContentMediaTypeImage = 1, /**< 图片 */
	SSPublishContentMediaTypeNews = 2, /**< 新闻 */
	SSPublishContentMediaTypeMusic = 3, /**< 音乐 */
	SSPublishContentMediaTypeVideo = 4, /**< 视频 */
    SSPublishContentMediaTypeApp = 5 /**< 应用,仅供微信使用 */
}
SSPublishContentMediaType;

/**
 *	@brief	分享内容协议
 */
@protocol ISSPublishContent <NSObject>

/**
 *	@brief	获取分享内容
 *
 *	@return	分享内容
 */
- (NSString *)content;

/**
 *	@brief	获取默认分享内容
 *
 *	@return	分享内容
 */
- (NSString *)defaultContent;

/**
 *	@brief	获取分享图片
 *
 *	@return	分享图片
 */
- (UIImage *)image;

/**
 *	@brief	获取分享图片质量,图片质量指定在分享时上传图片的质量，取值范围在0~1之间，默认0.8
 *
 *	@return	图片质量
 */
- (CGFloat)imageQuality;

/**
 *	@brief	获取分享标题，仅用于微信和QQ平台，当发送News、Music、Video和App时有效
 *
 *	@return	分享标题
 */
- (NSString *)title;

/**
 *	@brief	获取分享链接，仅用于微信和QQ平台，当发送News、Music、Video和App时有效
 *
 *	@return	分享链接
 */
- (NSString *)url;

/**
 *	@brief	获取分享类型，仅用于微信和QQ平台，
 *
 *	@return	分享类型
 */
- (SSPublishContentMediaType)mediaType;

/**
 *	@brief	获取音乐文件链接，仅用于微信平台,当发送Music时有效
 *
 *	@return	音乐文件链接
 */
- (NSString *)musicFileUrl;

/**
 *	@brief	获取扩展信息，仅用于微信平台,当发送App时有效
 *
 *	@return	扩展信息
 */
- (NSString *)extInfo;


/**
 *	@brief	获取文件数据，仅用于微信平台,当发送App时有效
 *
 *	@return	文件数据
 */
- (NSData *)fileData;


@end
