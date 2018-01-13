//
//  MyMAPointAnnotation.h
//  YSgeely
//
//  Created by dong on 2017/7/19.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <MAMapKit/MAMapKit.h>
#import "DealerModel.h"

@interface MyMAPointAnnotation : MAPointAnnotation

@property(nonatomic,strong)DealerModel *model;

@end
