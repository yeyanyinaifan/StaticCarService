//
//  ChangeCustomerView.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/5/4.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DealerModel.h"
#import "ServiceModel.h"

@interface ChangeCustomerView : UIView

@property(nonatomic,strong)DealerModel *dealerModel;
@property(nonatomic,strong)ServiceModel *serviceModel;
@property(nonatomic,strong)NSString *type;

-(id)initWithFrame:(CGRect)frame withTitle:(NSString *)titleStr  withMes:(NSString *)message withArr:(NSArray *)arr withFinishBlock:(YSFinishCallbackBlock) finishBlock;

@end
