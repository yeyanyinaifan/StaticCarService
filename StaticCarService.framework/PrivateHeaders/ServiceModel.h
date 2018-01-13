//
//  ServiceModel.h
//  YSgeely
//
//  Created by dong on 2017/7/13.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ServiceModel : NSObject

//"score": 4, //评分
//"dealerCode": "QJD001148",
//"displayName": "李小璐", //服务顾问名
//"id": 366, //顾问id
//"userid": 57298

@property(nonatomic,strong)NSString *score;//评分
@property(nonatomic,strong)NSString *dealerCode;
@property(nonatomic,strong)NSString *displayName; //服务顾问名
@property(nonatomic,strong)NSString *ownerId;//顾问id
@property(nonatomic,strong)NSString *userid;
@property(nonatomic,strong)NSString *mobile;//服务顾问电话
@property(nonatomic,strong)NSString *avatarUrl;//服务顾问头像

@end
