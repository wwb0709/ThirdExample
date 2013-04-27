//
//  TecentWeiboStatusInfo.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12-11-29.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "ISSStatusInfo.h"
#import "TecentWeiboMusicInfo.h"
#import "TecentWeiboVideoInfo.h"

/**
 *	@brief	腾讯微博信息
 */
@interface TecentWeiboStatusInfo : NSObject
{
@private
    long long _statusId;
    CGFloat _timestamp;
    
    NSString *_cityCode;
    NSString *_countryCode;
    NSInteger _emotiontype;
    NSString *_emotionurl; 
    NSString *_from;           
    NSString *_fromurl;
    NSString *_geo;  
    NSArray *_image; 
    NSString *_latitude;
    NSString *_location; 
    NSString *_longitude;
    TecentWeiboMusicInfo *_music; 
    NSString *_origtext;   
    NSString *_provinceCode;
    BOOL _isSelf;     
    NSInteger _status;      
    NSString *_text;        
    NSInteger _type;         
    TecentWeiboVideoInfo *_video;
    
    NSDictionary *_sourceData;
}

/**
 *	@brief	微博ID
 */
@property (nonatomic) long long statusId;

/**
 *	@brief	发表时间
 */
@property (nonatomic) CGFloat timestamp;

/**
 *	@brief	城市码
 */
@property (nonatomic,copy) NSString *cityCode;

/**
 *	@brief	国家码
 */
@property (nonatomic,copy) NSString *countryCode;

/**
 *	@brief	心情类型
 */
@property (nonatomic) NSInteger emotiontype;

/**
 *	@brief	心情图片url
 */
@property (nonatomic,copy) NSString *emotionurl;

/**
 *	@brief	来源
 */
@property (nonatomic,copy) NSString *from;

/**
 *	@brief	来源url
 */
@property (nonatomic,copy) NSString *fromurl;

/**
 *	@brief	地理位置信息
 */
@property (nonatomic,copy) NSString *geo;

/**
 *	@brief	图片url列表
 */
@property (nonatomic,retain) NSArray *image;

/**
 *	@brief	纬度
 */
@property (nonatomic,copy) NSString *latitude;

/**
 *	@brief	发表者所在地
 */
@property (nonatomic,copy) NSString *location;

/**
 *	@brief	经度
 */
@property (nonatomic,copy) NSString *longitude;

/**
 *	@brief	音频信息
 */
@property (nonatomic,retain) TecentWeiboMusicInfo *music;

/**
 *	@brief	原始内容
 */
@property (nonatomic,copy) NSString *origtext;

/**
 *	@brief	省份码
 */
@property (nonatomic,copy) NSString *provinceCode;

/**
 *	@brief	是否自已发的的微博，0-不是，1-是
 */
@property (nonatomic) BOOL isSelf;

/**
 *	@brief	微博状态，0-正常，1-系统删除，2-审核中，3-用户删除，4-根删除
 */
@property (nonatomic) NSInteger status;

/**
 *	@brief	微博内容
 */
@property (nonatomic,copy) NSString *text;

/**
 *	@brief	微博类型，1-原创发表，2-转载，3-私信，4-回复，5-空回，6-提及，7-评论
 */
@property (nonatomic) NSInteger type;

/**
 *	@brief	视频信息
 */
@property (nonatomic,retain) TecentWeiboVideoInfo *video;

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
+ (TecentWeiboStatusInfo *)statusInfoWithResponse:(NSDictionary *)response;

@end
