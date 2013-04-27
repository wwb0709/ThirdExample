//
//  SohuWeiboStatusInfo.h
//  SNSServiceSDK
//
//  Created by hower on 12/11/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SohuWeiboUserInfo.h"

/**
 *	@brief	搜狐微博信息
 */
@interface SohuWeiboStatusInfo : NSObject
{
@private
    NSDate *_createdAt;
    NSString *_sid;
    NSString *_text;
    NSString *_source;
    BOOL _favorited;
    BOOL _truncated;
    NSString *_inReplyToStatusId;
    NSString *_inReplyToUserId;
    NSString *_inReplyToScreenName;
    NSString *_inReplyToStatusText;
    NSString *_smallPic;
    NSString *_middlePic;
    NSString *_originalPic;
    SohuWeiboUserInfo *_userInfo;
    
    NSDictionary *_sourceData;
}

/**
 *	@brief	创建时间
 */
@property (nonatomic,retain) NSDate *createAt;

/**
 *	@brief	微博id
 */
@property (nonatomic,copy) NSString *sid;

/**
 *	@brief	内容
 */
@property (nonatomic,copy) NSString *text;

/**
 *	@brief	来源
 */
@property (nonatomic,copy) NSString *source;

/**
 *	@brief	是否收藏
 */
@property (nonatomic) BOOL favorited;

/**
 *	@brief	暂无
 */
@property (nonatomic) BOOL truncated;

/**
 *	@brief	转发微博id
 */
@property (nonatomic,copy) NSString *inReplyToStatusId;

/**
 *	@brief	转发微博作者id
 */
@property (nonatomic,copy) NSString *inReplyToUserId;

/**
 *	@brief	转发微博作者昵称
 */
@property (nonatomic,copy) NSString *inReplyToScreenName;

/**
 *	@brief	转发微博内容
 */
@property (nonatomic,copy) NSString *inReplyToStatusText;

/**
 *	@brief	小图
 */
@property (nonatomic,copy) NSString *smallPic;

/**
 *	@brief	中图
 */
@property (nonatomic,copy) NSString *middlePic;

/**
 *	@brief	原图
 */
@property (nonatomic,copy) NSString *originalPic;

/**
 *	@brief	用户信息
 */
@property (nonatomic,retain) SohuWeiboUserInfo *userInfo;

/**
 *	@brief	源数据
 */
@property (nonatomic,retain) NSDictionary *sourceData;


/**
 *	@brief	创建搜狐微博信息
 *
 *	@param 	response 	回复信息
 *
 *	@return	微博信息
 */
+ (SohuWeiboStatusInfo *)statusInfoWithResponse:(NSDictionary *)response;


@end
