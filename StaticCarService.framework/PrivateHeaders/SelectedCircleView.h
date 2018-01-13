//
//  SelectedCircleView.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/5/8.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SelectedCircleView : UIView
@property (nonatomic, assign) BOOL isMultiple;//是否多选
@property(nonatomic,strong)YSCallbackBlock finishCallBlock;

-(id)initWithFrame:(CGRect)frame withArr:(NSArray *)title callBack:(YSCallbackBlock)block;

@end
