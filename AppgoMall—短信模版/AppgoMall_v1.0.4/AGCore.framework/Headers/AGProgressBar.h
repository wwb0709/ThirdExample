//
//  SKProgressBar.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-11-15.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AGBaseView.h"

/**
 *	@brief	进度条
 */
@interface AGProgressBar : AGBaseView
{
@private
    UIImageView *_backgroundImageView;
    UIImageView *_barImageView;
    
    CGFloat _progress;
}

/**
 *	@brief	进度
 */
@property (nonatomic) CGFloat progress;


@end
