//
//  MyAppointSectionView.h
//  YSgeely
//
//  Created by dong on 2017/6/8.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomerAppointmentListModel.h"

@interface MyAppointSectionView : UIView

@property (nonatomic, strong) UILabel *kindLable;//预约类型
@property (nonatomic, strong) UILabel *isAppoint;//预约状态
@property (nonatomic, strong) UIImageView *carImg;
@property (nonatomic, strong) UILabel *vihicleClass;//车型
@property (nonatomic, strong) UILabel *carNum;
@property (nonatomic, strong) UILabel *appointTime;
@property (nonatomic, strong) UILabel *appointAddres;
@property (nonatomic, strong) UIView *bottomLine;//底部的线

@property (nonatomic, strong) CustomerAppointmentListModel *customerAppointmentModel;//数据

@end
