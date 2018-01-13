//
//  ShopMapVC.h
//  
//
//  Created by Bipao Hu on 2017/4/28.
//
//

#import <UIKit/UIKit.h>

@interface ShopMapVC : UIViewController

-(void)addpointAnnotation:(id)obj;
#pragma mark--给地图添加大头针
-(void)refreshAnnotation:(NSArray *)notification;

@end
