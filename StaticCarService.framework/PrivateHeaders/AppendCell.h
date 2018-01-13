//
//  AppendCell.h
//  YSgeely
//
//  Created by dong on 2017/6/8.
//  Copyright © 2017年 dong. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "UnfoldFrameModel.h"

@protocol UnfoldCellDelegate  <NSObject>

@optional

-(void)UnfoldCellDidClickUnfoldBtn:(UnfoldFrameModel *)frameModel;

@end

@interface AppendCell : UITableViewCell

@property (nonatomic,weak)id<UnfoldCellDelegate> delegate;

@property (nonatomic,strong)NSIndexPath *currentIndexPath;

@property (nonatomic,strong)UnfoldFrameModel *cellModel;

@property (nonatomic,strong) YSCallbackBlock block;

@property (nonatomic,strong) YSCallbackBlock detailBlock;

@property (nonatomic,strong) UILabel *cellTitle;



- (void)configCellWithModel:(UnfoldFrameModel *)model withAllModel:(NSArray *)modelArr;


@end
