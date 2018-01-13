//
//  BatchDetailModel.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/17.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ItemModel.h"
#import "PartModel.h"

@interface BatchDetailModel : NSObject
//"item":  追加项目
//"part":  追加配件
@property (nonatomic, strong) NSArray<ItemModel *> *item;//追加项目
@property (nonatomic, strong) NSArray<PartModel *> *part;//追加配件
@property (nonatomic, strong) NSString *addTotalPrice;//费用合计
@property (nonatomic, strong) NSString *itemTotalCost;//维修费用合计
@property (nonatomic, strong) NSString *partTotalCost;//配件合计
@property (nonatomic, strong) NSString *serviceProxyId;//委托书id
@property (nonatomic, strong) NSString *serviceProxyCode;//委托书id

@end
