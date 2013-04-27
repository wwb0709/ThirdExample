//
//  SSPublishPhotoViewController.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-7.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *	@brief	查看照片视图控制器
 */
@interface SSPublishPhotoViewController : UIViewController <UIScrollViewDelegate>
{
@private
    UIImage *_image;
    
    UIScrollView *_contentView;
    UIImageView *_imageView;
}

/**
 *	@brief	初始化视图控制器
 *
 *	@param 	image 	图片
 *
 *	@return	视图控制器
 */
- (id)initWithImage:(UIImage *)image;


@end
