//
//  ISSPublishContentView.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-4.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ShareType.h"
#import "ISSClient.h"
#import "ISSPublishContent.h"
#import "ISSPublishSession.h"

@protocol ISSPublishContentView <NSObject>

@required

/**
 *	@brief	获取分享内容
 *
 *	@return	分享内容
 */
- (NSString *)content;

/**
 *	@brief	设置分享内容
 *
 *	@param 	content 	分享内容
 */
- (void)setContent:(NSString *)content;

/**
 *	@brief	获取分享图片
 *
 *	@return	分享图片
 */
- (UIImage *)image;

/**
 *	@brief	设置分享图片
 *
 *	@param 	image 	分享图片
 */
- (void)setImage:(UIImage *)image;

/**
 *	@brief	获取分享客户端对象
 *
 *	@return	分享客户端对象
 */
- (id<ISSClient>)client;


/**
 *	@brief	显示发布内容视图
 *
 *	@param 	container 	显示容器
 *	@param 	title 	标题
 *	@param 	content 	分享内容
 *	@param 	shareType 	分享类型
 *  @param  oneKeyShareList 一键分享的平台类型列表,用于显示允许一键分享的平台
 *  @param  session 当前分享的会话，当发布内容时需要调用此对象的发送方法
 *	@param 	userData 	用户数据
 */
- (void)showInContainer:(UIViewController *)container
                  title:(NSString *)title
                content:(id<ISSPublishContent>)content
              shareType:(ShareType)shareType
        oneKeyShareList:(NSArray *)oneKeyShareList
                session:(id<ISSPublishSession>)session
               userData:(id)userData;

/**
 *	@brief	关闭发布内容视图
 */
- (void)close;

/**
 *	@brief	发布分享内容
 *
 *	@param 	content 	分享内容
 */
- (void)publish:(id<ISSPublishContent>)content;



@end
