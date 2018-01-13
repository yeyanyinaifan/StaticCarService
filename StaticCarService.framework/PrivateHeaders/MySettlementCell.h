//
//  MySettlementCell.h
//  YSgeely
//
//  Created by V.Valentino on 2017/6/9.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomerSettlementModel.h"

@interface MySettlementCell : UITableViewCell
//结算标题
@property (nonatomic, strong) UILabel *titleLabel;
//车辆图片
@property (nonatomic, strong) UIImageView *carIV;
//车型
@property (nonatomic, strong) UILabel *vihicleClass;
//车辆信息
@property (nonatomic, strong) UILabel *carNumberLabel;
//预约时间
@property (nonatomic, strong) UILabel *appointmentTimeLabel;
//预约时间
@property (nonatomic, strong) UILabel *appointmentTime;
//预约门店
@property (nonatomic, strong) UILabel *appointmentstoreLabel;
//预约门店
@property (nonatomic, strong) UILabel *appointmentstore;
//工单类型
@property (nonatomic, strong) UILabel *kindLabel;
//工单类型
@property (nonatomic, strong) UILabel *kind;

//灰线
@property (nonatomic, strong) UIView *line;

@property (nonatomic, strong) CustomerSettlementModel *customerSettlementModel;//数据

@end
