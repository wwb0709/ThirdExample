//
//  SSPublishContent.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-6.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ISSPublishContent.h"

/**
 *	@brief	分享内容
 */
@interface SSPublishContent : NSObject <ISSPublishContent>
{
@private
    NSString *_content;
    NSString *_defaultContent;
    UIImage *_image;
    CGFloat _imageQuality;
    NSString *_title;
    NSString *_url;
    SSPublishContentMediaType _mediaType;
    NSString *_musicFileUrl;
    NSString *_extInfo;
    NSData *_fileData;
}

/**
 *	@brief	分享内容 
 */
@property (nonatomic,copy) NSString *content;

/**
 *	@brief	默认分享内容
 */
@property (nonatomic,copy) NSString *defaultContent;

/**
 *	@brief	分享图片
 */
@property (nonatomic,retain) UIImage *image;

/**
 *	@brief	图片质量
 */
@property (nonatomic) CGFloat imageQuality;

/**
 *	@brief	分享标题
 */
@property (nonatomic,copy) NSString *title;

/**
 *	@brief	分享链接
 */
@property (nonatomic,copy) NSString *url;

/**
 *	@brief	分享类型
 */
@property (nonatomic) SSPublishContentMediaType mediaType;

/**
 *	@brief	音乐文件路径
 */
@property (nonatomic,copy) NSString *musicFileUrl;

/**
 *	@brief	扩展信息
 */
@property (nonatomic,copy) NSString *extInfo;

/**
 *	@brief	文件数据
 */
@property (nonatomic,retain) NSData *fileData;

/**
 *	@brief	创建分享内容
 *
 *	@param 	content 	源分享内容
 *
 *	@return	分享内容
 */
+ (id)publishContentWithContent:(id<ISSPublishContent>)content;


@end
