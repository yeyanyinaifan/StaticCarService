//
//  ProgressModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/27.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ProgressModel : NSObject
@property (nonatomic, strong) NSString *executorName;//姓名
@property (nonatomic, strong) NSString *isComplent;//是否完成
@property (nonatomic, strong) NSString *executorRole;//操作角色
@property (nonatomic, strong) NSString *progress;//进度 1. 派工 2.作业中 3.中断 4.质检 5.洗车 6.交车
@property (nonatomic, strong) NSString *progressName;//进度名称
@property (nonatomic, strong) NSString *proxyCodeStatus;//委托书当前状态
@property (nonatomic, strong) NSString *pauseReason;//中断原因

@end
