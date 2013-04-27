//
//  SSSNSPanel.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-7.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PageView.h"
#import "SSSNSPageContentView.h"
#import "AGShareFacade.h"

/**
 *	@brief	社区平台面板
 */
@interface SSSNSPanel : UIView <PageViewDataSource,
                                PageViewDelegate,
                                SSSNSPageContentViewDelegate>
{
@private
    UIImageView *_bgImageView;
    PageView *_contentView;
    
    AGShareFacade *_facade;
    NSMutableArray *_shareList;
    NSMutableArray *_actualShareList;
    NSInteger _pageCount;
}

/**
 *	@brief	选中平台
 */
@property (nonatomic,readonly) NSArray *selectedItems;

/**
 *	@brief	设置一键分享列表
 *
 *	@param 	oneKeyShareList 	一键分享类型列表
 */
- (void)setOneKeyShareList:(NSArray *)oneKeyShareList;


@end
