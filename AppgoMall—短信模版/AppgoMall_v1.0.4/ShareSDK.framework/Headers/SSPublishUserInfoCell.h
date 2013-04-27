//
//  SSPublishUserInfoCell.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-7.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AGSUserInfo.h"
#import "ImageView.h"
#import "AGShareFacade.h"

/**
 *	@brief	用户信息列表项
 */
@interface SSPublishUserInfoCell : UITableViewCell
{
@private
    AGSUserInfo *_userInfo;
    
    UIActivityIndicatorView *_indicatorView;
    ImageView *_iconImageView;
    UIImageView *_vipImageView;
    UIImageView *_sexImageView;
    UILabel *_nickNameLabel;
    UILabel *_descLabel;
    
    
    BOOL _needLayout;
    AGShareFacade *_facade;
    ImageLoader *_loader;
}

/**
 *	@brief	用户信息
 */
@property (nonatomic,retain) AGSUserInfo *userInfo;


@end
