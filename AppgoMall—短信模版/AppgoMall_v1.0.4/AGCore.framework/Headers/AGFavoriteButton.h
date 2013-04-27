//
//  SKFavoriteButton.h
//  AppGoSDKDemo
//
//  Created by 冯 鸿杰 on 12-11-7.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AGAPIFacade.h"

/**
 *	@brief	收藏按钮
 */
@interface AGFavoriteButton : UIButton
{
@private
    AGAPIFacade *_facade;
    CGSize _labelSize;
    CGSize _imageSize;
}

@end
