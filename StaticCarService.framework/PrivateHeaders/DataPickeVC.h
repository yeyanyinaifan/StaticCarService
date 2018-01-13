//
//  DataPickeVC.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/5/6.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AppointTime <NSObject>

-(void)takeCarWithTime:(NSString *)time;

@end

@interface DataPickeVC : DTBaseViewController

@property(nonatomic,assign)id<AppointTime>delegate;

@property(nonatomic,strong)NSMutableDictionary *consumerDic;

@property(nonatomic,assign)int type;

@end
