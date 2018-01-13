//
//  UIDowsnMenuButton.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/5/4.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIDowsnMenuButton : UIButton

@property(nonatomic,assign)NSInteger curIndex;

@property(nonatomic,copy) YSCallbackBlock backBlock;
@property(nonatomic,strong)UITableView *myTableView;

-(UIDowsnMenuButton *)initWithTitles:(NSArray *)titleList andDeaultIndex:(NSInteger)index andBlock:(YSCallbackBlock)block;



@end
