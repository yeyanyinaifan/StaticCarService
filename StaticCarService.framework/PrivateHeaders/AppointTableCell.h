//
//  AppointTableCell.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/5/10.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppointTableCell : UITableViewCell

@property(nonatomic,strong)UILabel *kindLable;
@property(nonatomic,strong)UILabel *isAppoint;
@property(nonatomic,strong)UIImageView *carImg;
@property(nonatomic,strong)UILabel *carNum;
@property(nonatomic,strong)UILabel *appointTime;
@property(nonatomic,strong)UILabel *appointAddres;
@property(nonatomic,strong)UIButton *supplementBtn; //追加项目
@property(nonatomic,strong)UIButton *lackBtn; //缺料订购
@property(nonatomic,strong)UIButton *inspectBtn; //查看详情

@end
