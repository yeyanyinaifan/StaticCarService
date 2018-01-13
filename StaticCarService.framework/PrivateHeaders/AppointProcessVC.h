//
//  AppointProcessVC.h
//  YSgeely
//
//  Created by dong on 2017/6/9.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ReceiptDetailModel.h"
#import "YSBaseViewController.h"

@interface AppointProcessVC : DTBaseViewController
@property (nonatomic, strong) NSString *systemOrder;//系统单号
@property (nonatomic, strong) NSString *orderType;//工单类型

@end
