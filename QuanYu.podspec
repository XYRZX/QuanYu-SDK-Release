Pod::Spec.new do |spec|
  spec.name         = "QuanYu"
  spec.version      = "1.0.2"
  spec.summary      = "QuanYu WebSocket SDK for iOS"
  spec.description  = <<-DESC
                      QuanYu is a powerful WebSocket communication SDK for iOS applications.
                      Provides easy-to-use APIs for real-time communication.
                      DESC

  spec.homepage     = "https://github.com/your-username/QuanYu-SDK-Release"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author       = { "Your Name" => "your.email@example.com" }
  
  spec.platform     = :ios, "12.0"
  spec.source       = { :git => "https://github.com/your-username/QuanYu-SDK-Release.git", :tag => "#{spec.version}" }
  
  # 使用预编译的XCFramework（推荐）
  spec.vendored_frameworks = "Framework/QuanYu.xcframework"
  
  spec.frameworks = "Foundation", "CFNetwork", "Security"
  spec.dependency "SocketRocket", "~> 0.6.0"
  spec.dependency "Reachability", "~> 3.2"
  
  spec.requires_arc = true
end
