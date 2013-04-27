//
//  QQOAuth2Client.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12-11-6.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "EventDispatcher.h"
#import "ISSClient.h"
#import "IQQSpaceTopicAttachment.h"
#import "AGShareAuthView.h"

/**
 *	@brief	发表说说成功
 */
#define SSN_QQS_ADD_TOPIC_SUCCESS @"ssnAddTopicSuccess"

/**
 *	@brief	发表说说失败
 */
#define SSN_QQS_ADD_TOPIC_FAIL @"ssnAddTopicFail"

/**
 *	@brief	上传图片成功
 */
#define SSN_QQS_UPLOAD_PHOTO_SUCCESS @"ssnUploadPhotoSuccess"

/**
 *	@brief	上传图片失败
 */
#define SSN_QQS_UPLOAD_PHOTO_FAIL @"ssnUploadPhotoFail"

/**
 *	@brief	相册ID Key
 */
#define SSK_QQS_ALBUMN_ID @"albumnId"

/**
 *	@brief	大图ID Key
 */
#define SSK_QQS_LLOC @"lloc"

/**
 *	@brief	小图ID Key
 */
#define SSK_QQS_SLOC @"sloc"

/**
 *	@brief	大图路径Key
 */
#define SSK_QQS_LARGE_URL @"largeUrl"

/**
 *	@brief	小图路径Key
 */
#define SSK_QQS_SMALL_URL @"smallUrl"

/**
 *	@brief	照片高度Key
 */
#define SSK_QQS_PHOTO_HEIGHT @"height"

/**
 *	@brief	照片宽度Key
 */
#define SSK_QQS_PHOTO_WIDTH @"width"

/**
 *	@brief	附加数据
 */
#define SSK_QQS_USER_DATA @"userData"


/**
 *	@brief	说说类型
 */
typedef enum
{
    QQSpaceTopicTypeNone = 0,   /**< 无 */
	QQSpaceTopicTypePic = 1, /**< 图片 */
	QQSpaceTopicTypeWebPage = 2, /**< 网页 */
	QQSpaceTopicTypeVideo = 3 /**< 视图 */
}
QQSpaceTopicType;

/**
 *	@brief	第三放平台来源
 */
typedef enum
{
	QQSpaceThirdSourceQQSpace = 1, /**< QQ空间 */
	QQSpaceThirdSourceFriend = 2, /**< 朋友网 */
	QQSpaceThirdSourceWeibo = 3, /**< 腾讯微博 */
	QQSpaceThirdSourceQPlus = 4 /**< Q+平台 */
}
QQSpaceThirdSource;


@class AGShareFacade;

/**
 *	@brief	QQ登录OAuth2客户端
 */
@interface QQSpaceOAuth2Client : EventDispatcher <UIWebViewDelegate,
                                                  AGShareAuthViewDelegate,
                                                  ISSClient>
{
@private
    NSString *_appKey;
    NSString *_appSecret;
    NSString *_redirectUrl;
    NSMutableArray *_httpTokens;           //用于保存临时的HTTP请求令牌
    
    NSString *_accessToken;
    NSString *_openId;
    NSDate *_expiredTime;
    
    AGShareAuthView *_authView;
    AGShareFacade *_facade;
}

/**
 *	@brief	授权令牌
 */
@property (nonatomic,readonly) NSString *accessToken;

/**
 *	@brief	初始化QQ登录OAuth2客户端
 *
 *	@param 	appKey 	应用Key
 *  @param  appSecret   应用对应的密钥
 *  @param  redirectUrl 回调地址
 *  @param  delegate    协议实现对象
 *
 *	@return	OAuth2客户端对象
 */
- (id)initWithAppKey:(NSString *)appKey
           appSecret:(NSString *)appSecret
         redirectUrl:(NSString *)redirectUrl;

/**
 *	@brief	发表说说
 *
 *	@param 	topicType 	说说类型
 *	@param 	attach 	附件信息，当类型不为QQLoginTopicTypeNone时有效
 *	@param 	content 	内容
 *	@param 	address 	地理位置信息,如果为nil，则不发送地理位置信息
 *	@param 	lat 	纬度,当address非nil时有效
 *	@param 	lng 	经度,当address非nil时有效
 *	@param 	thirdSource 	第三方平台
 *  @param  userData    附加数据
 */
- (void)addTopic:(QQSpaceTopicType)topicType
          attach:(id<IQQSpaceTopicAttachment>)attach
         content:(NSString *)content
         address:(NSString *)address
             lat:(double)lat
             lng:(double)lng
     thirdSource:(QQSpaceThirdSource)thirdSource
        userData:(id)userData;

/**
 *	@brief	上传照片到相册
 *
 *	@param 	image 	图片对象
 *  @param  imageQuality    上传图片质量
 *	@param 	description 	照片描述，注意照片描述不能超过200个字符。
 *	@param 	title 	照片的命名，必须以.jpg, .gif, .png, .jpeg, .bmp此类后缀结尾。
 *	@param 	albumid 	相册id。可不填，不填时则根据“mobile”标识选择默认上传的相册。
 *	@param 	lat     照片拍摄时的地理位置的经度。请使用原始数据（纯经纬度，0-360）
 *	@param 	lng     照片拍摄时的地理位置的纬度。请使用原始数据（纯经纬度，0-360）
 *  @param  userData    附加数据
 */
- (void)uploadPhotoWithImage:(UIImage *)image
                imageQuality:(CGFloat)imageQuality
                 description:(NSString *)description
                       title:(NSString *)title
                     albumid:(NSString *)albumid
                         lat:(double)lat
                         lng:(double)lng
                    userData:(id)userData;


@end
