//
//  PaymentMethodCell.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/26.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PaymentMethodCell : UITableViewCell
//标题
@property (nonatomic, strong) UILabel *titleLabel;
//勾
@property (nonatomic, strong) UIImageView *downArrowIV;
//灰线
@property (nonatomic, strong) UIView *grayLine;

@end
