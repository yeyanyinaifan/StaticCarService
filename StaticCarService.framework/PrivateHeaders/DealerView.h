//
//  DealerView.h
//  geelyconsumer
//
//  Created by dong on 2017/5/22.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DealerView : UIView

@property(nonatomic,strong)UILabel *careName;

@property(nonatomic,strong) UILabel *carDetail;

@property(nonatomic,strong) UILabel *carDetail2;

@property(nonatomic,strong) UILabel *carDetail3;

@property(nonatomic,assign) CGFloat ViewH;

@property(nonatomic,strong)YSFinishCallbackBlock finishBlock;

@end
