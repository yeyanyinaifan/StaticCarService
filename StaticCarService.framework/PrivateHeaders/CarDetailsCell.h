//
//  CarDetailsCell.h
//  YSgeely
//
//  Created by V.Valentino on 2017/6/9.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CarDetailsCell : UITableViewCell
//车辆图片
@property (nonatomic, strong) UIImageView *carIV;
//车型
@property (nonatomic, strong) UILabel *vihicleClass;
//车牌信息
@property (nonatomic, strong) UILabel *carNumberLabel;
//里程数
@property (nonatomic, strong) UILabel *milLabel;
//车龄
@property (nonatomic, strong) UILabel *ageLabel;
//箭头
//@property (nonatomic, strong) UIImageView *arrowIV;

@end
