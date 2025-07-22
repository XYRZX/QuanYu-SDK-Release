//
//  QuanYuLoginModel.h
//  QuanYu
//
//  Created by Assistant on 2024/12/19.
//  Copyright © 2024 QuanYu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QuanYuLoginModel : NSObject

@property(nonatomic, strong) NSString *domain;    // 域名
@property(nonatomic, strong) NSString *gid;       // gid
@property(nonatomic, strong) NSString *code;      // code
@property(nonatomic, strong) NSString *extPhone;  // extPhone
@property(nonatomic, strong) NSString *appKey;    // appKey
@property(nonatomic, strong) NSString *secretKey; // secretKey

// 验证所有必要参数是否都有值
- (BOOL)isValid;

// 获取验证失败的原因
- (NSString *)validationErrorMessage;

@end

NS_ASSUME_NONNULL_END
