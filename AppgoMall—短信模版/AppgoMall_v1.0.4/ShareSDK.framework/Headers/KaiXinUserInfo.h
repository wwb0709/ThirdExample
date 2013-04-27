//
//  KaiXinUserInfo.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 12-12-26.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	用户信息
 */
@interface KaiXinUserInfo : NSObject
{
@private
    NSString *_uid;     
    NSString *_name;     
    NSString *_gender;	
    NSString *_hometown;
    NSString *_city;	
    NSString *_status;   
    NSString *_logo120; 
    NSString *_logo50;  
    NSString *_birthday; 
    NSString *_bodyform; 
    NSString *_blood;  
    NSString *_marriage; 
    NSString *_trainwith;
    NSString *_interest;
    NSString *_favbook; 
    NSString *_favmovie;
    NSString *_favtv;
    NSString *_idol;
    NSString *_motto;
    NSString *_wishlist; 
    NSString *_intro; 
    NSArray *_education;
    NSArray *_career;
    NSString *_isStar; 
    NSString *_pinyin;
    NSString *_online;
    
    NSDictionary *_source;
}

/**
 *	@brief	用户ID
 */
@property (nonatomic,copy) NSString *uid;

/**
 *	@brief	用户名
 */
@property (nonatomic,copy) NSString *name;

/**
 *	@brief	性别 0:男 1:女
 */
@property (nonatomic,copy) NSString *gender;

/**
 *	@brief	家乡
 */
@property (nonatomic,copy) NSString *hometown;

/**
 *	@brief	现居住地
 */
@property (nonatomic,copy) NSString *city;

/**
 *	@brief	状态 0:其它 1:学生 2:已工作
 */
@property (nonatomic,copy) NSString *status;

/**
 *	@brief	头像120 x 120
 */
@property (nonatomic,copy) NSString *logo120;

/**
 *	@brief	头像50 x 50
 */
@property (nonatomic,copy) NSString *logo50;

/**
 *	@brief	生日
 */
@property (nonatomic,copy) NSString *birthday;

/**
 *	@brief	体型 0:保密 1:苗条 2:匀称 3:健壮 4:高大 5:小巧 6:丰满 7:高挑 8:较胖 9:较瘦 10:运动型
 */
@property (nonatomic,copy) NSString *bodyform;

/**
 *	@brief	血型 0:没有填写 1:O型血 2:A型血 3:B型血 4:AB型血 5:稀有血型
 */
@property (nonatomic,copy) NSString *blood;

/**
 *	@brief	婚姻状态 0:没有填写 1:单身 2:恋爱中 3:订婚 4:已婚 5:离异
 */
@property (nonatomic,copy) NSString *marriage;

/**
 *	@brief	希望结交
 */
@property (nonatomic,copy) NSString *trainwith;

/**
 *	@brief	兴趣爱好
 */
@property (nonatomic,copy) NSString *interest;

/**
 *	@brief	喜欢的书籍
 */
@property (nonatomic,copy) NSString *favbook;

/**
 *	@brief	喜欢的电影
 */
@property (nonatomic,copy) NSString *favmovie;

/**
 *	@brief	喜欢的电视剧
 */
@property (nonatomic,copy) NSString *favtv;

/**
 *	@brief	偶像
 */
@property (nonatomic,copy) NSString *idol;

/**
 *	@brief	座右铭
 */
@property (nonatomic,copy) NSString *motto;

/**
 *	@brief	愿望列表
 */
@property (nonatomic,copy) NSString *wishlist;

/**
 *	@brief	介绍
 */
@property (nonatomic,copy) NSString *intro;

/**
 *	@brief	教育经历
 */
@property (nonatomic,retain) NSArray *education;

/**
 *	@brief	工作经历
 */
@property (nonatomic,retain) NSArray *career;

/**
 *	@brief	是否公共主页 0:否 1:是
 */
@property (nonatomic,copy) NSString *isStar;

/**
 *	@brief	用户的姓名拼音
 */
@property (nonatomic,copy) NSString *pinyin;

/**
 *	@brief	用户是否在线 0:不在线 1:在线
 */
@property (nonatomic,copy) NSString *online;

/**
 *	@brief	源数据
 */
@property (nonatomic, retain) NSDictionary *source;


/**
 *	@brief	创建用户信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	用户信息
 */
+ (KaiXinUserInfo *)userInfoWithResponse:(NSDictionary *)response;


@end
