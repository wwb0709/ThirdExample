//
//  QQLoginVideoAttachment.h
//  SNSServiceSDK
//
//  Created by hower on 12/11/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IQQSpaceTopicAttachment.h"

/**
 *	@brief	视频附件
 */
@interface QQSpaceVideoAttachment : NSObject <IQQSpaceTopicAttachment>
{
@private
    NSString *_url;
}

/**
 *	@brief	初始化网页附件
 *
 *	@param 	url 	网页的URL地址
 *
 *	@return	网页附件
 */
- (id)initWithUrl:(NSString *)url;

@end
