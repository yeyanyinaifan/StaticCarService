//
//  PayVC.h
//  YSgeely
//
//  Created by V.Valentino on 2017/6/10.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YSBaseViewController.h"
#import "BillModel.h"

@interface PayVC : DTBaseViewController
@property (nonatomic, strong) NSDictionary *payDic;
@property (nonatomic, strong) BillModel *billModel;

@property (nonatomic, strong) NSString *totalCount;

@end
