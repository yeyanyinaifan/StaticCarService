//
//  ProcessCell.h
//  YSgeely
//
//  Created by dong on 2017/6/10.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProcessCell : UITableViewCell

@property(nonatomic,strong)UIImageView *imgView;
@property(nonatomic,strong)UILabel *serverName;
@property(nonatomic,strong)UILabel *position;
@property (nonatomic, strong) UIView *line;//线

@end
