//
//  ShopListScrollView.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/5/4.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DealerModel.h"

@interface ShopListScrollView : UIScrollView

@property(nonatomic,assign)NSInteger count;

@property(nonatomic,strong)UIImageView *imgView;

@property(nonatomic,strong)UILabel *addressLable;

@property(nonatomic,strong)NSArray *modelArr;

@property(nonatomic,strong)YSCallbackBlock callBlcok;

-(void)setSelectIndex:(NSInteger )index withModel:(DealerModel *)model;

@end
