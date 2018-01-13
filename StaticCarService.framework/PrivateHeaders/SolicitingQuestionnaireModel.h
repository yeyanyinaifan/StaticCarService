//
//  solicitingQuestionnaireModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/15.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ChooseModel.h"

@interface SolicitingQuestionnaireModel : NSObject
//"subjectTitle": "您的年龄段", //题目
//"id": 91, //题目id
//"subjectType": 1, //问卷类型
//"taskId": 67, //任务id
//"paperId": 1, //问卷id
//"subjectId": 1
//"status":1 // 问卷题目类型 1 服务 2技术 3环境
@property (nonatomic, strong) NSString *subjectTitle;//题目id
@property (nonatomic, strong) NSString *questionId;//题目id
@property (nonatomic, strong) NSString *subjectType;//题目类型
@property (nonatomic, strong) NSString *taskId;//任务id
@property (nonatomic, strong) NSString *paperId;//问卷id
@property (nonatomic, strong) NSString *subjectId;//
@property (nonatomic, strong) NSString *status;//问卷题目类型 1 服务 2技术 3环境
@property (nonatomic, strong) NSArray<ChooseModel *> *choose;//选项
@property (nonatomic, strong) NSString *subjectAnswer;//问答题答案

@end
