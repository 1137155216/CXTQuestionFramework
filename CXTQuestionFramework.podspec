Pod::Spec.new do |spec|
  spec.name         = 'CXTQuestionFramework'
  spec.version      = '1.0.1'
  spec.license      = { :type => 'MIT' }
  spec.homepage     = 'https://github.com/1137155216/CXTQuestionFramework.git'
  spec.authors      = { 'dyc' => '1137155216@qq.com' }
  spec.summary      = 'cxt'
  spec.source       = { :git => 'https://github.com/1137155216/CXTQuestionFramework.git', :tag =>'#{spec.version}'  }
  spec.platform     = :ios, '9.0'
  spec.vendored_frameworks = 'CXTQuestionFramework.framework'
  spec.resources = 'CXTQuestionFramework.bundle'
  spec.frameworks   = 'UIKit','Foundation'
end
