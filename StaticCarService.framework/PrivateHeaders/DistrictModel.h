//
//  DistrictModel.h
//  XMLDemo
//
//  Created by Beyond on 15-5-28.
//  Copyright (c) 2015年 sword. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DistrictModel : NSObject

@property (nonatomic,strong)  NSString *districtName;
@property (nonatomic,strong)  NSString *districtZipcode;

- (NSString *)description;

@end
