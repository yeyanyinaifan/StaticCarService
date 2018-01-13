//
//  TransactionRecordDetailVC.h
//  Geelyconsumer
//
//  Created by V.Valentino on 2017/11/27.
//  Copyright © 2017年 Rdic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ReceiptDetailModel.h"

@interface TransactionRecordDetailVC : DTBaseViewController
@property (nonatomic, strong) ReceiptDetailModel *receiptDetailModel;
@property (nonatomic, assign) BOOL isAppointmentDetails;//是预约明细
@end
