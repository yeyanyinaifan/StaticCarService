//
//  StarQuestionCell.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/6.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TggStarEvaluationView.h"

@interface StarQuestionCell : UITableViewCell
@property (nonatomic, copy) void(^Block)(id object);

@property (nonatomic, strong) UIView *myBackgroundView;//背景
@property (nonatomic, strong) UILabel *sectionTitleLabel;//标题
@property (nonatomic, strong) TggStarEvaluationView *tggStarEvaView;//星级

@property (nonatomic, strong) NSString *isReply;//是否已填写
@property (nonatomic, assign) NSInteger number;//序号

@end
