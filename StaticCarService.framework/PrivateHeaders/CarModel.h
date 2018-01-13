//
//  CarModel.h
//  YSgeely
//
//  Created by dong on 2017/6/29.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CarModel : NSObject

//VIN = VINFMV28F04145492; *****
//address = "\U767d\U6c99\U6cc9";*****

//birthDate = 324345600000;  //客户生日
//buyDate = 1476057600000;  //购车日期

//customerCatalog = 2;   1, //客户类别 ********
//district = 3903;   //客户所在区id *******
//districtName = "\U897f\U6e56\U533a";  西湖区", //区名  ******
//fullName = "\U738b\U5bcc";   //客户姓名  ******
//customerId = 31;  //客户id *******

//dealerId = 421;  //服务经销商id ********
//dealerName = "\U676d\U5dde\U8fdc\U666f\U5e97";  //服务经销商名 ********
//dealerShortName = "\U676d\U5dde\U8fdc\U666f\U5e97";   //服务经销商名称  ******

//ownerId = 366;   //服务顾问id *******
//ownerName = "\U674e\U5c0f\U7490";  //服务顾问姓名 ******

//vehicleAttribute = 1;  //车辆属性 *****
//vehicleClass = CX;  //车系  *****
//vehicleId = 993; //车辆id  ******

//city = 588;  //所在市 ******
//cityName = "\U4e3d\U6c34\U5e02";  嘉兴市", //所在市名称********

//customerCompany = ""; //客户单位
//emailAddress = "";  //电子邮箱
//engineNumber = ENG201704993;  , //车辆发动机号
//gearNumber = FLYMBVSF8F1492;   //车辆变速箱号
//genderCode = 1;  /性别 1先生2女士
//governmentId = "";  //身份证号
//insuranceCode = tt2;   //保险公司编码
//insuranceDate = 1570694400000;   //保险到期日
//insuranceId = 1;  //保险公司id
//insuranceName = "\U592a\U5e73\U6d0b\U4fdd\U9669\U516c\U53f8";  "太平洋保险公司", //保险公司名称
//licenseNo = "\U6d59A19820";   //车牌号
//mobilePhone = 13898701003;   //手机号
//nickName = "";  //客户编号

//province = 231;  //所在省
//provinceName = "\U6d59\U6c5f\U7701";  //省名称
//telephone = "0571-88394503"; //客户电话

//warrantyDate = 1570665600000;  //保险到期日
//zipCode = 310011;  //客户邮编

//我要保养界面需要的参数
@property(nonatomic,strong)NSString *licenseNo;////车牌号
@property(nonatomic,strong)NSString *vehicleTypeName;//车系

@property(nonatomic,strong)NSString *VIN;//VIN
@property(nonatomic,strong)NSString *address;//地址
@property(nonatomic,strong)NSString *dealerName;//服务经销商名
@property(nonatomic,strong)NSString *dealerId;//服务经销商id ********
@property(nonatomic,strong)NSString *dealerCode;//服务经销商code ********

@property(nonatomic,strong)NSString *dealerShortName;//服务经销商名称  ******
@property(nonatomic,strong)NSString *ownerName;//服务顾问姓名
@property(nonatomic,strong)NSString *ownerId;//服务顾问ID
@property(nonatomic,strong)NSString *serviceAvatarUrl;//服务顾问头像



@property(nonatomic,strong)NSString *vehicleId;//车辆id

//服务顾问参数
@property(nonatomic,strong)NSString *score;//评分
@property(nonatomic,strong)NSString *ownerMobilePhone; //服务顾问手机

//是否默认车辆
@property(nonatomic,strong)NSNumber *isDefault; //默认车辆

@property(nonatomic,strong)NSNumber *driveNum; // 行驶里程
@property(nonatomic,strong)NSNumber *carAgeNum; // 车龄
@property(nonatomic,strong)NSNumber *lastCareNum;  // 上次保养里程
@property(nonatomic,strong)NSNumber *lastTimeNum;  // 距离上次保养时间

//车辆图片
@property(nonatomic,strong)NSString *photourl; //车辆图片

@property(nonatomic,strong)NSString *pno18; //pno18

@end
