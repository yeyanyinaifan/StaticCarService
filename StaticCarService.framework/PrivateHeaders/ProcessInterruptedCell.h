//
//  ProcessInterruptedCell.h
//  YSgeely
//
//  Created by V.Valentino on 2017/8/9.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProcessInterruptedCell : UITableViewCell
@property(nonatomic,strong)UIImageView *imgView;
@property(nonatomic,strong)UILabel *serverName;
@property(nonatomic,strong)UILabel *position;
@property (nonatomic, strong) UILabel *reason;//中断原因
@property (nonatomic, strong) UIView *line;//线

@end
