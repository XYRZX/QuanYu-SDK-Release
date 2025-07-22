//
//  QuanYuUserModel.h
//  QuanYu
//
//  Created by QuanYu on 2024/01/01.
//  Copyright © 2024 QuanYu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * 全语用户信息模型
 * 用于封装登录成功后的用户数据
 */
@interface QuanYuUserModel : NSObject

/// 客户端ID
@property (nonatomic, assign) NSInteger cid;

/// 用户代码
@property (nonatomic, assign) NSInteger code;

/// 是否启用IPPS
@property (nonatomic, assign) NSInteger enableIpps;

/// 分机号码
@property (nonatomic, copy) NSString *extphone;

/// 分机密码
@property (nonatomic, copy) NSString *extphonePassword;

/// 组ID
@property (nonatomic, assign) NSInteger gids;

/// 服务器IP地址
@property (nonatomic, copy) NSString *ip;

/// 最低IPPS文件版本
@property (nonatomic, assign) NSInteger lowestIppsFileVersion;

/// 用户名称
@property (nonatomic, copy) NSString *name;

/// 端口号
@property (nonatomic, assign) NSInteger port;

/// SIP服务器IP和端口
@property (nonatomic, copy) NSString *sipServerIPPort;

/// 访问令牌
@property (nonatomic, copy) NSString *token;

/**
 * 从字典创建用户模型
 * @param dictionary 包含用户信息的字典
 * @return 用户模型实例
 */
+ (instancetype)modelWithDictionary:(NSDictionary *)dictionary;

/**
 * 将模型转换为字典
 * @return 包含用户信息的字典
 */
- (NSDictionary *)toDictionary;

/**
 * 从本地存储获取用户信息
 * @return 用户模型实例，如果没有保存的数据则返回nil
 */
+ (nullable instancetype)currentUser;

/**
 * 保存用户信息到本地存储
 */
- (void)saveToLocal;

/**
 * 清除本地存储的用户信息
 */
+ (void)clearLocalUser;

@end

NS_ASSUME_NONNULL_END