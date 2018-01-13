//
//  RepairHistoryCell.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/17.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RepairHistoryModel.h"

@interface RepairHistoryCell : UITableViewCell
//车辆图片
@property (nonatomic, strong) UIImageView *carIV;
//结算标题
@property (nonatomic, strong) UILabel *titleLabel;
//车类
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
@property (nonatomic, strong) UILabel *orderTypeLabel;
//工单类型
@property (nonatomic, strong) UILabel *orderType;

//灰线
@property (nonatomic, strong) UIView *line;

@property (nonatomic, strong) RepairHistoryModel *repairHistoryModel;//数据
@end
