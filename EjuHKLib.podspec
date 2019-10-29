#
#  Be sure to run `pod spec lint EjuHKLib.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  spec.name         = "EjuHKLib"
  spec.version      = "0.0.1"
  spec.summary      = "EjuHKLib."
  spec.description  = <<-DESC
   generate a lib for housekeeper .
                   DESC

  spec.homepage     = "https://github.com/fanefane/testspec"
  spec.license          = { :type => 'MIT', :file => 'LICENSE' }
  spec.author             = { "Fane" => "faneyoung@126.com" }
  spec.platform     = :ios, "10.0"

  spec.source           = { :git => 'https://github.com/fanefane/testspec.git', :tag => spec.version.to_s }
  spec.vendored_frameworks = 'EjuHKLib.framework'

  
  spec.subspec 'Public' do |ss|
      ss.source_files = 'EjuHKLib.framework/Public/**/*'
  end
  
  spec.subspec 'ReportModule' do |ss|
      ss.source_files = 'EjuHKLib.framework/ReportModule/**/*'
  end



  #图片资源
  #spec.resources = '**/EJPropertyBundle.bundle'
  #其他资源
  spec.resource_bundles = {
    'EjuHKLibConfig' => ['**/EjuHKLibConfig.bundle'],
  }

  spec.requires_arc = true

  spec.dependency 'AFNetworking', '~> 3.2.1'
  spec.dependency 'SDWebImage', '~> 5.0.2'

end
