//
//  AppointmentMesgVC.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/4/26.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DealerModel.h"//经销商model

@interface AppointmentMesgVC : DTBaseViewController

@property(nonatomic,copy)NSString *goType;

@property(nonatomic,strong)NSMutableDictionary *defaultDic;


@end
