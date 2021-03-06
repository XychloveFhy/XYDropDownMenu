//
//  XYDropDownMenu.h
//  XYDropDownListDemo
//
//  Created by hemiying on 16/1/18.
//  Copyright © 2016年 hemiying. All rights reserved.
//

#import <UIKit/UIKit.h>
@class XYDropDownMenu;

@protocol XYDropDownMenuDelegate <NSObject>

/**
 *  选中某一行的事件响应
 *
 *  @param menu
 *  @param indexPath
 */
- (void)XYDropDownMenu:(XYDropDownMenu *)menu didSelectAtIndexPath:(NSIndexPath *)indexPath;

@end

@interface XYDropDownMenu : UIView

/**
 *  使用数剧初始化
 *
 *  @param frame      大小
 *  @param MenuTitle  菜单名称
 *  @param dataSource 菜单选项数据
 *
 *  @return self
 */
- (instancetype)initWithFrame:(CGRect)frame
                    MenuTitle:(NSString *)title
                   DataSource:(NSArray *)dataSource
         MaxDisplayMenuNumber:(NSUInteger)maxDisplayMenuNumber;

#pragma mark - Other Property
@property (nonatomic, readonly, strong) NSArray *dataSource;
@property (nonatomic, weak) id<XYDropDownMenuDelegate> delegate;

@property (nonatomic, copy) NSString *selectedString;
@property (nonatomic, strong) UIColor *sectionColor;
@property (nonatomic, strong) UIFont *font;

#pragma mark - MenuName Property
@property (nonatomic, strong) UIColor *meneNameTextColor;
@property (nonatomic, strong) UIFont *meneNameTextFont;
@property (nonatomic, strong) UIColor *menuNameBackgroundColor;
@property (nonatomic, assign) CGRect menuNameFrame;

#pragma mark - Menu Indicator icon Property
@property (nonatomic, strong) UIImage *indicatorIconImage;
@property (nonatomic, assign) CGRect indicatorIconFrame;

#pragma mark - MenuItems Property
@property (nonatomic, strong) UIColor *separationLineColor;
@property (nonatomic, assign) UIEdgeInsets separationLineInsets;

@property (nonatomic, strong) UIColor *meneItemTextColor;
@property (nonatomic, strong) UIFont *meneItemTextFont;
@property (nonatomic, strong) UIColor *menuItemBackgroundColor;
@property (nonatomic, assign) CGRect menuItemTextFrame;
@property (nonatomic, assign) CGFloat menuItemHeight;

@end
