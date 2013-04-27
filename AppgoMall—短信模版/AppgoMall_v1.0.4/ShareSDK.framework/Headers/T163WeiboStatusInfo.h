//
//  T163WeiboStatusInfo.h
//  SNSServiceSDK
//
//  Created by hower on 12/12/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

@class T163WeiboUserInfo;

/**
 *	@brief	微博信息
 */
@interface T163WeiboStatusInfo : NSObject
{
    NSString *_sid; 	
    NSString *_source; 	
    NSString *_flag;
    T163WeiboUserInfo *_user; 
    NSDate *_createdAt;
    NSString *_text; 
    NSString *_inReplyToStatusId;
    NSString *_inReplyToUserId;
    NSString *_inReplyToScreenName;
    NSInteger _retweetCount; 	
    NSInteger _commentsCount;
    NSDate *_favoritedAt;
    NSString *_inReplyToStatusText;
    NSString *_inReplyToUserName;
    BOOL _favorited;
    NSString *_cursorId;
    NSString *_rootInReplyToStatusId;
    BOOL _isRetweetByUser;
    NSString *_retweetUserId;
    NSString *_retweetUserName;
    NSString *_retweetUserScreenName;
    NSDate *_retweetCreatedAt;
    NSString *_rootInReplyToUserId;
    NSString *_rootInReplyToScreenName; 
    NSString *_rootInReplyToUserName;
    NSString *_rootInReplyToStatusText;
    
    NSString *_geo;
    NSString *_inReplyToMusicInfos;
    NSString *_inReplyToPreviewLinkInfos;
    NSString *_inReplyToSongInfos;
    NSString *_inReplyToVideoInfos;
    NSString *_musicInfos;
    NSString *_previewLinkInfos;
    NSString *_songInfos;
    NSString *_rootInReplyToMusicInfos;
    NSString *_rootInReplyToPreviewLinkInfos;
    NSString *_rootInReplyToSongInfos;
    NSString *_rootInReplyToVideoInfos;
    NSInteger _rootRetweetCount;
    BOOL _truncated;
    NSString *_venue;
    NSString *_videoInfos;
    
    NSDictionary *_sourceData;
}

/**
 *	@brief	微博ID
 */
@property (nonatomic,copy) NSString *sid;

/**
 *	@brief	微博信息来源
 */
@property (nonatomic,copy) NSString *source;

/**
 *	@brief	微博类型，normal即原创，retweet即转发，reply即评论，deleted即删除
 */
@property (nonatomic,copy) NSString *flag;

/**
 *	@brief	微博作者信息，具体字段见用户(users)
 */
@property (nonatomic,retain) T163WeiboUserInfo *user;

/**
 *	@brief	微博创建时间
 */
@property (nonatomic,retain) NSDate *createdAt;

/**
 *	@brief	微博正文
 */
@property (nonatomic,copy) NSString *text;

/**
 *	@brief	回复的微博id
 */
@property (nonatomic,copy) NSString *inReplyToStatusId;

/**
 *	@brief	回复的微博作者的id
 */
@property (nonatomic,copy) NSString *inReplyToUserId;

/**
 *	@brief	回复的微博作者的个性网址
 */
@property (nonatomic,copy) NSString *inReplyToScreenName;

/**
 *	@brief	被转发数
 */
@property (nonatomic) NSInteger retweetCount;

/**
 *	@brief	被评论数
 */
@property (nonatomic) NSInteger commentsCount;

/**
 *	@brief	用户收藏时间（如未收藏则为null）
 */
@property (nonatomic,retain) NSDate *favoritedAt;

/**
 *	@brief	回复的微博正文
 */
@property (nonatomic,copy) NSString *inReplyToStatusText;

/**
 *	@brief	回复微博的作者昵称
 */
@property (nonatomic,copy) NSString *inReplyToUserName;

/**
 *	@brief	是否收藏
 */
@property (nonatomic) BOOL favorited;

/**
 *	@brief	timeline上该微博的游标，在timeline上需传递此参数进行分页
 */
@property (nonatomic,copy) NSString *cursorId;

/**
 *	@brief	整个对话中根微博ID
 */
@property (nonatomic,copy) NSString *rootInReplyToStatusId;

/**
 *	@brief	是否被其他用户转发
 */
@property (nonatomic) BOOL isRetweetByUser;

/**
 *	@brief	转发用户ID（返回用户关注者中第一个转发此微博）
 */
@property (nonatomic,copy) NSString *retweetUserId;

/**
 *	@brief	转发用户的昵称
 */
@property (nonatomic,copy) NSString *retweetUserName;

/**
 *	@brief	转发用户的个性网址
 */
@property (nonatomic,copy) NSString *retweetUserScreenName;

/**
 *	@brief	转发时间
 */
@property (nonatomic,retain) NSDate *retweetCreatedAt;

/**
 *	@brief	微博原文作者的user_id
 */
@property (nonatomic,copy) NSString *rootInReplyToUserId;

/**
 *	@brief	微博原文作者的screen_name
 */
@property (nonatomic,copy) NSString *rootInReplyToScreenName;

/**
 *	@brief	微博原文作者的昵称
 */
@property (nonatomic,copy) NSString *rootInReplyToUserName;

/**
 *	@brief	微博原文内容
 */
@property (nonatomic,copy) NSString *rootInReplyToStatusText;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *geo;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *inReplyToMusicInfos;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *inReplyToPreviewLinkInfos;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *inReplyToSongInfos;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *inReplyToVideoInfos;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *musicInfos;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *previewLinkInfos;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *songInfos;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *rootInReplyToMusicInfos;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *rootInReplyToPreviewLinkInfos;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *rootInReplyToSongInfos;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *rootInReplyToVideoInfos;

/**
 *	@brief	暂无
 */
@property (nonatomic) NSInteger rootRetweetCount;

/**
 *	@brief	暂无
 */
@property (nonatomic) BOOL truncated;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *venue;

/**
 *	@brief	暂无
 */
@property (nonatomic,copy) NSString *videoInfos;

/**
 *	@brief	源数据
 */
@property (nonatomic,retain) NSDictionary *sourceData;


/**
 *	@brief	创建微博信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	微博信息
 */
+ (T163WeiboStatusInfo *)statusInfoWithResponse:(NSDictionary *)response;


@end
