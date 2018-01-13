//
//  PackageContentCell.h
//  YSgeely
//
//  Created by V.Valentino on 2017/6/6.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PartsListModel.h"

@interface PackageContentCell : UITableViewCell
//选择按钮
@property (nonatomic, strong) UIButton *chooseButton;
//商品图片
@property (nonatomic, strong) UIImageView *commodityIV;
//商品名
@property (nonatomic, strong) UILabel *nameLabel;
//商品原价格
@property (nonatomic, strong) UILabel *originPriceLabel;
//商品折扣价格
@property (nonatomic, strong) UILabel *discountPriceLabel;
//商品数量
@property (nonatomic, strong) UILabel *numberLabel;
//型号
@property (nonatomic, strong) UILabel *xinghao;

//cell高度
@property(nonatomic,assign) CGFloat cellH;

+(CGFloat)getCllHeight:(PartsListModel *)model;

-(void)configWithModel:(PartsListModel *)model withRow:(NSInteger)row;

@end
