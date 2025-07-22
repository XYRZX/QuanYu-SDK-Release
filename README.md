# QuanYu SDK

QuanYu是一个强大的iOS WebSocket通信SDK，提供简单易用的实时通信API。

## 🚀 快速开始

### 安装

在你的 `Podfile` 中添加：

```ruby
pod 'QuanYu', '~> 1.0.2'
```

然后运行：

```bash
pod install
```

### 基本使用

```objc
#import <QuanYu/QuanYu.h>

// 创建WebSocket管理器
QYWebSocketManager *manager = [[QYWebSocketManager alloc] init];
manager.delegate = self;

// 连接服务器
[manager connectToServer:@"ws://your-server.com"];

// 发送消息
[manager sendMessage:@"Hello, World!"];
```

## 📋 系统要求

- iOS 12.0+
- Xcode 11.0+
- 支持架构: arm64 (设备), x86_64 (模拟器)

## 🔧 功能特性

- ✅ WebSocket连接管理
- ✅ 自动重连机制
- ✅ 消息队列管理
- ✅ 网络状态监控
- ✅ 线程安全
- ✅ 简单易用的API

## 📚 依赖库

### 自动依赖（CocoaPods）
- SocketRocket: WebSocket通信
- Reachability: 网络状态监控

### 手动依赖
- **PortSIPVoIPSDK.framework**: VoIP通信功能
  - 由于文件过大（247MB），无法通过CocoaPods自动安装
  - 请从 [PortSIP官网](https://www.portsip.com) 下载最新版本
  - 手动拖拽到项目中并添加到 "Frameworks, Libraries, and Embedded Content"

*注意: 自动依赖库会通过CocoaPods自动安装，无需手动配置*

## 📄 许可证

MIT License
