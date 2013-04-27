//
//  AGShareFacade.h
//  SNSServiceSDK
//
//  Created by 冯 鸿杰 on 12/12/16.
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "EventDispatcher.h"
#import "ISSUserInfo.h"
#import "ShareType.h"
#import "SinaWeiboOAuth2Client.h"
#import "TecentWeiboOAuth2Client.h"
#import "QQSpaceOAuth2Client.h"
#import "SohuWeiboOAuthClient.h"
#import "T163WeiboOAuth2Client.h"
#import "ShuoOAuth2Client.h"
#import "RenRenOAuth2Client.h"
#import "KaiXinOAuth2Client.h"
#import "SSErrorInfo.h"
#import "AGShareAuthView.h"
#import "EventHandler.h"
#import "ISSPublishContent.h"
#import "ImageCacheManager.h"
#import "SSStatusBar.h"
#import "ShareViewStyle.h"
#import "UserParamType.h"

/**
 *	@brief	获取短链接成功返回
 *
 *  @param  result  调用结果标识; YES:成功；NO：失败；
 *  @param  contents    内容列表
 *  @param  error   错误信息
 */
typedef void(^GetShortUrlEventHandler)(BOOL result, NSArray *contents, SSErrorInfo *error);

/**
 *	@brief	令牌状态
 */
typedef enum
{
	SSTokenStateUninit = 0, /**< 未初始化 */
	SSTokenStateGetting = 1, /**< 获取中 */
	SSTokenStateReady = 2 /**< 已就绪 */
}
SSTokenState;


/**
 *	@brief	分享前置器
 */
@interface AGShareFacade : EventDispatcher <UIWebViewDelegate>
{
@private
    NSString *_token;
    NSString *_appKey;
    NSMutableArray *_requestTokens;
    NSMutableArray *_delayOperations;
    ImageCacheManager *_imageCacheManager;
    NSMutableArray *_sessionList;
    NSMutableArray *_shareTaskList;     //登录分享任务的ID，对应缓存ID
    BOOL _updatingAppInfo;              //正在更新应用信息标识
    BOOL _isGetToken;                   //是否正在获取令牌
    id _wxDelegate;                     //微信协议对象
    
    SSStatusBar *_statusBar;
    
    SinaWeiboOAuth2Client *_sinaClient;
    TecentWeiboOAuth2Client *_tecentClient;
    QQSpaceOAuth2Client *_qqloginClient;
    SohuWeiboOAuthClient *_sohuClient;
    T163WeiboOAuth2Client *_163Client;
    ShuoOAuth2Client *_shuoClient;
    RenRenOAuth2Client *_renrenClient;
    KaiXinOAuth2Client *_kaixinClient;
    
    UIWebView *_embedWebView;
    
    
}

/**
 *	@brief	图片缓存管理器
 */
@property (nonatomic,readonly) ImageCacheManager *imageCacheManger;

/**
 *	@brief	授权标识
 */
@property (nonatomic,readonly) BOOL authorized;


/**
 *	@brief	获取前置器共享实例
 *
 *	@return	共享实例
 */
+ (AGShareFacade *)sharedInstance;

/**
 *	@brief	添加立即显示状态栏消息
 *
 *	@param 	message 	消息内容
 *	@param 	icon 	图标
 *	@param 	loading 	是否显示等待提示
 */
- (void)addStatusBarImmediMessage:(NSString *)message
                             icon:(UIImage *)icon
                          loading:(BOOL)loading;

/**
 *	@brief	显示永久状态栏消息
 *
 *	@param 	message 	消息内容
 *	@param 	icon 	图标
 *	@param 	loading 	是否显示等待提示
 */
- (void)showStatusBarAlwaysMessage:(NSString *)message
                              icon:(UIImage *)icon
                           loading:(BOOL)loading;

/**
 *	@brief	隐藏永久状态栏消息
 */
- (void)hideStatusBarAlwaysMessage;


/**
 *	@brief	加载图片
 *
 *	@param 	url 	加载路径
 *
 *	@return	图片加载器对象
 */
- (ImageLoader *)getImage:(NSString *)url;

/**
 *	@brief	获取容器视图控制器
 *
 *	@return	视图控制器
 */
- (UIViewController *)getContainerViewController;

/**
 *	@brief	获取本地的社区用户信息
 *
 *	@param 	type 	社区类型
 *
 *	@return	用户信息,如果没有本地缓存则返回nil
 */
- (id<ISSUserInfo>)getLocalUserInfoWithType:(ShareType)type;

/**
 *	@brief	保存发布内容缓存
 *
 *	@param 	content 	发布内容
 *	@param 	type 	平台类型
 *
 *	@return	缓存ID
 */
