//
//  ShuoAttachmentInfo.h
//  SNSServiceSDK
//
//  Created by hower on 12/13/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	附件信息
 */
@interface ShuoAttachmentInfo : NSObject
{
@private
    NSString *_caption;
    NSString *_description;
    NSString *_href;
    NSArray *_media;
    id _properties;
    NSString *_title;
    NSString *_type;
}

/**
 *	@brief	子标题
 */
@property (nonatomic,copy) NSString *caption;

/**
 *	@brief	描述，可以为空，最大长度200字节（100汉字或200字母）
 */
@property (nonatomic,copy) NSString *description;

/**
 *	@brief	链接，url最大长度1024，需要分析并展示网站域名
 */
@property (nonatomic,copy) NSString *href;

/**
 *	@brief	富媒体，允许 image, flash, music 单条广播所有[[BR]]图片无最小值限制，
 *  文件最大不超过3M[[BR]]缩略图：最大边150px[[BR]]点击展开后：宽度最大460px，高度不限[[BR]]原图大小无宽高限制
 */
@property (nonatomic,retain) NSArray *media;

/**
 *	@brief	如果有分类，这里存放对应类别的详细数据，具体的字段由该类别自行定义
 */
@property (nonatomic,retain) id properties;

/**
 *	@brief	标题，如果传空，会显示‘无标题’， 最大长度100字节（50汉字或100字母）
 */
@property (nonatomic,copy) NSString *title;

/**
 *	@brief	分类，预留字段
 */
@property (nonatomic,copy) NSString *type;

/**
 *	@brief	创建附件信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	附件信息
 */
+ (ShuoAttachmentInfo *)attachmentInfoWithResponse:(NSDictionary *)response;


@end
