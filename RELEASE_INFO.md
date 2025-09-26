# QuanYu SDK 发布信息

## 版本: 1.0.11
## 发布日期: 2025-09-26

### 变更摘要
- 发布至 CocoaPods Trunk：QuanYu 1.0.11 已可用
- Podspec 更新：version = 1.0.11，source.tag = 1.0.11
- 规范校验：通过 `pod trunk push --allow-warnings --skip-tests` 验证并发布

### 包含文件
- QuanYu.xcframework（推荐）
- QuanYu.framework（兼容性支持）
- QuanYu.podspec（CocoaPods 配置）
- LICENSE（MIT 许可证）
- README.md（使用说明）

### 使用方式
在 Podfile 中：
```ruby
pod 'QuanYu', '~> 1.0.11'
```

### 支持架构:
- arm64 (iOS设备)
- x86_64 (iOS模拟器)

### 依赖库:
- SocketRocket ~> 0.6.0
- Reachability ~> 3.2

### 系统要求:
- iOS 12.0+
- Xcode 11.0+

### 下一步操作:
1. 检查所有文件是否正确
2. 更新 QuanYu.podspec 中的 Git 仓库地址（如需）
3. 提交到 Git 仓库
4. 创建版本标签 1.0.11 并推送
5. 发布到 CocoaPods（已完成）
