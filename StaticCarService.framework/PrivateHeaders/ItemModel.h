//
//  ItemModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/17.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ItemModel : NSObject
//"serviceType": "M",
//"systemOrder": "SVCSYS20170715060524",
//"addTime": 1499825939677,
//"batch": "BAT20170713013719",
//"discount": 100, 折扣
//"isAdd": true,
//"maintainSalePrice": 100, //实际价格
//"itemId": 12504,
//"maintainItemName": "PDI", //维修项目名称
//"maintainHours": 6.4, //工时
//"realHours": 2, //实际工时
//"serviceProxyCode": "LAD20170712065525",
//"price": 100, //价格
//"addStatus": 3,
//"maintainItemCode": "RPDI" //维修项目编码
@property (nonatomic, strong) NSString *serviceType;//项目类型
@property (nonatomic, strong) NSString *appointmentType;//预约项目类型
//@property (nonatomic, strong) NSString *systemOrder;//
//@property (nonatomic, strong) NSString *addTime;//
//@property (nonatomic, strong) NSString *batch;//
@property (nonatomic, strong) NSString *discount;//折扣
//@property (nonatomic, strong) NSString *isAdd;//
@property (nonatomic, strong) NSString *maintainSalePrice;//实际价格
//@property (nonatomic, strong) NSString *itemId;//
@property (nonatomic, strong) NSString *maintainItemName;//维修项目名称
//@property (nonatomic, strong) NSString *maintainHours;//工时
//@property (nonatomic, strong) NSString *realHours;//实际工时
//@property (nonatomic, strong) NSString *serviceProxyCode;//
@property (nonatomic, strong) NSString *price;//价格
//@property (nonatomic, strong) NSString *addStatus;//
//@property (nonatomic, strong) NSString *maintainItemCode;//维修项目编码
//@property (nonatomic, strong) NSString *isDisCount;//是否有折扣

@end
