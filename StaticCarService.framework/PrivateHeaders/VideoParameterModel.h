//
//  VideoParameterModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/8/8.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VideoParameterModel : NSObject

@property (nonatomic, strong) NSString *deviceIp;//设备IP地址
@property (nonatomic, strong) NSString *devicePort;//端口
@property (nonatomic, strong) NSString *loginPwd;//登录密码
@property (nonatomic, strong) NSString *loginName;//登录用户名
@property (nonatomic, strong) NSString *devicePlatId;//监控点

@end