- (NSString *)addPublishCacheWithContent:(id<ISSPublishContent>)content
                                    type:(ShareType)type;

/**
 *	@brief	删除发布内容缓存
 *
 *	@param 	idStr 	缓存ID
 */
- (void)removePublishCacheWithId:(NSString *)idStr;

/**
 *	@brief	注册分享任务标识
 *
 *	@param 	tag 	标识值
 *
 *	@return	YES：表示注册成功， NO：标识该标识已使用，正在分享该内容。
 */
- (BOOL)registerShareTaskTag:(NSString *)tag;

/**
 *	@brief	取消注册分享任务标识
 *
 *	@param 	tag 	标识值
 */
- (void)unregisterShareTaskTag:(NSString *)tag;

/**
 *	@brief	刷新离线分享
 *
 *  @param  statusBarTips   状态栏提示标识。YES：提示，NO：不提示
 *  @param  autoAuth    自动授权标识
 *  @param  result 分享返回事件处理
 */
- (void)flushOfflineShare:(BOOL)statusBarTips autoAuth:(BOOL)autoAuth result:(PublishContentEventHandler)result;

/**
 *	@brief	处理请求链接
 *
 *	@param 	url 	链接
 *  @param  wxDelegate  微信协议对象，用来接收微信触发的消息。如果没有集成微信接口，此处可填nil
 *
 *  @return 处理状态，YES：表示接受处理，NO：表示不处理
 */
- (BOOL)handleOpenURL:(NSURL *)url
           wxDelegate:(id)wxDelegate;

/**
 *	@brief	根据分享类型获取客户端
 *
 *	@param 	shareType 	分享类型
 *
 *	@return	客户端对象
 */
- (id<ISSClient>)getClientWithType:(ShareType)shareType;

/**
 *	@brief	获取客户端名称
 *
 *	@param 	shareType 	平台类型
 *
 *	@return	名称
 */
- (NSString *)getClientNameWithType:(ShareType)shareType;

/**
 *	@brief	平台授权
 *
 *	@param 	type 	类型
 *  @param  result  授权事件处理
 */
- (void)authWithType:(ShareType)type result:(AuthEventHandler)result;

/**
 *	@brief	显示分享列表菜单
 *
 *  @since  ver1.0.1    新增自动授权参数
 *
 *	@param 	containerController 	显示菜单的容器视图控制器
 *	@param 	shareList 	分享列表
 *	@param 	content 	内容
 *	@param 	statusBarTips 	  显示状态栏提示标识，YES：显示， NO：不显示
 *	@param 	oneKeyShareList 	一键分享列表
 *  @param  autoAuth    自动授权标志
 *  @param  shareViewStyle  分享视图样式
 *  @param  shareViewTitle  分享视图标题
 *	@param 	result 	发布事件处理
 */
- (void)showShareActionSheet:(UIViewController *)containerController
                   shareList:(NSArray *)shareList
                     content:(id<ISSPublishContent>)content
               statusBarTips:(BOOL)statusBarTips
             oneKeyShareList:(NSArray *)oneKeyShareList
                    autoAuth:(BOOL)autoAuth
              shareViewStyle:(ShareViewStyle)shareViewStyle
              shareViewTitle:(NSString *)shareViewTitle
                      result:(PublishContentEventHandler)result;



/**
 *	@brief	发布内容
 *
 *  @since  ver1.0.1    新增自动授权参数
 *
 *	@param 	shareType 	类型
 *	@param 	content 	内容
 *	@param 	containerController 	容器视图控制器
 *	@param 	publishContentViewType 	发布内容视图类型
 *  @param  statusBarTips   状态栏提示标识：YES：显示； NO：隐藏
 *  @param  oneKeyShareList 一键显示分享列表
 *  @param  autoAuth    自动授权标志
 *  @param  shareViewTitle  分享视图标题
 *	@param 	userData 	附加数据
 *	@param 	result 	发布事件处理
 */
- (void)publishContentWithType:(ShareType)type
                       content:(id<ISSPublishContent>)content
           containerController:(UIViewController *)containerController
        publishContentViewType:(Class)publishContentViewType
                 statusBarTips:(BOOL)statusBarTips
               oneKeyShareList:(NSArray *)oneKeyShareList
                      autoAuth:(BOOL)autoAuth
                shareViewTitle:(NSString *)shareViewTitle
                      userData:(id)userData
                        result:(PublishContentEventHandler)result;

