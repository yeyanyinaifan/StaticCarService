//
//  SendTakeCarView.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/4/26.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SendTakeCarView : UIView

@property(nonatomic,strong) UILabel *getCar ;
@property(nonatomic,strong) UILabel *getShop ;

@property(nonatomic,strong) UILabel *takeShop ;
@property(nonatomic,strong) UILabel *takeCar ;


@property(nonatomic,assign) BOOL isClose ;
@property(nonatomic,assign) BOOL isCloseTake ;

@property(nonatomic,assign) NSInteger viewHeight ;

@property(nonatomic,strong)YSCallbackBlock openBlock;



@property(nonatomic,strong)UILabel *addressTime;

@property(nonatomic,strong)UILabel *currentAdress;
@property(nonatomic,strong)UILabel *currentTime;

@property(nonatomic,strong)NSString *appointmentAt;

-(id)initWithFinshBlock:(YSCallbackBlock )block;

@end
