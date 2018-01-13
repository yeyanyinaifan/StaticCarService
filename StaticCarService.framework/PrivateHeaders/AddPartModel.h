//
//  AddPartModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/14.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AddPartModel : NSObject
//"serviceType": "M",
//"systemOrder": "SVCSYS20170710005455",
//"spName": "方向盘",
//"needCount": 10,
//"relateDiscountName": "套餐1",
//"discount": 85,
//"isAdd": true,
//"spCode": "8888078002",
//"maintainDiscountPrice": 85,
//"relateDiscountId": "1",
//"serviceProxyCode": "LADYJD20170415102",
//"price": 100,
//"discountType": 1,
//"id": 319,
//"useCount": 10

@property (nonatomic, strong) NSString *spName;//配件名称
@property (nonatomic, strong) NSNumber *price;//项目价格
@property (nonatomic, strong) NSNumber *maintainDiscountPrice;//折扣后价格

@end
