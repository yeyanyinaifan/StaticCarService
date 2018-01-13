//
//  PackageNameCell.h
//  YSgeely
//
//  Created by V.Valentino on 2017/6/6.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PartsListModel.h"

@interface PackageNameCell : UITableViewCell
//选择按钮
@property (nonatomic, strong) UIButton *chooseButton;
//套餐名
@property (nonatomic, strong) UILabel *nameLabel;
//套餐简介
@property (nonatomic, strong) UILabel *detailsLabel;
//套餐价格
@property (nonatomic, strong) UILabel *priceLabel;


@end
