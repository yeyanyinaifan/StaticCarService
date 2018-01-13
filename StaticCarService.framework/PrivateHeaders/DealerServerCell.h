//
//  DealerServerCell.h
//  YSgeely
//
//  Created by dong on 2017/7/28.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ServiceModel.h"

@interface DealerServerCell : UITableViewCell


@property(nonatomic,strong)  UILabel *position;
@property(nonatomic,strong)  UIImageView *person;

@property(nonatomic,strong)  UIButton *imgView;
@property(nonatomic,strong)  UILabel *name;//服务顾问名字UILabel *score
@property(nonatomic,strong)  UILabel *score;//评分
-(void)configWithServiceMode:(ServiceModel *)model;


@end
