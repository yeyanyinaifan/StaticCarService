//
//  ReceiptVC.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/28.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomerSettlementModel.h"
#import "YSBaseViewController.h"

@interface ReceiptVC : DTBaseViewController
@property (nonatomic, assign) int type;//类型
@property (nonatomic, strong) NSString *receiptId;//单据id

@end
