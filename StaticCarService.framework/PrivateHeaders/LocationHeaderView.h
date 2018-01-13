//
//  LocationHeaderView.h
//  YSgeely
//
//  Created by dong on 2017/7/1.
//  Copyright © 2017年 dong. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^JFCityHeaderViewBlock)(BOOL selected);
typedef void(^JFCityHeaderViewSearchBlock)();
typedef void(^JFCityHeaderViewSearchResultBlock)(NSString *result);

@interface LocationHeaderView : UIView

@property(nonatomic,strong)UILabel *address;
@property(nonatomic,strong)UILabel *location;

@property (nonatomic, copy) JFCityHeaderViewSearchBlock beginSearchBlock;

@property (nonatomic, copy) JFCityHeaderViewSearchBlock didSearchBlock;

@property (nonatomic, copy) JFCityHeaderViewSearchResultBlock searchResultBlock;

/// 取消搜索
- (void)cancelSearch;

- (void)cityNameBlock:(JFCityHeaderViewBlock)block;

/**
 点击搜索框的回调函数
 */
- (void)beginSearchBlock:(JFCityHeaderViewSearchBlock)block;

/**
 结束搜索的回调函数
 */
- (void)didSearchBlock:(JFCityHeaderViewSearchBlock)block;

/**
 搜索结果回调函数
 */
- (void)searchResultBlock:(JFCityHeaderViewSearchResultBlock)block;

/**
 定位回调城市
 */
-(void)configWithStr:(NSString *)city;

@end
