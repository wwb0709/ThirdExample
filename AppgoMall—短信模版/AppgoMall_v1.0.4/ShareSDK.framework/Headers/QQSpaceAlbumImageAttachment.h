//
//  QQLoginAlbumImageAttachment.h
//  SNSServiceSDK
//
//  Created by hower on 12/11/12.
//  Copyright (c) 2012 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IQQSpaceTopicAttachment.h"

/**
 *	@brief	相册图片类型
 */
typedef enum
{
	QQSpaceAlbumImageTypeJPG = 1, /**< JPG */
	QQSpaceAlbumImageTypeGIF = 2, /**< GIF */
	QQSpaceAlbumImageTypePNG = 3 /**< PNG */
}
QQSpaceAlbumImageType;


/**
 *	@brief	相册图片附件
 */
@interface QQSpaceAlbumImageAttachment : NSObject <IQQSpaceTopicAttachment>
{
@private
    NSString *_albumid;
    NSString *_pictureid;
    NSString *_sloc;
    QQSpaceAlbumImageType _picType;
    NSInteger _picHeight;
    NSInteger _picWidth;
}

/**
 *	@brief	初始化相册图片附件
 *
 *	@param 	albumId 	相册ID
 *	@param 	pictureId 	图片ID
 *	@param 	sloc 	小图ID
 *
 *	@return	相册图片附件
 */
- (id)initWithAlbumId:(NSString *)albumId
            pictureId:(NSString *)pictureId
                 sloc:(NSString *)sloc;


/**
 *	@brief	初始化相册图片附件
 *
 *	@param 	albumId 	相册ID
 *	@param 	pictureId 	图片ID
 *	@param 	sloc 	小图ID
 *	@param 	picType 	图片类型
 *	@param 	picWidth 	图片宽度
 *	@param 	picHeight 	图片高度
 *
 *	@return	相册图片附件
 */
- (id)initWithAlbumId:(NSString *)albumId
            pictureId:(NSString *)pictureId
                 sloc:(NSString *)sloc
              picType:(QQSpaceAlbumImageType)picType
             picWidth:(NSInteger)picWidth
            picHeight:(NSInteger)picHeight;


@end
