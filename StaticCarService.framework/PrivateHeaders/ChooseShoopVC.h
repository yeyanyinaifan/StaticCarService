//
//  ChooseShoopVC.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/4/28.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ShopListVC.h"
#import "ShopMapVC.h"
#import "YSBaseViewController.h"
#import "CarModel.h"

@interface ChooseShoopVC : DTBaseViewController

@property(nonatomic,strong)ShopListVC *listVC;
@property(nonatomic,strong)ShopMapVC *mapVC;
@property(nonatomic,strong)UIViewController *currentVC;
@property(nonatomic,strong)CarModel *carM;

@property(nonatomic,copy)YSCallbackBlock resultBlock;

@end
