//
//  RepairHistoryModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/17.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RepairHistoryModel : NSObject
//"serviceProxyId": 11621, //委托书id
//"customerOrderType": 2, //预约类型 1 预约 2 非预约
//"vehicleName": "车型", //车型
//"systemOrder": "SVCSYS20170714031258", //系统单号
//"statementNo": "LAD20170714032838", //结算单号
//"dealerName": "测试经销商", //经销商名称
//"plate": "浙A18833", //车牌号
//"appointMentId": 0, //预约单id
//"serviceProxyCode": "LAD20170714031258", //委托书单号
//"statementId": 10344, //结算单id
//"vehicleClass": "车系", //车系
//"startAt": 1499973392893, //开始时间
//"finishAt": 1499974133427 //结束时间
@property (nonatomic, strong) NSString *serviceProxyId;//委托书id
@property (nonatomic, strong) NSString *customerOrderType;//预约类型  1 预约 2 非预约
@property (nonatomic, strong) NSString *vehicleName;//车型
@property (nonatomic, strong) NSString *systemOrder;//系统单号
@property (nonatomic, strong) NSString *statementNo;//结算单号
@property (nonatomic, strong) NSString *dealerName;//经销商名称
@property (nonatomic, strong) NSString *plate;//车牌号
@property (nonatomic, strong) NSString *appointMentId;//预约单id
@property (nonatomic, strong) NSString *serviceProxyCode;//委托书单号
@property (nonatomic, strong) NSString *statementId;//结算单id
@property (nonatomic, strong) NSString *vehicleClass;//车系
@property (nonatomic, strong) NSString *startAt;//开始时间
@property (nonatomic, strong) NSString *finishAt;//结束时间
@property (nonatomic, strong) NSString *orderType;//工单类型
@property (nonatomic, strong) NSString *photourl;//车辆图片

@end
