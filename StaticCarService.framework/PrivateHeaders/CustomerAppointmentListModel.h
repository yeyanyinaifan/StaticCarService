//
//  CustomerAppointmentListModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/14.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AddBatChModel.h"

@interface CustomerAppointmentListModel : NSObject
//"orderType": "M", //预约类型
//"systemOrder": "SVCSYS20170715060524", //系统单号
//"dealerName": "杭州远景店", //经销商名称
//"address": "江南大道", //经销商地址
//"appointmentId": 10642, //预约单id
//"vehicleClass": "CX", //车系
//"isNew": 0, //是否最新
//"isAdd": 1, //是否有追加
//"appointmentCode": "REYJD20170715060524", //预约单号
//"addBatCh": [ //追加
//"appointmentAt": 1499630400000, 预约时间
//"status": 1 预约状态
@property (nonatomic, strong) NSString *orderType;//工单类型
@property (nonatomic, strong) NSArray<AddBatChModel *> *addBatCh;//追加项目
@property (nonatomic, strong) NSString *systemOrder;//系统单号
@property (nonatomic, strong) NSString *dealerName;//经销商名称
@property (nonatomic, strong) NSString *dealerCode;//经销商代码
@property (nonatomic, strong) NSString *address;//经销商地址
@property (nonatomic, strong) NSString *appointmentId;//预约单id
@property (nonatomic, strong) NSString *vehicleClass;//车系
@property (nonatomic, strong) NSString *vehicleName;//车型
@property (nonatomic, strong) NSString *plate;//车牌
@property (nonatomic, strong) NSString *isNew;//是否最新
@property (nonatomic, strong) NSString *appointmentCode;//预约单号
@property (nonatomic, strong) NSString *isAdd;//是否追加
@property (nonatomic, strong) NSString *appointmentAt;//预约时间
@property (nonatomic, strong) NSString *status;//预约状态，1.已预约2.已取消3.维修中4.已完成
@property (nonatomic, strong) NSString *X;//经度
@property (nonatomic, strong) NSString *Y;//维度
@property (nonatomic, strong) NSString *doorToDoorService;//是否上门取车 上门服务,1上门取车2上门送车3上门取送车4否
@property (nonatomic, strong) NSString *photourl;//车辆图片

@end
