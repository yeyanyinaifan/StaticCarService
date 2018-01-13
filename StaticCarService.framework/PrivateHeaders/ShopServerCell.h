//
//  ShopServerCell.h
//  geelyconsumer
//
//  Created by Bipao Hu on 2017/5/2.
//  Copyright © 2017年 Bipao Hu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UnfoldFrameModel.h"
#import "ServiceModel.h"

@protocol UnfoldCellDelegate  <NSObject>

@optional

-(void)UnfoldCellDidClickUnfoldBtn:(UnfoldFrameModel *)frameModel;

@end

@interface ShopServerCell : UITableViewCell

@property (nonatomic,weak)id<UnfoldCellDelegate> delegate;

@property (nonatomic,strong)NSIndexPath *currentIndexPath;

@property (nonatomic,strong)UnfoldFrameModel *cellModel;

@property (nonatomic,strong) YSCallbackBlock block;

@property (nonatomic,strong) YSCallbackBlock imgBlock;

@property(nonatomic,strong)  UILabel *position;

@property(nonatomic,strong)  UIButton *imgView;
@property(nonatomic,strong)  UILabel *name;//服务顾问名字UILabel *score
@property(nonatomic,strong)  UILabel *score;//评分UIImageView *person
@property(nonatomic,strong)  UIImageView *person;//服务顾问头像


- (void)configCellWithModel:(UnfoldFrameModel *)model withAllModel:(NSArray *)modelArr;

-(void)configWithServiceMode:(ServiceModel *)model;

@end
