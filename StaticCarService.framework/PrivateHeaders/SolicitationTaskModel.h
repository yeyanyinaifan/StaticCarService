//
//  SolicitationTaskModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/15.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SolicitationTaskModel : NSObject
//"msgTask":1, //消息关联任务id或单号
//"msgType":1, //消息類型 1=推送通知，2=推送消息，3=短信，4=聊天
//"msgTitle":"xxxx", //消息標題
//"msgContent":"哈哈哈哈哈哈", //消息內容
//"reponseId":1, //返回消息id
//"requestId":21, //接收消息id
//"sendId":66, //發送人id
//"reciveId":32, //接收人
//"isRead" :1 , //是否已讀
//"msgTaskType":1 , //1招揽 2跟进
//"msgSource": 1 //消息來源 1=app 2=pad 3=web 4=其他
//"TaskType":4 //任务类型,1:新车谢礼,2:1DC,3:3DC,4:招揽5:预约跟进 6.顾客调查
@property (nonatomic, strong) NSString *msgTask;//消息关联任务id或单号
@property (nonatomic, strong) NSString *msgType;//消息類型 1=推送通知，2=推送消息，3=短信，4=聊天
@property (nonatomic, strong) NSString *msgTitle;//消息標題
@property (nonatomic, strong) NSString *msgContent;//消息內容
@property (nonatomic, strong) NSString *reponseId;//返回消息id
@property (nonatomic, strong) NSString *requestId;//接收消息id
@property (nonatomic, strong) NSString *sendId;//發送人id
@property (nonatomic, strong) NSString *reciveId;//接收人
@property (nonatomic, strong) NSString *isRead;//是否已讀
@property (nonatomic, strong) NSString *msgTaskType;//1招揽 2跟进
@property (nonatomic, strong) NSString *msgSource;//消息來源 1=app 2=pad 3=web 4=其他
@property (nonatomic, strong) NSString *taskType;//任务类型1:新车谢礼2:1DC.3:3DC.4:招揽5:预约跟进6:顾客调查
@property (nonatomic, strong) NSString *taskTime;//创建时间
@property (nonatomic, strong) NSString *isReply;//是否已填写
@property (nonatomic, strong) NSString *reviewsContent;//对经销商评价内容
@property (nonatomic, strong) NSString *comprehensiveScore;//总评分
@property (nonatomic, strong) NSString *serviceScore;//服务评分
@property (nonatomic, strong) NSString *technicalScore;//技术评分
@property (nonatomic, strong) NSString *environmentScore;//环境评分
@property (nonatomic, strong) NSString *photourl;//车辆图片

@property (nonatomic, strong) NSString *serviceName;//服务顾问姓名
@property (nonatomic, strong) NSString *serviceAdvisorId;//服务顾问ID

@end
