//
//  SSPublishAppRecommendViewController.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-11.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ISSPublishContentView.h"
#import "SSPublishContent.h"
#import "ISSPublishSession.h"
#import "SSPublishAppRecommendView.h"

/**
 *	@brief	应用推荐分享视图
 */
@interface SSPublishAppRecommendViewController : UIViewController <ISSPublishContentView>
{
@private
    UIScrollView *_contentView;
    SSPublishAppRecommendView *_recommendView;
    
    SSPublishContent *_publishContent;
    id<ISSPublishSession> _session;
    id<ISSClient> _client;
}

@end
