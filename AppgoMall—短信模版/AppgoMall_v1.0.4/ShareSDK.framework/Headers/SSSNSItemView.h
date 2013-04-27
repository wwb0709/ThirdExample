//
//  SSSNSItemView.h
//  AppgoFramework
//
//  Created by 冯 鸿杰 on 13-1-7.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IGridItemView.h"
#import "AGShareFacade.h"

/**
 *	@brief	平台列表项
 */
@interface SSSNSItemView : UIControl <IGridItemView>
{
@private
    UIImageView *_shadowImageView;
    UIImageView *_iconImageView;
    UILabel *_nickNameLabel;
    UIImageView *_siconImageView;
    UIImageView *_selFlagImageView;
    UIImageView *_authImageView;
    
    AGShareFacade *_facade;
    ImageLoader *_loader;
    NSMutableDictionary *_itemData;
    NSInteger _index;
    BOOL _needLayout;
}

@end
