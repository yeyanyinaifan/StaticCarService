//
//  PartsListModel.h
//  GeelyConsumer
//
//  Created by dong on 2017/8/25.
//  Copyright © 2017年 Rdic. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PartsListModel : NSObject

//                    //"服务包零件"
//                    {
//                        "Id":"主键",
//                        "GUID":"GUID",
//                        "Name":"名称",
//                        "Count":"数量"
//                        "Description":"描述",
//                        "Detail":"详细描述",
//                        "Discount":"折扣",
//                        "FunctionDescription":"功能简洁描述",
//                        "Parts":"零件",
//                        "Price":"价格",
//                        "Required":"必选",
//                        "ServiceBigPackageprt":"服务包备件大包",
//                        "ServiceParts":"服务小包",
//                        "Status":"状态",
//                        "IsDeleted":"删除标志",
//                        "Sequence":"排序",
//                        "Commons":"备注",
//                        "CreatedBy":"创建人",
//                        "ModifiedBy":"修改人",
//                        "CreatedOn":"创建时间",
//                        "MOdifiedOn":"修改时间",
//                        "DateTimeStamp":"时间戳"
//                        "ParentId":"同级必选单选的上级id"

@property(nonatomic,strong)NSString *Name;// "Name":"名称",
@property(nonatomic,strong)NSString *Description;// "Description":"描述",
@property(nonatomic,strong)NSString *Detail;//    "Detail":"详细描述",
@property(nonatomic,strong)NSNumber *Count;// "Count":"数量"
@property(nonatomic,strong)NSNumber *Price;//"Price":"价格",
@property(nonatomic,strong)NSString *Discount;// "Discount":"折扣",

@property(nonatomic,strong)NSString *nameCn;// nameCn
@property(nonatomic,strong)NSString *spCode;// spCode

@property(nonatomic,strong)NSNumber *Required;// Required
@property(nonatomic,strong)NSArray *picUrl;// picUrl
@property(nonatomic,strong)NSString *nameEn;// nameEn
@property(nonatomic,strong)NSString *FunctionDescription;// FunctionDescription


@property(nonatomic,assign)CGFloat height;

@end
