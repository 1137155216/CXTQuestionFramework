Pod::Spec.new do |spec|
  spec.name         = 'CXTQuestionFramework'
  spec.version      = '1.2.4'
  spec.license      = { :type => 'MIT' }
  spec.homepage     = 'https://github.com/1137155216/CXTQuestionFramework.git'
  spec.authors      = { 'dyc' => '1137155216@qq.com' }
  spec.summary      = 'cxt'
  spec.source       = { :git => 'https://github.com/1137155216/CXTQuestionFramework.git', :tag =>'1.2.4'  }
  spec.platform     = :ios, '9.0'
  spec.vendored_frameworks = 'CXTQuestionFramework.framework'
  spec.resources = 'CXTQuestionFramework.bundle'
  spec.frameworks   = 'UIKit','Foundation'
  s.dependency 'AFNetworking', '~> 4.0'
  s.dependency 'SDWebImage', '~> 5.9'
  s.dependency 'SDAutoLayout', '~> 2.1.3'
  s.dependency 'Masonry', '~> 1.1.0'
  s.dependency 'MJRefresh', '~> 3.7.5'
  s.dependency 'JXCategoryView', '~> 1.5.5'
  s.dependency 'BAButton', '~> 2.6.8'
  s.dependency 'YYText', '~> 1.0.7'
  s.dependency 'SSZipArchive', '~> 2.2.3'
  s.dependency 'FMDB', '~> 2.7'
  s.dependency 'YYModel', '~> 1.0.4'
  s.dependency 'SVProgressHUD', '~> 2.0'
  s.dependency 'WCDB', '~> 1.0.7.5'
  s.dependency 'OpenUDID', '~> 1.0.0'
  
end
