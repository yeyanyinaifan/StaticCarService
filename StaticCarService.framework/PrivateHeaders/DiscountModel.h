//
//  DiscountModel.h
//  YSgeely
//
//  Created by dong on 2017/7/3.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

//折扣信息

@interface DiscountModel : NSObject
//discount = "0.98";
//edt = "2017-07-03 09:00";
//isAppoint = 1;
//sdt = "2017-07-03 08:00";
//workFon = "09:00";
//workSon = "08:00";

@property(nonatomic,copy)NSString *discount;
@property(nonatomic,copy)NSString *workFon;
@property(nonatomic,copy)NSString *workSon;
@property(nonatomic,strong)NSNumber *isAppoint;
@property(nonatomic,copy)NSString *sdt;
@property(nonatomic,copy)NSString *edt;

@end
