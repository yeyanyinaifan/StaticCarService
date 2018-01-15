Pod::Spec.new do |spec|

spec.name                  = 'StaticCarService'

spec.version               = '1.0.1'

spec.ios.deployment_target = '8.0'

spec.license               = 'MIT'

spec.homepage              = 'https://github.com/yeyanyinaifan/StaticCarService'

spec.author                = { "yeyanyinaifan" => "854152389@qq.com" }

spec.summary               = '车维保静态库'

spec.source                = { :git => 'https://github.com/yeyanyinaifan/StaticCarService.git', :tag => spec.version }

spec.source_files          = "StaticCarService.framework/Headers/*.{h}"

spec.vendored_frameworks   = "StaticCarService.framework"

spec.public_header_files   = "StaticCarService.framework/Headers/*.h"

spec.frameworks            = 'UIKit'

spec.library               = 'z'

spec.requires_arc          = true

spec.xcconfig              = { "HEADER_SEARCH_PATHS" => "${PODS_ROOT}/StaticCarService/StaticCarService.framework" }

end

