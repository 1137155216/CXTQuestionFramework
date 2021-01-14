//
//  CXTQNavigationBarView.h
//  2018NewProject
//
//  Created by 丁 on 2020/2/11.
//  Copyright © 2020 retech. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXTQNavigationBarView : UIView
@property (nonatomic, strong) UIButton * backButton;
@property (nonatomic, strong) UILabel * titleLabel;
@property (strong, nonatomic) UIView * hengView;
@property (strong, nonatomic) UIImageView * bgImageView;
@end

NS_ASSUME_NONNULL_END
