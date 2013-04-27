//
//  AGShareType.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12/12/16.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#ifndef SNSServiceSDK_AGShareType_h
#define SNSServiceSDK_AGShareType_h

/**
 *	@brief	分享类型
 */
typedef enum
{
	ShareTypeSinaWeibo = 1, /**< 新浪微博 */
	ShareTypeTencentWeibo, /**< 腾讯微博 */
	ShareTypeSohuWeibo, /**< 搜狐微博 */
	ShareType163Weibo, /**< 网易微博 */
	ShareTypeDouBan, /**< 豆瓣社区 */
	ShareTypeQQSpace, /**< QQ空间 */
	ShareTypeRenren, /**< 人人网 */
	ShareTypeKaixin, /**< 开心网 */
	ShareTypePengyou, /**< 朋友网 */
	ShareTypeFacebook, /**< Facebook */
	ShareTypeTwitter, /**< Twitter */
	ShareTypeEvernote, /**< 印象笔记 */
	ShareTypeFoursquare, /**< Foursquare */
	ShareTypeGooglePlus, /**< Google＋ */
	ShareTypeInstagram, /**< Instagram */
	ShareTypeLinkedIn, /**< LinkedIn */
	ShareTypeTumbir, /**< Tumbir */
    ShareTypeMail, /**< 邮件分享 */
	ShareTypeSMS, /**< 短信分享 */
	ShareTypeAirPrint, /**< 打印 */
	ShareTypeCopy, /**< 拷贝 */
    ShareTypeWeixiSession, /**< 微信好友 */
	ShareTypeWeixiTimeline, /**< 微信朋友圈 */
    ShareTypeQQ /**< QQ */
}
ShareType;


#endif
