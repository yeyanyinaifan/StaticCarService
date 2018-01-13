//
//  DestinationView.h
//  YSgeely
//
//  Created by dong on 2017/6/6.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DestinationView : UIView

@property(nonatomic,strong)UILabel *takeGetCar;

@property(nonatomic,strong)UILabel *showTime;
@property(nonatomic,strong)UILabel *address;
@property(nonatomic,strong)UILabel *title;

@property(nonatomic,strong)UILabel *showTime2;
@property(nonatomic,strong)UILabel *address2;
@property(nonatomic,strong)UILabel *title2;

@property(nonatomic,strong)UILabel *line1;
@property(nonatomic,strong)UILabel *line2;
@property(nonatomic,strong)UILabel *line3;
@property(nonatomic,strong)UILabel *line4;

@property(nonatomic,assign)CGFloat destinationH;

@property(nonatomic,assign)NSInteger type;//上门取送车类型

-(id)initWithType:(NSInteger )type;
-(void)subviewFrame;
@end
