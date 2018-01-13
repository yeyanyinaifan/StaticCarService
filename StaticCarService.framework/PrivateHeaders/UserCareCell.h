//
//  UserCareCell.h
//  YSgeely
//
//  Created by V.Valentino on 2017/6/7.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SolicitationTaskModel.h"

@interface UserCareCell : UITableViewCell

@property (nonatomic, strong) UILabel *timeLabel;//时间
@property (nonatomic, strong) UIImageView *userCareIV;//图标
@property (nonatomic, strong) UILabel *userCareLabel;//内容
@property (nonatomic, strong) UIView *myBackgroundView;//背景
@property (nonatomic, strong) UIImageView *arrowIV;//红线箭头

@property (nonatomic, strong) NSString *userCareImageString;//图片路径
@property (nonatomic, strong) SolicitationTaskModel *solicitationTaskModel;//数据
@property (nonatomic, assign) NSInteger number;//序号

@end
