//
//  MapPathButton.h
//  Geelyconsumer
//
//  Created by dong on 2017/10/30.
//  Copyright © 2017年 Rdic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AMapSearchKit/AMapSearchKit.h>
#import <MAMapKit/MAMapKit.h>

@interface MapPathButton : UIButton

-(id)initWithFrame:(CGRect)frame withPath:(AMapPath *)path wihtTotal:(NSInteger)total;

@end
