//
//  ShuoEntities.h
//  SNSServiceSDK
//
//  Created by hower on 12/13/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ShuoEntitiesInfo : NSObject
{
@private
    NSArray *_topics;
    NSArray *_urls;
    NSArray *_userMentions;
}

@property (nonatomic,retain) NSArray *topics;
@property (nonatomic,retain) NSArray *urls;
@property (nonatomic,retain) NSArray *userMentions;

+ (ShuoEntitiesInfo *)entitiesWithResponse:(NSDictionary *)response;

@end
