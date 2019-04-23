Pod::Spec.new do |s|

  s.name         = "TRSAnalytics"
  s.version      = "2.0.1"
  s.summary      = "TRS网脉移动统计SDK"
  s.description  = <<-DESC
                  TRS网脉移动统计SDK，用于移动端埋码数据搜集
                   DESC
  s.homepage     = "https://github.com/trs-mobile/TRSAnalytics"
  s.license      = "MIT"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "wu.jianjun" => "wu.jianjun@trs.com.cn" }
  s.platform     = :ios, "8.0"
  s.ios.deployment_target = "8.0"
  s.source       = { :git => "https://github.com/trs-mobile/TRSAnalytics.git", :tag => "#{s.version}" }
  s.vendored_frameworks = "TRSAnalytics/trs_ta_sdk.framework"
  s.source_files = 'TRSAnalytics/trs_ta_sdk.framework/Headers/*.{h}'
  s.public_header_files = 'TRSAnalytics/trs_ta_sdk.framework/Headers/TRSAnalytics.h'
  s.requires_arc = true

end
