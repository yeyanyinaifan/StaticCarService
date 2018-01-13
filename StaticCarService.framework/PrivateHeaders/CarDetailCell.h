//
//  CarDetailCell.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/5/8.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CarModel.h"
#import "ShopButton.h"

@interface CarDetailCell : UITableViewCell

@property(nonatomic,strong) ShopButton *setUp;
@property(nonatomic,strong) UIButton *dealer;

@property(nonatomic,strong) UILabel *name;
@property(nonatomic,strong) UILabel *carLicence;
@property(nonatomic,strong) UILabel *currentKM;//当前行驶里程UILabel *carAgeNum
@property(nonatomic,strong) UILabel *carAgeNum;//车龄:UILabel *lastKM
@property(nonatomic,strong) UILabel *lastKM;//上次进厂里程_lastTimeNum
@property(nonatomic,strong) UILabel *lastTimeNum;//距离上次保养时间
@property(nonatomic,strong) UIImageView *imgView;

-(void)configCellWithModel:(CarModel *)carModel;

@end
