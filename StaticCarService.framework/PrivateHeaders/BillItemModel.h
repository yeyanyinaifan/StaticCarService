//
//  BillItemModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/18.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BillItemModel : NSObject
//"serviceType": "M", //工单类型
//"statementItemId": 245, //项目id
//"maintainItemName": "PDI", //项目名称
//"statementNo": "LAD20170708194940", //结算单号
//"systemOrder": "SVCSYS20170709170737", //系统单号
//"maintainHours": 6.4, //工时
//"price": 100, //单价
//"maintainItemCode": "RPDI", //项目代码
//"discount": 100, //折扣
//"statementOrderId": 10497 //工单id
@property (nonatomic, strong) NSString *serviceType;//工单类型
//@property (nonatomic, strong) NSString *statementItemId;//项目id
@property (nonatomic, strong) NSString *maintainItemName;//项目名称
//@property (nonatomic, strong) NSString *statementNo;//结算单号
//@property (nonatomic, strong) NSString *systemOrder;//系统单号
//@property (nonatomic, strong) NSString *maintainHours;//工时
@property (nonatomic, strong) NSString *price;//单价
//@property (nonatomic, strong) NSString *maintainItemCode;//项目代码
//@property (nonatomic, strong) NSString *discount;//折扣
//@property (nonatomic, strong) NSString *statementOrderId;//工单id
@property (nonatomic, strong) NSString *isDisCount;//是否折扣
@property (nonatomic, strong) NSString *itemPrice;//实际价格

@end
