//
//  CustomAnnotationView.h
//  CustomAnnotationDemo
//
//  Created by songjian on 13-3-11.
//  Copyright (c) 2013年 songjian. All rights reserved.
//

#import <MAMapKit/MAMapKit.h>
@class CustomCalloutView;

@interface CustomAnnotationView : MAAnnotationView

@property (nonatomic, copy) NSString *name;

@property (nonatomic, strong) UIImage *portrait;

@property (nonatomic, strong) CustomCalloutView *calloutView;
@property (nonatomic,copy) NSString *time;
@property (nonatomic,copy) NSString *place;
@property (nonatomic,copy) NSString *desc;


@end
