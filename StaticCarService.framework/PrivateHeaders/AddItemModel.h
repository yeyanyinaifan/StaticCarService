//
//  AddItemModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/14.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AddItemModel : NSObject
//"serviceType": "M",
//"maintainItemName": "拆装轮胎一个",
//"systemOrder": "SVCSYS20170710005455",
//"maintainHours": 5.4,
//"addTime": 1499740162000, 追加时间
//"serviceProxyCode": "C20170516190550",
//"price": 100,
//"maintainItemCode": "R77103",
//"discount": 100,
//"id": 872,
//"isAdd": true
@property (nonatomic, strong) NSString *maintainItemName;//项目名称
@property (nonatomic, strong) NSNumber *addTime;//追加时间
@property (nonatomic, strong) NSNumber *price;//项目价格
@property (nonatomic, strong) NSNumber *discount;//折扣

@end
