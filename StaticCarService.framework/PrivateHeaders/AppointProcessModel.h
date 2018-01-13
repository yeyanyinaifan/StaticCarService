//
//  AppointProcessModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/27.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProgressModel.h"
#import "VideoParameterModel.h"

@interface AppointProcessModel : NSObject
@property (nonatomic, strong) NSString *finishAt;//预计结束时间
@property (nonatomic, strong) NSString *servicePhone;//服务顾问电话
@property (nonatomic, strong) NSArray<ProgressModel *> *progress;//进度
@property (nonatomic, strong) NSString *startAt;//到店时间
@property (nonatomic, strong) VideoParameterModel *videoParameter;//视频信息

@end
