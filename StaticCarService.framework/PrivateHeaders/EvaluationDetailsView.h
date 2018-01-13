//
//  EvaluationDetailsView.h
//  YSgeely
//
//  Created by V.Valentino on 2017/6/10.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EvaluationDetailsView : UIView

@property(nonatomic,strong) UILabel *titleLabel;//经销商名字

@property(nonatomic,strong) UILabel *businessHoursLabel;//营业时间
@property(nonatomic,strong) UILabel *addressLabel;//地址
@property(nonatomic,strong) UILabel *phone;//电话

@property(nonatomic,strong)UIButton *phoneBtn;//电话

@property(nonatomic,strong)UIButton *mapBtn;//地图


@property(nonatomic,strong) UIImageView *headerIV;//经销商图像
@end
