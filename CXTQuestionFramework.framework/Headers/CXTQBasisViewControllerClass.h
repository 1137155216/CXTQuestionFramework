//
//  BasisViewControllerClass.h
//  2018NewProject
//
//  Created by 丁 on 2020/2/11.
//  Copyright © 2020 retech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CXTQNavigationBarView.h"
NS_ASSUME_NONNULL_BEGIN

@interface CXTQBasisViewControllerClass : UIViewController
@property (strong, nonatomic) CXTQNavigationBarView * navBarView;
@property (strong, nonatomic) NSString * titleText;
@property (nonatomic, assign) BOOL backButton_hidden;
@property (nonatomic, assign) BOOL safeAreaInsetsBottom_hidden;
- (void)goBackBtn:(UIButton *)btn;
@end

NS_ASSUME_NONNULL_END
