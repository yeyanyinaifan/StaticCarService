//
//  ActivityDetailsVC.h
//  YSgeely
//
//  Created by V.Valentino on 2017/6/7.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SolicitationTaskModel.h"
#import "YSBaseViewController.h"

@interface ActivityDetailsVC : DTBaseViewController
@property (nonatomic, strong) NSIndexPath *indexPath;
@property (nonatomic, strong) SolicitationTaskModel *solicitationTaskModel;//用户关怀数据

@end
