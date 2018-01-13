//
//  MultipleChoiceQuestionCell.h
//  YSgeely
//
//  Created by V.Valentino on 2017/7/6.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MultipleChoiceQuestionCell : UITableViewCell<UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
@property (nonatomic, copy) void(^Block)(id object);

@property (nonatomic, strong) UIView *myBackgroundView;//背景
@property (nonatomic, strong) UILabel *sectionTitleLabel;//标题
@property (nonatomic, strong) UICollectionView *collectionView;//问题

@property (nonatomic, strong) NSArray *questionArray;//问题数据
@property (nonatomic, strong) NSArray *optionSizeArray;//问题宽高
@property (nonatomic, strong) NSMutableArray *selectedArray;//选择情况
@property (nonatomic, strong) NSString *isReply;//是否已填写
@property (nonatomic, assign) NSInteger number;//序号

@end
