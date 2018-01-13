//
//  WaitForRepairVC.h
//  YSgeely
//
//  Created by dong on 2017/6/7.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WaitForRepairVC : DTBaseViewController

@property(nonatomic,strong)YSCallbackBlock callBlock;
@property(nonatomic,strong)NSArray *tagArrWait;

@end
