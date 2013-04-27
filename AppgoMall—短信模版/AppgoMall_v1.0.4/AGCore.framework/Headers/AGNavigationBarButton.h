//
//  SKNavigationBarButton.h
//  StoreKitSDK
//
//  Created by 冯 鸿杰 on 12-11-15.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AGNavigationBarButton : UIButton
{
@private
    UIViewController *_controller;
}

/**
 *	@brief	初始化关闭视图控制器按钮
 *
 *	@param 	controller 	视图控制器
 *
 *	@return	导航按钮
 */
- (id)initCloseButtonWithTargetController:(UIViewController *)controller;



@end
