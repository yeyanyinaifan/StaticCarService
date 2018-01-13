//
//  BillPartModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/18.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BillPartModel : NSObject
//"realSpNums": 1, //实际使用数量
//"serviceType": "M", //工单类型
//"statementNo": "LAD20170708194940", //结算单号
//"systemOrder": "SVCSYS20170709170737", //系统单号
//"spName": "SEMS螺栓 M6*12", //备件名称
//"statementPartId": 133, //备件id
//"price": 120,//单价
//"statementOrderId": 10497, //结算工单类型
//"spCode": "118889008914", //备件代码
//@property (nonatomic, strong) NSString *realSpNums;//实际使用数量
@property (nonatomic, strong) NSString *serviceType;//工单类型
//@property (nonatomic, strong) NSString *statementNo;//结算单号
//@property (nonatomic, strong) NSString *systemOrder;//系统单号
@property (nonatomic, strong) NSString *spName;//备件名称
//@property (nonatomic, strong) NSString *statementPartId;//备件id
@property (nonatomic, strong) NSString *price;//单价
//@property (nonatomic, strong) NSString *statementOrderId;//结算工单类型
//@property (nonatomic, strong) NSString *spCode;//备件代码
@property (nonatomic, strong) NSString *isDisCount;//是否折扣
@property (nonatomic, strong) NSString *partPrice;//实际价格

@end
