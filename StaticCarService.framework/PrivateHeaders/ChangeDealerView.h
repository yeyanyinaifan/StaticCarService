//
//  ChangeDealerView.h
//  YSgeely
//
//  Created by dong on 2017/7/29.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "DealerModel.h"
#import "ServiceModel.h"

@interface ChangeDealerView : UIView

@property(nonatomic,strong)DealerModel *dealerModel;
@property(nonatomic,strong)ServiceModel *serviceModel;
@property(nonatomic,strong)NSString *type;
@property(nonatomic,strong)NSString *VIN;

-(id)initWithFrame:(CGRect)frame withTitle:(NSString *)titleStr  withMes:(NSString *)message withArr:(NSArray *)arr withFinishBlock:(YSFinishCallbackBlock) finishBlock;

@end
