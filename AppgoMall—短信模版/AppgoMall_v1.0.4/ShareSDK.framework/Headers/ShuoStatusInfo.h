//
//  ShuoStatusInfo.h
//  SNSServiceSDK
//
//  Created by hower on 12/13/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ShuoUserInfo.h"
#import "ShuoEntitiesInfo.h"
#import "ShuoSourceInfo.h"

/**
 *	@brief	广播信息
 */
@interface ShuoStatusInfo : NSObject
{
@private
    BOOL _canReply;
    NSArray *_attachments;
    NSString *_category;
    NSInteger _commentsCount;
    NSDate *_createdAt;
    ShuoEntitiesInfo *_entities;
    BOOL _hasPhoto;
    NSString *_id;
    BOOL _isFollow;
    NSInteger _likeCount;
    BOOL _liked;
    BOOL _muted;
    NSInteger _resharedCount;
    ShuoSourceInfo *_source;
    NSString *_text;
    NSString *_title;
    NSString *_type;
    ShuoUserInfo *_user;
    
    NSDictionary *_sourceData;
}

/**
 *	@brief	是否可被回应
 */
@property (nonatomic) BOOL canReply;

/**
 *	@brief	attachments是一个json array格式的字符串， array里面的元素称为物, 
 *          目前每条广播只支持单个物，物是每条广播表述的行为中的那个宾语，例如： xx推荐网址， 网址就是这个‘物’，
 */
@property (nonatomic,retain) NSArray *attachments;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *category;

/**
 *	@brief	回应数
 */
@property (nonatomic) NSInteger commentsCount;

/**
 *	@brief	发广播的时间
 */
@property (nonatomic,retain) NSDate *createdAt;

/**
 *	@brief	暂无
 */
@property (nonatomic,retain) ShuoEntitiesInfo *entities;

/**
 *	@brief	暂无
 */
@property (nonatomic) BOOL hasPhoto;

/**
 *	@brief	广播id
 */
@property (nonatomic,copy) NSString *Id;

/**
 *	@brief	暂无
 */
@property (nonatomic) BOOL isFollow;

/**
 *	@brief	赞的数量
 */
@property (nonatomic) NSInteger likeCount;

/**
 *	@brief	是否已经喜欢
 */
@property (nonatomic) BOOL liked;

/**
 *	@brief	暂无
 */
@property (nonatomic) BOOL muted;

/**
 *	@brief	转播数
 */
@property (nonatomic) NSInteger resharedCount;

/**
 *	@brief	app key对应的应用名和应用url
 */
@property (nonatomic,retain) ShuoSourceInfo *source;

/**
 *	@brief	web段在引号内展示的一段文本, 一般为用户输入的内容
 */
@property (nonatomic,copy) NSString *text;

/**
 *	@brief	广播的title
 */
@property (nonatomic,copy) NSString *title;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *type;

/**
 *	@brief	发广播者
 */
@property (nonatomic,retain) ShuoUserInfo *user;

/**
 *	@brief	源数据
 */
@property (nonatomic,retain) NSDictionary *sourceData;


/**
 *	@brief	创建广播信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	广播信息
 */
+ (ShuoStatusInfo *)statusInfoWithResponse:(NSDictionary *)response;


@end
