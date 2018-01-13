//
//  OtherFunctionView.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/13.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OtherFunctionView : UIView
@property (nonatomic, strong) UIView *line;//线
@property (nonatomic, strong) UIButton *cancelAppointmentButton;//取消预约按钮
@property (nonatomic, strong) UIButton *carLocationButton;//车辆位置按钮
@property (nonatomic, strong) UIButton *navigationButton;//一键导航按钮
@property (nonatomic, strong) UIButton *appointProcessButton;//查看进度按钮
@property (nonatomic, strong) NSString *status;//预约单状态
@property (nonatomic, strong) NSString *doorToDoorService;//是否上门取车 上门服务,1上门取车2上门送车3上门取送车4否

- (void)updateUI;
@end
