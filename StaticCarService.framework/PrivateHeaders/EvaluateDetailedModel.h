//
//  EvaluateDetailedModel.h
//  YSgeely
//
//  Created by dong on 2017/7/17.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EvaluateDetailedModel : NSObject

@property(nonatomic,strong)NSNumber *score;
@property(nonatomic,strong)NSString *appraiser;
@property(nonatomic,strong)NSString *ownerId;
@property(nonatomic,strong)NSNumber *evaluateDate;
@property(nonatomic,strong)NSString *reviewsContent;//评价内容
@property(nonatomic,strong)NSString *avatarUrl;//头像

@property(nonatomic,assign)CGFloat cellHeight;//cell高度

//"score": 5, //评分
//"appraiser": 1, //评价人id
//"ownerId": 381, //服务顾问id
//"evaluateDate": 1500024840000 //评价时间

//"dealerId": "QJD001148", //经销商Code
//"customerId": "31", //评价人id
//"reviewsContent": "服务挺好的", //评价内容
//"dealerReviewsId": 1,
//"createdOn": 1500016876000, //评价时间
//"status": 1

@end
