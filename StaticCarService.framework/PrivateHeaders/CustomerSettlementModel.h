//
//  customerSettlementModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/14.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CustomerSettlementModel : NSObject
//"statementId":"10322" //结算单id
//"orderType": "M", //工单类型
//"customerOrderType": 2, //客户上门类型 1 预约 2 非预约
//"dealerName": "测试经销商", //经销商名称
//"plate": "浙A19815", //车牌号
//"isNew": 0, // 是否最新 0 不是 1是
//"startAt": 1499484162000, //服务开始时间
//"finishAt": 1499497200000, //服务结束时间
//"status": 2, //状态1未支付 2已支付
//"mileage": 1, //当前里程
//"coty": 1 //当前车龄
//"vehicleClass": "车系", //车系
//"getAddress": "取车地址", //取车地址
//"returnAddress": "送车地址", //送车地址
//"vehicleName": "车型", //车型
@property (nonatomic, strong) NSString *statementId;//结算单id
@property (nonatomic, strong) NSString *orderType;//工单类型
@property (nonatomic, strong) NSString *customerOrderType;//客户上门类型
@property (nonatomic, strong) NSString *dealerName;//经销商名称
@property (nonatomic, strong) NSString *plate;//车牌号
@property (nonatomic, strong) NSString *isNew;//是否最新
@property (nonatomic, strong) NSString *startAt;//服务开始时间
@property (nonatomic, strong) NSString *finishAt;//服务结束时间
@property (nonatomic, strong) NSString *status;//状态
//@property (nonatomic, strong) NSString *mileage;//当前里程
//@property (nonatomic, strong) NSString *coty;//当前车龄
@property (nonatomic, strong) NSString *vehicleClass;//车系
//@property (nonatomic, strong) NSString *getAddress;//取车地址
//@property (nonatomic, strong) NSString *returnAddress;//送车地址
@property (nonatomic, strong) NSString *vehicleName;//车型
//@property (nonatomic, strong) NSString *payBy;//支付方式
@property (nonatomic, strong) NSString *payByName;//支付方式姓名
@property (nonatomic, strong) NSString *receiveAt;//支付时间
@property (nonatomic, strong) NSString *payableAmount;//支付金额
@property (nonatomic, strong) NSString *photourl;//车辆图片

@end
