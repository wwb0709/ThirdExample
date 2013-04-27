//
//  TabBarController.m
//  AppgoMallDemo
//
//  官方网站：http://www.appgo.cn
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "TabBarController.h"
#import <AppgoMall/AppgoMall.h>
#import "FirstViewController.h"
#import "SecondViewController.h"
#import "ThirdViewController.h"
#import "AppDelegate.h"

@implementation TabBarController

- (id)init
{
    self = [super init];
    if (self)
    {
        // Custom initialization
        UIViewController *appgoViewController = [AppgoMall recommendGoodsControllerWithStyle:SKRecommendGoodsViewStyleListX2
                                                                                    pageSize:60
                                                                        allowUserChangeStyle:YES
                                                                                  showHeader:YES];
        appgoViewController.title = @"商城";
        appgoViewController.tabBarItem.image = [UIImage imageNamed:@"store.png"];
        UINavigationController *navController4 = [[[UINavigationController alloc] initWithRootViewController:appgoViewController]
                                                  autorelease];
        navController4.navigationBar.barStyle = UIBarStyleBlack;
        
        FirstViewController *firstViewController = [[[FirstViewController alloc] init] autorelease];
        firstViewController.navigationItem.leftBarButtonItem = [[[UIBarButtonItem alloc] initWithTitle:@"关闭"
                                                                                                 style:UIBarButtonItemStyleBordered
                                                                                                target:self
                                                                                                action:@selector(backButtonClickHandler:)]
                                                                autorelease];
        UINavigationController *navController1 = [[[UINavigationController alloc] initWithRootViewController:firstViewController]
                                                  autorelease];

        SecondViewController *secondViewController = [[[SecondViewController alloc] init] autorelease];
        secondViewController.navigationItem.leftBarButtonItem = [[[UIBarButtonItem alloc] initWithTitle:@"关闭"
                                                                                                 style:UIBarButtonItemStyleBordered
                                                                                                target:self
                                                                                                action:@selector(backButtonClickHandler:)]
                                                                autorelease];
        UINavigationController *navController2 = [[[UINavigationController alloc] initWithRootViewController:secondViewController]
                                                  autorelease];


        ThirdViewController *thirdViewController = [[[ThirdViewController alloc] init] autorelease];
        thirdViewController.navigationItem.leftBarButtonItem = [[[UIBarButtonItem alloc] initWithTitle:@"关闭"
                                                                                                 style:UIBarButtonItemStyleBordered
                                                                                                target:self
                                                                                                action:@selector(backButtonClickHandler:)]
                                                                autorelease];
        UINavigationController *navController3 = [[[UINavigationController alloc] initWithRootViewController:thirdViewController]
                                                  autorelease];
        
        self.viewControllers = @[navController1, navController2, navController3, navController4];
    }
    return self;
}

- (void)backButtonClickHandler:(id)sender
{
    [((AppDelegate *)[UIApplication sharedApplication].delegate).navigationController popToRootViewControllerAnimated:NO];
}

@end
