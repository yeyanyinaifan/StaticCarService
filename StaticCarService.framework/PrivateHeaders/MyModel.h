//
//  MyModel.h
//  YSgeely
//
//  Created by dong on 2017/6/9.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MyModel : NSObject

@property (nonatomic , copy)NSString *title;
@property (nonatomic , copy)NSString *price;
@property (nonatomic , copy)NSString *image;
@property (nonatomic , retain)NSArray *list;
@property (nonatomic , assign)BOOL isOpen;
@property (nonatomic , assign)BOOL isSelect;

@end
