//
//  AliImUserModel.h
//  GeelyConsumer
//
//  Created by V.Valentino on 2017/8/23.
//  Copyright © 2017年 Rdic. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AliImUserModel : NSObject
@property (nonatomic, strong) NSString *accountId;//id
@property (nonatomic, strong) NSString *accountType;//类型
@property (nonatomic, strong) NSString *IMAccountId;//阿里云旺id
@property (nonatomic, strong) NSString *password;//阿里云旺密码

@end
