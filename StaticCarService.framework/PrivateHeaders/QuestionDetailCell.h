//
//  QuestionDetailCell.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/5/8.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SolicitationTaskModel.h"

@interface QuestionDetailCell : UITableViewCell

@property (nonatomic, strong) UILabel *timeLabel;//时间
@property (nonatomic, strong) UILabel *titleLabel;//标题
@property (nonatomic, strong) UILabel *contentLabel;//内容
@property (nonatomic, strong) UILabel *EnterQuestionnaireLabel;//进入问卷
@property (nonatomic, strong) UIView *myBackgroundView;//背景

@property (nonatomic, strong) SolicitationTaskModel *solicitationTaskModel;//数据
@property (nonatomic, assign) NSInteger number;//序号

@end