/**
 *	@brief	发布内容
 *
 *  @since  ver1.0.1    新增自动授权参数
 *
 *	@param 	shareList 	类型列表
 *	@param 	content 	内容
 *	@param 	statusBarTips 	状态栏提示标识：YES：显示； NO：隐藏
 *  @param  autoAuth    自动授权标志
 *	@param 	result 	发布事件处理
 */
- (void)publishContentWithType:(NSArray *)shareList
                       content:(id<ISSPublishContent>)content
                 statusBarTips:(BOOL)statusBarTips
                      autoAuth:(BOOL)autoAuth
                        result:(PublishContentEventHandler)result;


/**
 *	@brief	获取用户信息
 *
 *  @since  ver1.0.1    新增自动授权参数
 *
 *	@param 	type 	社会化平台类型
 *  @param  autoAuth    自动授权标志
 *	@param 	result 	获取用户信息返回
 */
- (void)getUserInfoWithType:(ShareType)type
                   autoAuth:(BOOL)autoAuth
                     result:(GetUserInfoEventHandler)result;

/**
 *	@brief	获取用户信息
 *
 *  @since  ver1.0.1
 *
 *	@param 	type 	社会化平台类型
 *	@param 	uid 	用户ID
 *	@param 	parameterType 	参数类型
 *	@param 	autoAuth 	自动授权标识
 *	@param 	result 	获取用户信息返回
 */
- (void)getUserInfoWithType:(ShareType)type
                        uid:(NSString *)uid
              parameterType:(UserParamType)parameterType
                   autoAuth:(BOOL)autoAuth
                     result:(GetUserInfoEventHandler)result;

/**
 *	@brief	关注用户
 *
 *  @since  ver1.0.1    新增自动授权参数
 *
 *	@param 	type 	社会化平台类型
 *	@param 	name 	昵称
 *  @param  autoAuth    自动授权标识
 *	@param 	result 	关注用户返回
 */
- (void)followUserWithType:(ShareType)type
                      name:(NSString *)name
                  autoAuth:(BOOL)autoAuth
                    result:(FollowUserEventHandler)result;

/**
 *	@brief	关注微信用户
 *
 *	@param 	userData 	用户信息
 */
- (void)followWeixinUser:(NSString *)userData;


/**
 *	@brief	获取好友列表
 *
 *  @since  ver1.0.1    新增自动授权参数
 *
 *	@param 	type 	平台类型
 *  @param  pageNo  页码
 *  @param  autoAuth    自动授权标识
 *	@param 	result 	获取好友列表返回
 */
- (void)getFriendsWithType:(ShareType)type
                    pageNo:(NSInteger)pageNo
                  autoAuth:(BOOL)autoAuth
                    result:(GetFriendsEventHandler)result;


/**
 *	@brief	取得与服务器通讯权限令牌
 *  
 *  @param  appKey  应用Key
 */
- (void)getToken:(NSString *)appKey;

/**
 *	@brief	刷新设备令牌，用于在无令牌返回时调用
 *
 *  @return 令牌状态
 */
- (SSTokenState)refreshToken;


/**
 *	@brief	更新应用程序信息
 */
- (void)updateAppInfo;

/**
 *	@brief	更新用户信息
 *
 *	@param 	userInfo 	用户信息
 *  @param  shareType   分享类型
 */
- (void)updateUserInfo:(id<ISSUserInfo>)userInfo shareType:(ShareType)shareType;

/**
 *	@brief	保存分享内容信息
 *
 *	@param 	content 	分享内容
 *	@param 	image 	分享图片
 *	@param 	shareTargets 	分享目标集合
 */
- (void)savePublishContent:(NSString *)content
                     image:(UIImage *)image
              shareTargets:(NSArray *)shareTargets;

/**
 *	@brief	转换发布内容
 *
 *	@param 	content 	内容
 *	@param 	type 	类型
 *
 *	@return	转换后的发布内容
 */
- (id<ISSPublishContent>)convertPublishContent:(id<ISSPublishContent>)content
                                          type:(ShareType)type;


/**
 *	@brief	转换短链接
 *
 *	@param 	content 	内容
 *  @param  url     转换短链的URL
 *	@param 	type 	平台类型
 *
 *  @return 短链接字符串
 */
- (NSString *)getShortUrl:(NSString *)content
                      url:(NSString *)url
                     type:(ShareType)type;

/**
 *	@brief	准备发送
 *
 *	@param 	content 	内容
 *	@param 	shareTargets 	分享目标
 *  @param  result  返回事件
 *
 *  @return YES 正在转换链接，NO 无法转换链接
 */
- (BOOL)prepare:(NSString *)content
   shareTargets:(NSArray *)shareTargets
         result:(void(^)(BOOL result, id<ICMErrorInfo> error))result;


@end
