//
//  ShopListVC.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/4/28.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CarModel.h"
#import "ShopMapVC.h"

@interface ShopListVC : UIViewController

@property(nonatomic,strong)NSIndexPath *selectedIndex;

@property(nonatomic,strong)YSCallbackBlock mapBlock;

@property(nonatomic,copy)YSCallbackBlock resultBlock;

@property(nonatomic,strong)NSString *VIN;
@property(nonatomic,strong)CarModel *carModel;

@property(nonatomic,strong)ShopMapVC *shopVC;

-(void)refreshThePage:(NSString *)city;

@end
