//
//  AppointSucessVC.h
//  YSgeely
//
//  Created by dong on 2017/6/6.
//  Copyright © 2017年 dong. All rights reserved.
//

typedef NS_ENUM(NSUInteger, YSCarOfCareType)
{
    YSgoodRepairType = 0,
    YSsafeguardType,
    YSsprayPaintType,

};


#import <UIKit/UIKit.h>

@interface AppointSucessVC : DTBaseViewController

@property(nonatomic,assign)YSCarOfCareType  mainType;

@property(nonatomic,strong)NSMutableDictionary *restltDic;

@end
