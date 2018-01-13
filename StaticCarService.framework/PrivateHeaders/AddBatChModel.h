//
//  AddBatChModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/17.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AddBatChModel : NSObject
//"systemOrder": "SVCSYS20170715060524", //系统单号
//"addTime": 1499825939677, //追加时间
//"addTotalPrice": 24846, //追加费用
//"batch": "BAT20170713013719", //追加批次
@property (nonatomic, strong) NSString *systemOrder;//系统单号
@property (nonatomic, strong) NSString *addTime;//追加时间
@property (nonatomic, strong) NSString *addTotalPrice;//追加费用
@property (nonatomic, strong) NSString *batch;//追加批次

@end
