Pod::Spec.new do |spec|
  spec.name         = "QuanYu"
  spec.version      = "1.0.1"
  spec.summary      = "QuanYu WebSocket SDK for iOS"
  spec.description  = <<-DESC
                      QuanYu is a powerful WebSocket communication SDK for iOS applications.
                      Provides easy-to-use APIs for real-time communication with automatic dependency management.
                      This version contains pre-compiled frameworks without source code.
                      DESC

  spec.homepage     = "https://github.com/XYRZX/QuanYu-SDK-Release"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author       = { "Axon" => "1327642481@qq.com" }
  
  spec.platform     = :ios, "12.0"
  spec.source       = { :git => "https://github.com/XYRZX/QuanYu-SDK-Release.git", :tag => "#{spec.version}" }
  
  # 使用预编译的XCFramework（推荐方式）
  spec.vendored_frameworks = "Framework/QuanYu.xcframework"
  
  # 如果你想使用传统Framework，可以替换为：
  # spec.vendored_frameworks = "Framework/QuanYu.framework"
  
  # 注意：PortSIPVoIPSDK.framework 由于文件过大，需要用户手动添加
  # 请从 PortSIP 官网下载并手动集成到项目中
  
  # 系统框架依赖
  spec.frameworks = "Foundation", "CFNetwork", "Security"
  
  # 第三方库依赖（CocoaPods会自动下载）
  spec.dependency "SocketRocket", "~> 0.6.0"
  spec.dependency "Reachability", "~> 3.2"
  
  # 其他配置
  spec.requires_arc = true
  
  # 支持的架构
  spec.pod_target_xcconfig = {
    'VALID_ARCHS' => 'arm64 x86_64'
  }
end