//
//  SSSNSPageContentView.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-7.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import "PageContentView.h"
#import "GridView.h"

@class SSSNSPageContentView;

@protocol SSSNSPageContentViewDelegate <NSObject>

/**
 *	@brief	列表项点击事件
 *
 *	@param 	pageContentView 	内容视图
 *	@param 	itemData 	列表项数据
 */
- (void)pageContentView:(SSSNSPageContentView *)pageContentView
            itemOnTouch:(NSMutableDictionary *)itemData;


@end

/**
 *	@brief	分享面板页面内容
 */
@interface SSSNSPageContentView : PageContentView <GridViewDelegate>
{
@private
    GridView *_gridView;
    
    NSArray *_listData;
    id<SSSNSPageContentViewDelegate> _delegate;
}

/**
 *	@brief	列表数据
 */
@property (nonatomic,retain) NSArray *listData;

/**
 *	@brief	协议对象
 */
@property (nonatomic,assign) id<SSSNSPageContentViewDelegate> delegate;

/**
 *	@brief	刷新数据
 */
- (void)refreshData;

@end
