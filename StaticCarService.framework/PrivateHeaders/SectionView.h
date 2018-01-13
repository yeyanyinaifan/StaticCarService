//
//  SectionView.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/4/28.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DealerModel.h"

@interface SectionView : UIView

@property(nonatomic,strong)UILabel *bindLable;

@property(nonatomic,strong)UIButton *chooseBtn;

@property(nonatomic,strong)UIButton *mapBtn;
@property(nonatomic,strong)UIButton *phoneBtn;
@property(nonatomic,strong)UIButton *judgeBtn;
//经销商名字
@property(nonatomic,strong)UILabel *shopName;
//经销商地址
@property(nonatomic,strong)UILabel *shopAdress;
//距离
@property(nonatomic,strong)UILabel *kmLab;
//绑定门店
@property(nonatomic,strong)UILabel *bindShop;
//评分
@property(nonatomic,strong)UILabel *score;
//箭头
@property(nonatomic,strong)UIImageView *signImg;

-(void)configWithModel:(DealerModel *)model;

@end
