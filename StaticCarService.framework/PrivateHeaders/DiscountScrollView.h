//
//  DiscountScrollView.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/5/5.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DiscountScrollView : UIScrollView

-(id)initWithFrame:(CGRect)frame withIndex:(YSCallbackBlock)block;

-(void)configWithModel:(NSArray *)modelArr;;

@end
