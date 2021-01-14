//
//  CXTQuestionHomeVc.h
//  CXTQuestionFramework_Example
//
//  Created by 丁 on 2020/6/28.
//  Copyright © 2020 1137155216. All rights reserved.
//




#import <UIKit/UIKit.h>
#import "CXTQBasisViewControllerClass.h"
//点击考试按钮 参数@{@"subjectId":@""};
#define CXTQNOTTESTEVENT @"CXTQNOTTESTEVENT"
//考试结果回调 模拟考试结束的通知。 返回的字典模型key：startTimestamp, endTimestamp, score, isPass（BOOL类型转的NSNumber）, kemu(对应subject_id) 数据类型都是 (NSNumber)
#define CXTQTEXTRESULTS @"CXTQTEXTRESULTS"
NS_ASSUME_NONNULL_BEGIN
//证件类型
typedef NS_ENUM(NSUInteger, CXTQCertificateType) {
    CXTQCertificateTypeDriverLicense = 1,  // 初学
    CXTQCertificateTypeCertificate,        // 资格证
    CXTQCertificateTypeContinueStudy,      // 继续教育
    CXTQCertificateTypeVerifyStudy         // 审验&满12分
};
//考试类型
typedef NS_ENUM(NSUInteger, CXTQTestType) {
    CXTQTestTypeDriverLicenseSmallCar = 2,          // 初学小车
    CXTQTestTypeContinueStudyPassenger = 8,          // 继续教育-客运
    CXTQTestTypeContinueStudyFreight = 9,            // 继续教育-货运
    CXTQTestTypeContinueStudyDangerousCargo = 21,     // 继续教育-危货

};

@interface CXTQuestionHomeVc : CXTQBasisViewControllerClass
@property (nonatomic, assign) BOOL testStateSubjectOne;//第一个科目是否可以考试
@property (nonatomic, assign) BOOL testStateSubjectTwo;//第一个科目是否可以考试


/*!
 * @abstract 考试题库设置方法
 *
 * @param certificateType        证件类型;
 * @param licenceId                   课程编号;
 * @param provinceID    登录用户省的code，没有时需要传0;
 * @param cityID             登录用户城市的code，没有时需要传0;
 * @param appId 商家编号;
 * @param userToken 学员课程登记接口返回参数;
 */
- (void)resetCertificateType:(CXTQCertificateType)certificateType licenceId:(CXTQTestType)licenceId provinceID:(NSInteger)provinceID cityID:(NSInteger)cityID appId:(NSString *)appId userToken:(NSString *)userToken;

//跳转考试页面,初始化以后使用,!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!严重警告!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
+ (void)pushTestVc;

// 当前设置的驾照类型科目一题目的总数（单一科目也用这个方法取就可以，比如 资格证考试）
+ (NSInteger)fetchKemu1QuestionCount;

// 当前设置的驾照类型科目一已做题目的总数（单一科目也用这个方法取就可以，比如 资格证考试）
+ (NSInteger)fetchKemu1DoneQuestionCount;

// 当前设置的驾照类型科目一考试结果分数的list
+ (NSArray <NSString *> *)fetchKemu1ExamScoreList;

// 当前设置的驾照类型科目四题目的总数
+ (NSInteger)fetchKemu4QuestionCount;

// 当前设置的驾照类型科目四已做题目的总数
+ (NSInteger)fetchKemu4DoneQuestionCount;

// 当前设置的驾照类型科目四考试结果分数的list
+ (NSArray <NSString *> *)fetchKemu4ExamScoreList;



@end


NS_ASSUME_NONNULL_END
