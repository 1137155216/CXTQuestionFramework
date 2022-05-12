//
//  CXTQuestionSDKUI.h
//  CXTQuestionFramework
//
//  Created by 丁 on 2021/4/2.
//

/*
 提示:目前只有首页支持实时更新,其他页面 UI修改必须在进入被修改页面之前设置!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 */
/*
 提示:目前只有首页支持实时更新,其他页面 UI修改必须在进入被修改页面之前设置!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 */
/*
 提示:目前只有首页支持实时更新,其他页面 UI修改必须在进入被修改页面之前设置!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 */


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXTQuestionSDKUI : NSObject


/// 设置首页 导航标题
/// 设置自定义主标题名称,不设置默认使用CXTQTestType注释名称,暂不支持实时刷新控件
/// @param title 标题
+ (void)cxtq_setHomeNavTitle:(NSString * __nullable)title;


/// 一键设置首页考试按钮
/// @param title 标题
/// @param subtitle 副标题
/// @param bgImage 背景图片
+ (void)cxtq_setHomeTestButtonTitle:(NSString * __nullable)title subTitle:(NSString * __nullable)subtitle bgImg:(UIImage * __nullable)bgImage;

/// 设置首页考试按钮标题
/// @param title 标题
+ (void)cxtq_setHomeTestButtonTitle:(NSString * __nullable)title;
 
/// 设置首页考试按钮副标题
/// @param subtitle 副标题
+ (void)cxtq_setHomeTestButtonSubTitle:(NSString * __nullable)subtitle;

/// 设置首页考试按钮背景图片
/// @param bgImage 图片 Image
+ (void)cxtq_setHomeTestButtonBgImg:(UIImage * __nullable)bgImage;

/// 一键设置考试规则页面 UI
/// @param title 导航标题
/// @param name 学员姓名
/// @param nexTitle 下一步按钮文字
+ (void)cxtq_setTestRuleNavTitle:(NSString * __nullable)title UserName:(NSString * __nullable)name NexTitle:(NSString * __nullable)nexTitle;

/// 导航标题
/// @param title 标题内容
+ (void)cxtq_setTestRuleNavTitle:(NSString * __nullable)title;

/// 学员姓名
/// @param name 学员姓名
+ (void)cxtq_setTestRuleUserName:(NSString * __nullable)name;

/// 下一步按钮文字
/// @param nexTitle 下一步按钮文字
+ (void)cxtq_setTestRuleNexTitle:(NSString * __nullable)nexTitle;

/// 设置考试成绩错题按钮是否显示
/// @param hidden YES/NO
+ (void)cxtq_setTestScoreErrorsHidden:(BOOL)hidden;

@end

NS_ASSUME_NONNULL_END
