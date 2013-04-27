//
//  SKMoreDataCell.h
//  AppGoSDKDemo
//
//  Created by 冯 鸿杰 on 12-11-9.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *	@brief	获取更多数据列表项
 */
@interface AGMoreDataCell : UITableViewCell
{
@private
    UILabel *_tipsLabel;
    UIActivityIndicatorView *_activityIndicatorView;
    
    BOOL _loading;
    BOOL _needLayout;
}

/**
 *	@brief	加载标识
 */
@property (nonatomic) BOOL loading;


@end
