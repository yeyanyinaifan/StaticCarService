//
//  CalendarViewController.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/5/5.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CalendarViewController : DTBaseViewController

@property(nonatomic,copy)YSCallbackBlock block;

@property(nonatomic,strong)NSMutableDictionary *consumerDic;

@end
