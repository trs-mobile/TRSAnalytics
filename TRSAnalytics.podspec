Pod::Spec.new do |s|

    s.name         = 'TRSAnalytics'
    s.version      = '2.1.3'
    s.summary      = 'TRS网脉移动统计SDK'
    s.description  = <<-DESC
                  TRS网脉移动统计SDK，用于移动端埋码数据搜集
                   DESC
    s.homepage     = 'https://github.com/trs-mobile/TRSAnalytics'

    s.license      = 'MIT'
    s.license      = { :type => 'MIT', :file => 'LICENSE' }

    s.requires_arc = true
    s.platform     = :ios, '9.0'
    s.ios.deployment_target = '9.0'
    s.frameworks   = 'UIKit', 'Foundation','CoreTelephony'

    s.author       = { 'wu.jianjun' => 'wu.jianjun@trs.com.cn' }
    s.source       = { :git => 'https://github.com/trs-mobile/TRSAnalytics.git', :tag => s.version.to_s }

    s.vendored_frameworks = 'TRSAnalytics/TRSAnalytics.framework'
    s.source_files = 'TRSAnalytics/TRSAnalytics.framework/Headers/*.{h}'
    s.public_header_files = 'TRSAnalytics/TRSAnalytics.framework/Headers/TRSAnalytics.h'

    s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64', 'GENERATE_INFOPLIST_FILE' => 'YES'}
    s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64', 'GENERATE_INFOPLIST_FILE' => 'YES'}

end
