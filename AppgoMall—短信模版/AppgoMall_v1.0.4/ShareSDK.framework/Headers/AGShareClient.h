//
//  AGShareClient.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-3.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import "EventDispatcher.h"
#import "ShareType.h"
#import "ISSClient.h"

/**
 *	@brief	分享SDK客户端基类
 */
@interface AGShareClient : EventDispatcher <ISSClient>
{
@private
    ShareType _type;
}

@property (nonatomic) ShareType type;

@end
