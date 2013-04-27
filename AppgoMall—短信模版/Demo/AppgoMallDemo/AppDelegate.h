//
//  AppDelegate.h
//  AppgoMallDemo
//
//  官方网站：http://www.appgo.cn
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AppgoMall/AppgoMall.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate,UITabBarControllerDelegate,AppgoMallDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UINavigationController *navigationController;

@end
