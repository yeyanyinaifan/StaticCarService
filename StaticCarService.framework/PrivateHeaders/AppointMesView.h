//
//  AppointMesView.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/5/11.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ReceiptDetailModel.h"

@interface AppointMesView : UIView

@property(nonatomic,strong)UILabel *oddNumber;
@property(nonatomic,strong)UILabel *carNum;
@property(nonatomic,strong)UILabel *appointTimeShow;
@property(nonatomic,strong)UILabel *takeAndsend;
@property(nonatomic,strong)UILabel *server;
@property(nonatomic,strong)UIButton *serverButton;
//@property(nonatomic,strong)UILabel *shop;
@property(nonatomic,strong)UILabel *remark;
@property(nonatomic,strong)YSFinishCallbackBlock buttonClickBlock;
@property(nonatomic,assign)CGFloat viewHeight;
@property (nonatomic, strong) ReceiptDetailModel *receiptDetailModel;//数据
@property (nonatomic, strong) UIButton *careProjectButton;//明细按钮

- (void)updateWithType:(NSDictionary *)dic;//根据字典更新详情
- (void)updateMaintenanceCommissionUIAndDate:(ReceiptDetailModel *)receiptDetailModel;//维修委托书详情UI以及数据更新
- (void)updateDate:(ReceiptDetailModel *)receiptDetailModel;//更新详情
@end
