Pod::Spec.new do |spec|
  spec.name         = 'CXTQuestionFramework'
  spec.version      = '1.3.0'
  spec.license      = { :type => 'MIT' }
  spec.homepage     = 'https://github.com/1137155216/CXTQuestionFramework.git'
  spec.authors      = { 'dyc' => '1137155216@qq.com' }
  spec.summary      = 'cxt'
  spec.source       = { :git => 'https://github.com/1137155216/CXTQuestionFramework.git', :tag =>'1.3.0'  }
  spec.platform     = :ios, '9.0'
  spec.vendored_frameworks = 'CXTQuestionFramework.framework'
  spec.resources = 'CXTQuestionFramework.bundle'
  spec.frameworks   = 'UIKit','Foundation'
  spec.dependency 'AFNetworking', '~> 4.0'
  spec.dependency 'SDWebImage', '~> 5.9'
  spec.dependency 'SDAutoLayout', '~> 2.1.3'
    spec.dependency 'Masonry', '~> 1.1.0'
    spec.dependency 'JXCategoryView', '~> 1.5.5'
    spec.dependency 'BAButton', '~> 2.6.8'
    spec.dependency 'YYText', '~> 1.0.7'
    spec.dependency 'SSZipArchive', '~> 2.2.3'
    spec.dependency 'FMDB', '~> 2.7'
    spec.dependency 'YYModel', '~> 1.0.4'
    spec.dependency 'SVProgressHUD', '~> 2.0'
    spec.dependency 'WCDB', '~> 1.0.7.5'
  spec.dependency 'OpenUDID', '~> 1.0.0'
end
