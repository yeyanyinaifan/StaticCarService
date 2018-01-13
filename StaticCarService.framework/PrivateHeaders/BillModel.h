//
//  BillModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/18.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BillItemModel.h"
#import "BillPartModel.h"

@interface BillModel : NSObject
//"item": [ //项目
//"part": [ //备件
//"OrderType": "M", //结算单类型
//"FinishAt": 1499497200000, //维修结束时间
//"StartAt": 1499484162000, //维修开始时间
//"MaintainDealerName": "测试经销商", //经销商名称
//"Mileage": 1, //里程
//"Plate": "浙A19813", //车牌号
//"coty": 1 //车龄
//VehicleClass = CX;
//VehicleName = "\U8f66\U578b";
@property (nonatomic, strong) NSArray<BillItemModel *> *item;//项目
@property (nonatomic, strong) NSArray<BillPartModel *> *part;//备件
//@property (nonatomic, strong) NSString *orderType;//结算单类型
//@property (nonatomic, strong) NSString *finishAt;//维修结束时间
//@property (nonatomic, strong) NSString *startAt;//维修开始时间
//@property (nonatomic, strong) NSString *maintainDealerName;//经销商名称
@property (nonatomic, strong) NSString *serviceProxyCode;//委托书编号
@property (nonatomic, strong) NSString *mileage;//里程
@property (nonatomic, strong) NSString *plate;//车牌号
@property (nonatomic, strong) NSString *coty;//车龄
@property (nonatomic, strong) NSString *vehicleClass;//车系
@property (nonatomic, strong) NSString *vehicleName;//车型
@property (nonatomic, strong) NSString *allTotalCost;//总金额
@property (nonatomic, strong) NSString *itemTotalCost;//维修合计
@property (nonatomic, strong) NSString *partTotalCost;//配件合计
@property (nonatomic, strong) NSString *allWarrantyPrice;//保修总价
@property (nonatomic, strong) NSString *ownPayTotal;//自费合计
@property (nonatomic, strong) NSString *noFractionAmount;//优惠
@property (nonatomic, strong) NSString *statementNo;//结算单单号
@property (nonatomic, strong) NSString *photourl;//车辆图片
@property (nonatomic, strong) NSString *isNeedPay;//是否可支付
@property (nonatomic, strong) NSString *sequence;

@end
