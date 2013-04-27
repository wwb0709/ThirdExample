//
//  SSStatusInfo.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12-10-13.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SinaGeoInfo.h"
#import "SinaWeiboUserInfo.h"
#import "SinaVisibleInfo.h"
#import "ISSStatusInfo.h"

/**
 *	@brief	新浪微博信息
 */
@interface SinaWeiboStatusInfo : NSObject
{
@private
    NSString *_createdAt;
    NSString *_sidStr;
    long long _sid;
    long long _mid;
    NSString *_text;
    NSString *_source;
    BOOL _favorited;
    BOOL _truncated;
    NSString *_inReplyToStatusId;
    NSString *_inReplyToUserId;
    NSString *_inReplyToScreenName;
    NSString *_thumbnailPic;
    NSString *_bmiddlePic;
    NSString *_originalPic;
    SinaGeoInfo *_geo;
    SinaWeiboUserInfo *_user;
    NSInteger _repostsCount;
    NSInteger _commentsCount;
    NSInteger _attitudesCount;
    NSInteger _mlevel;
    SinaVisibleInfo *_visible;
    
    NSDictionary *_sourceData;
}

/**
 *	@brief	微博创建时间
 */
@property (nonatomic,copy) NSString *createdAt;

/**
 *	@brief	字符串型的微博ID
 */
@property (nonatomic,copy) NSString *sidStr;

/**
 *	@brief	微博ID
 */
@property (nonatomic) long long sid;

/**
 *	@brief	微博MID
 */
@property (nonatomic) long long mid;

/**
 *	@brief	微博信息内容
 */
@property (nonatomic,copy) NSString *text;

/**
 *	@brief	微博来源
 */
@property (nonatomic,copy) NSString *source;

/**
 *	@brief	是否已收藏，true：是，false：否
 */
@property (nonatomic) BOOL favorited;

/**
 *	@brief	是否被截断，true：是，false：否
 */
@property (nonatomic) BOOL truncated;

/**
 *	@brief	回复ID
 */
@property (nonatomic,copy) NSString *inReplyToStatusId;

/**
 *	@brief	回复人UID
 */
@property (nonatomic,copy) NSString *inReplyToUserId;

/**
 *	@brief	回复人昵称
 */
@property (nonatomic,copy) NSString *inReplyToScreenName;

/**
 *	@brief	缩略图片地址，没有时不返回此字段
 */
@property (nonatomic,copy) NSString *thumbnailPic;

/**
 *	@brief	中等尺寸图片地址，没有时不返回此字段
 */
@property (nonatomic,copy) NSString *bmiddlePic;

/**
 *	@brief	原始图片地址，没有时不返回此字段
 */
@property (nonatomic,copy) NSString *originalPic;

/**
 *	@brief	地理信息字段
 */
@property (nonatomic,retain) SinaGeoInfo *geo;

/**
 *	@brief	微博作者的用户信息字段
 */
@property (nonatomic,retain) SinaWeiboUserInfo *user;

/**
 *	@brief	转发数
 */
@property (nonatomic) NSInteger repostsCount;

/**
 *	@brief	评论数
 */
@property (nonatomic) NSInteger commentsCount;

/**
 *	@brief	暂未支持
 */
@property (nonatomic) NSInteger attitudesCount;

/**
 *	@brief	暂未支持
 */
@property (nonatomic) NSInteger mlevel;

/**
 *	@brief	微博的可见性及指定可见分组信息
 */
@property (nonatomic,retain) SinaVisibleInfo *visible;

/**
 *	@brief	源数据
 */
@property (nonatomic,retain) NSDictionary *sourceData;


/**
 *	@brief	创建微博信息
 *
 *	@param 	response 	服务器回复数据
 *
 *	@return	微博信息
 */
+ (SinaWeiboStatusInfo *)statusInfoWithResponse:(NSDictionary *)response;


@end
