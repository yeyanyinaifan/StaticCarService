//
//  CheckDetailVC.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/5/11.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomerAppointmentListModel.h"
#import "YSBaseViewController.h"

@interface CheckDetailVC : DTBaseViewController
@property (nonatomic, strong) NSString *appointmentId;//预约单ID
@property (nonatomic, copy) YSCallbackBlock block;

@end
