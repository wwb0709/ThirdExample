//
//  SSPublishAppRecommendView.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-11.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ISSPublishContent.h"

/**
 *	@brief	应用推荐视图
 */
@interface SSPublishAppRecommendView : UIView
{
@private
    UILabel *_contentLabel;
    UIImageView *_imageView;
    
    id<ISSPublishContent> _content;
    BOOL _needLayout;
}

/**
 *	@brief	分享内容
 */
@property (nonatomic,retain) id<ISSPublishContent> content;

/**
 *	@brief	内容高度
 */
@property (nonatomic) CGFloat contentHeight;



@end
