//
//  AddressView.h
//  jisushou
//
//  Created by 董仕林 on 15/5/29.
//  Copyright (c) 2015年 ttg. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PickerConfirm <NSObject>

-(void)pickerBut:(NSString *)address code:(NSString *)areaCode;
-(void)removePickV;

@end

@interface AddressView : UIView<UIPickerViewDataSource,UIPickerViewDelegate>

@property(nonatomic,assign)id<PickerConfirm>delegate;
@property(nonatomic,strong) UIButton *but;


@end
