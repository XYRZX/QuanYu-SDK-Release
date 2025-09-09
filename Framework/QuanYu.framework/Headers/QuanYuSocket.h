//
//  QuanYuSocket.h
//  QuanYu
//
//  Created by 周新 on 2020/2/25.
//  Copyright © 2020 周新. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QuanYuLoginModel.h"
#import "QuanYuUserModel.h"

NS_ASSUME_NONNULL_BEGIN

@protocol QuanYuSocketDelegate <NSObject>

@required

/// 收到的消息
/// @param message 消息内容
- (void)onMessage:(NSString *)message;

@optional

/// 连接服务器时触发
/// @param attempts 重试次数
- (void)onConnecting:(int)attempts;

/// 连接成功 （包括重启连接）
- (void)onConnected;

/// 连接断开 （退出登录不触发）
/// @param code 错误代码
/// @param reason 错误原因
- (void)onDisconnectedWithCode:(int)code WithReason:(NSString *)reason;

/// 登录失败
/// @param code 错误代码
/// @param reason 错误原因
- (void)onConnectFailedWithCode:(int)code WithReason:(NSString *)reason;


@end



@interface QuanYuSocket : NSObject

//心跳时间间隔   - 默认值120
@property (nonatomic, assign) int heartbeatInterval;

//心跳超时时间间隔   - 默认值10
@property (nonatomic, assign) int heartbeatTimeoutInterval;

//最大重连时间间隔   - 默认值30
@property (nonatomic, assign) int connectionRecoveryMaxInterval;

//最小重连时间间隔   - 默认值2
@property (nonatomic, assign) int connectionRecoveryMinInterval;

//重连次数   - 默认值0
@property (nonatomic, assign, readonly) int reconnectAttempts;

//代理
@property (nonatomic, weak) id<QuanYuSocketDelegate > delegate;

//日志开关 - 默认值NO（关闭）
@property (nonatomic, assign) BOOL logEnabled;

//挂机后是否自动变空闲
@property (nonatomic, assign, readonly) NSInteger hangupToFree;

+ (instancetype)shared;

// 登录
- (void)login:(QuanYuLoginModel *)loginModel completion:(void(^)(BOOL success, NSString *errorMessage))completion;

// 退出登录
- (void)logout;

// 发送请求方法sendRequest
- (void)sendRequestWithMessage:(NSString *)str;

// 重新连接服务器
- (void)reStarConnectServer;

// 设置app保活方法 默认NO NO:不保活 YES:保活
- (void)setupKeepAlive:(BOOL)sender;

// 上传日志
- (void)saveLog:(NSString *)event message:(NSString *)message;

// 设置日志开关
- (void)setLogEnabled:(BOOL)enabled;

// 获取日志开关状态(默认关闭)
- (BOOL)isLogEnabled;

@end

NS_ASSUME_NONNULL_END
