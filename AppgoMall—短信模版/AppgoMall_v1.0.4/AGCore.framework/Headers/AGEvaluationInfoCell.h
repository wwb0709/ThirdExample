//
//  SKEvaluationInfoCell.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-11-1.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AGEvaluationInfo.h"
#import "AGAPIFacade.h"

/**
 *	@brief	评价信息列表项
 */
@interface AGEvaluationInfoCell : UITableViewCell
{
@private
    UILabel *_nameLabel;
    UILabel *_contentLabel;
    UIImageView *_lineImageView;
    
    AGAPIFacade *_facade;
    AGEvaluationInfo *_info;
    BOOL _needLayout;
    CGFloat _cellHeight;
    BOOL _showSeparatorLine;
}

/**
 *	@brief	评价信息
 */
@property (nonatomic,retain) AGEvaluationInfo *info;

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
 *	@param 	info 	评价信息
 */
- (void)calculationCellHeight:(AGEvaluationInfo *)info;


@end
