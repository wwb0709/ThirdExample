//
//  QQLoginWebImageAttachment.h
//  SNSServiceSDK
//
//  Created by hower on 12/11/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IQQSpaceTopicAttachment.h"

/**
 *	@brief	网页图片附件
 */
@interface QQSpaceWebImageAttachment : NSObject <IQQSpaceTopicAttachment>
{
@private
    NSString *_url;
    NSInteger _width;
    NSInteger _height;
}

/**
 *	@brief	初始化网页图片附件
 *
 *	@param 	url 	图片路径
 *	@param 	width 	宽度
 *	@param 	height 	高度
 *
 *	@return	网页图片附件
 */
- (id)initWithUrl:(NSString *)url width:(NSInteger)width height:(NSInteger)height;


@end
