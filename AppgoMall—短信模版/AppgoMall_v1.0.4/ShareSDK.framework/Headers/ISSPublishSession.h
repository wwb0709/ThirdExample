//
//  ISSPublishSession.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-8.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ISSPublishContent.h"
#import "ISSClient.h"

@protocol ISSPublishSession <NSObject>

/**
 *	@brief	发布内容
 *
 *	@param 	content 	内容
 *	@param 	clients 	目标平台列表
 */
- (void)publishWithContent:(id<ISSPublishContent>)content
                   clients:(NSArray *)clients;


@end
