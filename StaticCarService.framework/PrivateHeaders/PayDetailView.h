//
//  PayDetailView.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/26.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomerSettlementModel.h"

@interface PayDetailView : UIView
@property (nonatomic, strong) CustomerSettlementModel *customerSettlementModel;//数据
@property (nonatomic, strong) UILabel *paymentMethodLabel;//支付方式
@property (nonatomic, strong) UILabel *paymentMethod;
@property (nonatomic, strong) UILabel *paymentTimeLabel;//支付时间
@property (nonatomic, strong) UILabel *paymentTime;
@property (nonatomic, strong) UILabel *priceLabel;//金额
@property (nonatomic, strong) UILabel *price;
//灰线
@property (nonatomic, strong) UIView *line;

@end
