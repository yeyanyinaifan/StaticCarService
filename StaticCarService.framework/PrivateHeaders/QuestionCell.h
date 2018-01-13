//
//  QuestionCell.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/5.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MyTextField.h"

@interface QuestionCell : UITableViewCell<UITextFieldDelegate>
@property (nonatomic, copy) void(^NSIndexPathBlock)(id object);
@property (nonatomic, copy) void(^Block)(id object);

@property (nonatomic, strong) UIView *myBackgroundView;//背景
@property (nonatomic, strong) UILabel *sectionTitleLabel;//标题
@property (nonatomic, strong) MyTextField *textField;//输入框
@property (nonatomic, strong) NSIndexPath *indexPath;
@property (nonatomic, strong) NSString *isReply;//是否已填写
@property (nonatomic, assign) NSInteger MAX_STARWORDS_LENGTH;//最长文本长度
@end
