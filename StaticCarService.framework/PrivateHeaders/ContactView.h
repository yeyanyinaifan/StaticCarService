//
//  ContactView.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/4/27.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ContactView : UIView

@property(nonatomic,strong)UITextField *nameFiled;
@property(nonatomic,strong)UITextField *phoneFiled;
@property(nonatomic,strong)NSString *sex;
@property(nonatomic,strong)UIButton *woman;
@property(nonatomic,strong)UIButton *man;


@property(nonatomic,strong)NSArray *listArr;;

-(id)initWithArr:(NSArray *)titleArr withBlock:(YSCallbackBlock )block;

@end
