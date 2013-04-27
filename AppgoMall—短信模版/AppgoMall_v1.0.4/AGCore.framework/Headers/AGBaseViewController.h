//
//  SKBaseViewController.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-10-20.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AGAPIFacade.h"

/**
 *	@brief	视图控制器基类
 */
@interface AGBaseViewController : UIViewController
{
@private
    AGAPIFacade *_facade;
}

/**
 *	@brief	接口前置器
 */
@property (nonatomic,readonly) AGAPIFacade *facade;

/**
 *	@brief	返回
 *
 *	@param 	sender 	事件对象
 */
- (void)back:(id)sender;

@end
