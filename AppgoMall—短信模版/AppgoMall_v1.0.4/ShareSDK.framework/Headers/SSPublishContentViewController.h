//
//  SSPublishContentViewController.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-6.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SSPublishContentToolbar.h"
#import "ISSPublishContentView.h"
#import "ISSClient.h"
#import "SSSNSPanel.h"
#import "SSPublishContent.h"

/**
 *	@brief	一键分享内容视图控制器
 */
@interface SSPublishContentViewController : UIViewController <ISSPublishContentView,
                                                              UITextViewDelegate,
                                                              UINavigationControllerDelegate,
                                                              UIImagePickerControllerDelegate>
{
@private
    UITextView *_contentTextView;
    SSPublishContentToolbar *_toolbar;
    SSSNSPanel *_snsPanel;
    UILabel *_wordCountLabel;
    UIButton *_clearButton;
    
    id<ISSClient> _client;
    id<ISSPublishSession> _session;
    UIImage *_image;
    SSPublishContent *_publishContent;
    NSMutableArray *_toClients;
    NSArray *_oneKeyShareList;
    NSString *_content;
    BOOL _emptyCotent;
}

/**
 *	@brief	客户端对象
 */
@property (nonatomic,readonly) id<ISSClient> client;


@end
