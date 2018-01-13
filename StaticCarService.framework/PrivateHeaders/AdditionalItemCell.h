//
//  AdditionalItemCell.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/12.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AddBatChModel.h"

@interface AdditionalItemCell : UITableViewCell
//序号
@property (nonatomic, strong) UILabel *numberLabel;
//时间
@property (nonatomic, strong) UILabel *timeLabel;
//价格
@property (nonatomic, strong) UILabel *priceLabel;

@property (nonatomic, strong) AddBatChModel *addBatChModel;//数据

@end
