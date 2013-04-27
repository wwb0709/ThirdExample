//
//  SKBaseView.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-10-12.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AGAPIFacade.h"

/**
 *	@brief	基础视图
 */
@interface AGBaseView : UIView
{
@protected
    AGAPIFacade *_facade;
}

/**
 *	@brief	接口前置器
 */
@property (nonatomic,readonly) AGAPIFacade *facade;


@end
