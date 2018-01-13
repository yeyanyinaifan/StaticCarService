//
//  BaseViewController.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/31.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YSBaseViewController : UIViewController

/** 是否为首个视图 */
@property (nonatomic, getter=isFirstVC) BOOL firstVC;

/**
 *  导航左按钮事件（默认返回上一页）
 *
 */
- (void)navLeftPressed:(id)sender;

/**
 *  导航右按钮事件（默认无内容）
 *
 */
- (void)navRightPressed:(id)sender;

@end
