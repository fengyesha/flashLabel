//
//  BBFlashCtntLabel.h
//  DebugTest
//
//  Created by iXcoder on 15/3/2.
//  Copyright (c) 2015年 iXcoder. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, BBFlashCtntSpeed) {
    BBFlashCtntSpeedSlow = -1,
    BBFlashCtntSpeedMild,
    BBFlashCtntSpeedFast
};

@interface BBFlashCtntLabel : UIView

@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) UIFont *font;         // 默认:system(15)
@property (nonatomic, strong) UIColor *textColor;

@property (nonatomic, strong) NSAttributedString *attributedText;
/**
 *  动画持续时间 当等于0的时候会根据BBFlashCtntSpeed计算动画时间
 */
@property (nonatomic, assign) CGFloat animationDuration;
/**
 *  isDiscontinuity 为YES的时候，间断性轮播，即每一次播放完会停滞几秒
 *  isDiscontinuity 为NO的时候，持续性轮播，即每一次播放完不会停滞
 */
@property (nonatomic, assign) BOOL isDiscontinuity;
/**
 *  根据每秒移动的距离，定义的播放速度
 */
@property (nonatomic, assign) BBFlashCtntSpeed speed;

// 循环滚动次数(为0时无限滚动)
@property (nonatomic, assign) NSUInteger repeatCount;
/**
 *  前后的间距
 */
@property (nonatomic, assign) CGFloat leastInnerGap;

- (void)reloadView;

@end
