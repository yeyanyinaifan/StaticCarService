//
//  AppendDetailCell.h
//  YSgeely
//
//  Created by dong on 2017/6/8.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppendDetailCell : UITableViewCell

@property(nonatomic,strong)UILabel *leftText;
@property(nonatomic,strong)UILabel *centerText;
@property(nonatomic,strong)UILabel *rightText;

@property (nonatomic,strong) YSCallbackBlock block;

@end
