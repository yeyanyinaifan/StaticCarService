//
//  CarAdressVC.h
//  Geelyconsumer
//
//  Created by dong on 2017/10/27.
//  Copyright © 2017年 Rdic. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CareAddress <NSObject>

-(void)takeCarWithAdress:(NSString *)address withPrice:(NSString *)price withCoordinate:(CLLocationCoordinate2D)coordinate  withTime:(NSString *)time withKilometers:(NSString *)kilometers;

@end

@interface CarAdressVC : DTBaseViewController

@property(nonatomic,weak)id<CareAddress>delegate;

@property(nonatomic,strong)NSMutableDictionary *defaultDic;

@end
