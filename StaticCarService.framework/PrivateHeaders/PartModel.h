//
//  PartModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/17.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PartModel : NSObject
//"serviceType": "R",
//"systemOrder": "SVCSYS20170715060524",
//"spName": "方向盘1", //
//"partId": 316,
//"needCount": 10, //需求数
//"relateDiscountName": "套餐1",
//"batch": "bat222", //批次号
//"discount": 85, //折扣
//"isAdd": true,
//"spCode": "8888078005", //备件代码
//"maintainDiscountPrice": 85, //实际价格
//"relateDiscountId": "1",
//"serviceProxyCode": "LADYJD20170415250",
//"price": 100, //原价
//"discountType": 1,
//"useCount": 10 //使用数
@property (nonatomic, strong) NSString *serviceType;//配件类型
@property (nonatomic, strong) NSString *appointmentType;//预约配件类型
//@property (nonatomic, strong) NSString *systemOrder;//
@property (nonatomic, strong) NSString *spName;//配件名称
//@property (nonatomic, strong) NSString *partId;//
//@property (nonatomic, strong) NSString *needCount;//需求数
//@property (nonatomic, strong) NSString *relateDiscountName;//套餐名
//@property (nonatomic, strong) NSString *batch;//批次号
@property (nonatomic, strong) NSString *discount;//折扣
//@property (nonatomic, strong) NSString *isAdd;//
//@property (nonatomic, strong) NSString *spCode;//备件代码
@property (nonatomic, strong) NSString *maintainDiscountPrice;//实际价格
//@property (nonatomic, strong) NSString *relateDiscountId;//
//@property (nonatomic, strong) NSString *serviceProxyCode;//
@property (nonatomic, strong) NSString *price;//原价
//@property (nonatomic, strong) NSString *discountType;//
//@property (nonatomic, strong) NSString *useCount;//使用数
//@property (nonatomic, strong) NSString *isDisCount;//是否有折扣

@end
