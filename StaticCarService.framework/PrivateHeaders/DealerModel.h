//
//  DealerModel.h
//  YSgeely
//
//  Created by dong on 2017/6/30.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DealerModel : NSObject<NSCopying>

//            "dealerId":1 //经销商id
//            "cityName": "北京市", //所在市
//            "X":null //经度
//            "Y":null //维度
//            "dealerCode": "0102101", //经销商编码
//            "dealerId": 423, //经销商id
//            "fullName": "北京中鑫之宝汽车销售服务有限公司", //经销商名称
//            "provinceName": "北京", // 所在省
//            "shortName": "北京中鑫" //简称
//address = "\n\U676d\U5dde\U6c5f\U5e72\U533a\U79cb\U6d9b\U5317\U8def226\U53f7";
//cityName = "\U676d\U5dde\U5e02";
//dealerCode = QJD001150;
//dealerId = 426;
//fullName = "\U676d\U5dde\U9f0e\U4f26\U5409\U52294S\U5e97";
//provinceName = "\U6d59\U6c5f\U7701";
//shortName = "\U676d\U5dde\U9f0e\U4f26";
//tel = "0571-81606005";
//x = "120.206339";
//y = "30.287026";
//},

@property(nonatomic,strong)NSString *dealerId;//经销商id
@property(nonatomic,strong)NSString *cityName;//所在市
@property(nonatomic,strong)NSString *x;//经度
@property(nonatomic,strong)NSString *y;//维度
@property(nonatomic,strong)NSString *dealerCode;//经销商编码

@property(nonatomic,strong)NSString *fullName; //经销商名称
@property(nonatomic,strong)NSString *shortName; //简称
@property(nonatomic,strong)NSString *tel; //电话
@property(nonatomic,strong)NSString *address; //地址
@property(nonatomic,strong)NSArray *service; //服务顾问
@property(nonatomic,strong)NSNumber *comprehensiveScore; //综合评价
//@property(nonatomic,strong)NSString *dealerAddress; //经销商地址

@property(nonatomic,strong)NSNumber *distanceDealer;//距离用于经销商列表排序适用

@property(nonatomic,strong)NSString *addressUrl;//经销商头像


@end
