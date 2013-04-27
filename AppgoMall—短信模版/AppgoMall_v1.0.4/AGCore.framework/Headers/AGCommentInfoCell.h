//
//  SKCommentInfoCell.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-11-2.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AGAPIFacade.h"
#import "ImageView.h"
#import "AGCommentInfo.h"

/**
 *	@brief	评论列表项
 */
@interface AGCommentInfoCell : UITableViewCell
{
@private
    AGAPIFacade *_facade;
    AGCommentInfo *_commentInfo;
    BOOL _needLayout;
    ImageLoader *_iconLoader;
    CGFloat _cellHeight;
    BOOL _showSeparatorLine;
    
    ImageView *_iconImageView;
    UILabel *_nicknameLabel;
    UILabel *_contentLabel;
    UILabel *_dateLabel;
    UIButton *_replyButton;
    UIImageView *_lineImageView;
}

/**
 *	@brief	评论信息
 */
@property (nonatomic,retain) AGCommentInfo *commentInfo;

/**
 *	@brief	列表项高度
 */
@property (nonatomic,readonly) CGFloat cellHeight;

/**
 *	@brief	显示分隔线
 */
@property (nonatomic) BOOL showSeparatorLine;

/**
 *	@brief	计算列表项高度
 *
 *	@param 	commentInfo 	评论信息
 */
- (void)calculationCellHeight:(AGCommentInfo *)commentInfo;


@end
