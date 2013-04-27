//
//  SKGoodsInfoView.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-10-12.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "AGBaseView.h"
#import "IUIAction.h"
#import "AGGoodsInfo.h"
#import "AGGoodsInfoHeaderView.h"
#import "AGGoodsInfoSectionHeaderView.h"
#import "AGEvaluationInfoCell.h"
#import "AGCommentInfoCell.h"
#import "AGGoodsInfoToolbar.h"
#import "AGLoadingView.h"
#import "AGRefreshTableHeaderView.h"

@class AGGoodsInfoView;

/**
 *	@brief	商品详情视图协议
 */
@protocol AGGoodsInfoViewDelegate <NSObject>

@optional

/**
 *	@brief	显示网页商品详情
 *
 *	@param 	goodsInfoView 	商品详情视图
 *	@param 	goodsInfo 	商品信息
 */
- (void)goodsInfoView:(AGGoodsInfoView *)goodsInfoView
          showWebView:(AGGoodsInfo *)goodsInfo;

/**
 *	@brief	变更登录帐号
 *
 *	@param 	goodsInfoView 	商品详情视图
 */
- (void)goodsInfoViewOnChangeAccount:(AGGoodsInfoView *)goodsInfoView;


@end

/**
 *	@brief	商品详情视图
 */
@interface AGGoodsInfoView : AGBaseView <IUIAction,
                                         AGGoodsInfoHeaderViewDelegate,
                                         AGGoodsInfoToolbarDelegate,
                                         SKRefreshTableHeaderDelegate,
                                         UIActionSheetDelegate,
                                         UITableViewDataSource,
                                         UITableViewDelegate>
{
@private
    UITableView *_tableView;
    AGGoodsInfoHeaderView *_headerView;
    AGGoodsInfoSectionHeaderView *_evaluationSectionHeaderView;
    AGGoodsInfoSectionHeaderView *_commentSectionHeaderView;
    AGEvaluationInfoCell *_caluationEvaluationInfoCell;
    AGCommentInfoCell *_caluationCommentInfoCell;
    AGGoodsInfoToolbar *_toolbar;
    AGLoadingView *_loadingView;
    AGRefreshTableHeaderView *_refreshHeaderView;
    
    AGGoodsInfo *_goodsInfo;
    NSInteger _commentPageSize;
    BOOL _needFavorite;                                 //是否需要收藏
    BOOL _requestFavorite;                              //是否进行收藏
    BOOL _requestComment;                               //是否发表评论
    BOOL _refreshData;                                  //是否需要刷新数据
    BOOL _hasMoreComment;                               //是否有更多评论标识
    BOOL _requestMoreComment;                           //正在请求更多评论
    BOOL _regetGoodsInfo;                               //重新获取商品信息
    CGRect _keyboardFrame;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_sectionArray;
    
    id<AGGoodsInfoViewDelegate> _delegate;
}

/**
 *	@brief	协议对象
 */
@property (nonatomic,assign) id<AGGoodsInfoViewDelegate> delegate;

/**
 *	@brief	商品信息
 */
@property (nonatomic,readonly) AGGoodsInfo *goodsInfo;



/**
 *	@brief	初始化商品详情视图
 *
 *	@param 	frame 	显示区域
 *	@param 	goodsInfo 	商品信息
 *  @param  commentPageSize 评论分页大小
 *
 *	@return	商品详情视图对象
 */
- (id)initWithFrame:(CGRect)frame
          goodsInfo:(AGGoodsInfo *)goodsInfo
    commentPageSize:(NSInteger)commentPageSize;

@end
