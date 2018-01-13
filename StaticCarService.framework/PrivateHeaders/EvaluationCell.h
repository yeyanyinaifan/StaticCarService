//
//  EvaluationCell.h
//  YSgeely
//
//  Created by V.Valentino on 2017/6/12.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EvaluateDetailedModel.h"


@interface EvaluationCell : UITableViewCell
//头像
@property (nonatomic, strong) UIImageView *headIV;
//称昵
@property (nonatomic, strong) UILabel *nameLabel;
//星级
@property (nonatomic, strong) NSMutableArray *starArray;
//时间
@property (nonatomic, strong) UILabel *timeLabel;
//内容
@property (nonatomic, strong) UILabel *contentLabel;
//灰线
@property (nonatomic, strong) UIView *grayLine;

//评分
@property (nonatomic, strong) UILabel *score;

//cell高度
 @property (nonatomic, assign) CGFloat cellHeight;

-(void)configWithMode:(EvaluateDetailedModel *)model;

+ (CGFloat)heightTableCellWithModel:(EvaluateDetailedModel *)model;

@end
