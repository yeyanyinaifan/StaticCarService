//
//  chooseModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/15.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ChooseModel : NSObject
//"subjectContent": "20-25", //选项值
//"subjectOrderNumer": "A", //选项
//"id": 213, //选项id
//"subjectId": 91 //题目id

@property (nonatomic, strong) NSString *subjectContent;//选项值
@property (nonatomic, strong) NSString *subjectOrderNumer;//选项
@property (nonatomic, strong) NSString *optionId;//选项id
@property (nonatomic, strong) NSString *subjectId;//题目id
@property (nonatomic, strong) NSString *isCheck;//是否选择

@end
