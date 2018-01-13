//
//  ReceiptDetailModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/14.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ItemModel.h"
#import "PartModel.h"

@interface ReceiptDetailModel : NSObject
//"DealerCode": "QJD001148", //经销商编码
//"dealerName": "杭州远景店", // 经销商名称
//"doorToDoorService": 4, //送取车方式
//"plate": "浙A18830", //车牌号码
//"appointmenDescript": "12", //客户预约描述,
//"appointmentCode": "REYJD20170710005455", //预约单号
//"serviceName": "李小璐", //服务顾问姓名
//"appointmentAt": 1499630400000 // 预计进厂时间
//"X":null //精度
//"Y":null //维度
//"address":null //地址
//"tel": //经销商电话
//"getAddress": "取车地址", //取车地址
//"returnAddress": "送车地址", //送车地址
@property (nonatomic, strong) NSString *dealerCode;//经销商编码
@property (nonatomic, strong) NSString *doorToDoorService;//送取车方式
@property (nonatomic, strong) NSString *plate;//车牌号码
@property (nonatomic, strong) NSString *appointmenDescript;//客户预约描述
@property (nonatomic, strong) NSArray *image;//受损照片
@property (nonatomic, strong) NSString *appointmentCode;//预约单号
@property (nonatomic, strong) NSString *serviceName;//服务顾问姓名
@property (nonatomic, strong) NSString *servicePhone;//服务顾问电话
@property (nonatomic, strong) NSString *serviceAdvisorId;//服务顾问id
@property (nonatomic, strong) NSString *appointmentAt;// 预计进厂时间
@property (nonatomic, strong) NSString *discount;//折扣
@property (nonatomic, strong) NSString *X;//精度
@property (nonatomic, strong) NSString *Y;//维度
@property (nonatomic, strong) NSString *dealerName;// 经销商名称
@property (nonatomic, strong) NSString *dealerAddress;//地址
@property (nonatomic, strong) NSString *dealerPhone;//经销商电话
@property (nonatomic, strong) NSString *getAddress;//取车地址
@property (nonatomic, strong) NSString *getOn;//取车时间
@property (nonatomic, strong) NSString *returnAddress;//送车地址
@property (nonatomic, strong) NSString *returnOn;//送车时间
@property (nonatomic, strong) NSString *vehicleClass;//车系
@property (nonatomic, strong) NSString *vehicleName;//车型
@property (nonatomic, strong) NSString *comments;//备注
@property (nonatomic, strong) NSString *orderType;//工单类型
@property (nonatomic, strong) NSString *maintainStatus;//预约状态，1.已预约2.已取消3.维修中4.已完成
@property (nonatomic, strong) NSString *systemOrder;//系统单号

@property (nonatomic, strong) NSString *serviceProxyCode;//委托书编号
@property (nonatomic, strong) NSString *serviceMobile;//委托书服务顾问电话
@property (nonatomic, strong) NSString *serviceAdvisorName;//委托书服务顾问姓名
@property (nonatomic, strong) NSString *payableAmount;//结算金额
@property (nonatomic, strong) NSString *maintainTime;//维修时间
@property (nonatomic, strong) NSString *maintainDealerName;// 经销商名称
@property (nonatomic, strong) NSString *shopAddress;//地址
@property (nonatomic, strong) NSString *dealerServicePhone;//经销商电话

//"item":  追加项目
//"part":  追加配件
@property (nonatomic, strong) NSArray<ItemModel *> *item;//追加项目
@property (nonatomic, strong) NSArray<PartModel *> *part;//追加配件
@property (nonatomic, strong) NSString *itemTotalCost;//维修费用合计
@property (nonatomic, strong) NSString *partTotalCost;//配件合计

@end
