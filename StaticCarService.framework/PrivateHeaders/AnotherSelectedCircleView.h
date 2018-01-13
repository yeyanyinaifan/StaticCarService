//
//  AnotherSelectedCircleView.h
//  YSgeely
//
//  Created by V.Valentino on 2017/6/8.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AnotherSelectedCircleView : UIView
@property (nonatomic, assign) BOOL isMultiple;//是否多选
@property(nonatomic,strong)YSCallbackBlock finishCallBlock;

-(id)initWithFrame:(CGRect)frame withArr:(NSArray *)title callBack:(YSCallbackBlock)block;

@end
