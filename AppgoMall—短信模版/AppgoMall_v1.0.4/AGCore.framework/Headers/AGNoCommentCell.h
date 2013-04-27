//
//  SKNoCommentCell.h
//  AppGoSDKDemo
//
//  Created by 冯 鸿杰 on 12-11-6.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AGAPIFacade.h"

/**
 *	@brief	无评论列表项
 */
@interface AGNoCommentCell : UITableViewCell
{
@private
    UIImageView *_tipsImageView;
    
    AGAPIFacade *_facade;
}

@end
