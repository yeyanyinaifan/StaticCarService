//
//  TakeCarAdressVC.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/5/6.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TakeCareAddress <NSObject>

-(void)takeCarWithAdress:(NSString *)address;

@end

@interface TakeCarAdressVC : YSBaseViewController

@property(nonatomic,strong)UILabel *tishi;
@property(nonatomic,assign)id<TakeCareAddress>delegate;

@end
