//
//  CXTQuestionSDK.h
//  CXTQuestionFramework
//
//  Created by 丁 on 2021/1/15.
//  Version：1.0.8
/*
 2022-05-12
 最新Version：【Version：1.2.0】
 更新内容：
 1.2.0、 新增指定章节
 2021-04-28
 最新Version：【Version：1.1.4】
 更新内容：
 1.1.4、 开放错题权限
 2021-04-07
 最新Version：【Version：1.1.3】
 更新内容：
 1.1.3、 优化方法命名规范,新增部分 UI自定义
 2021-03-16
 最新Version：【Version：1.1.2】
 更新内容：
 1.1.2、 优化智能答题
 2021-03-13
 最新Version：【Version：1.1.1】
 更新内容：
 1.1.1、 屏蔽 log
 2021-03-12
 最新Version：【Version：1.1.0】
 更新内容：
 1.1.0、 新增自定义标题
 2021-03-09
 最新Version：【Version：1.0.8】
 更新内容：
 1.0.8、 考试结果返回逻辑更改,返回至首页修改为返回为指定页
 2021-03-02
 最新Version：【Version：1.0.7】
 更新内容：
 1.0.7、首页新增根据栈设置返回按钮，新增模块无限添加
 */

#import <Foundation/Foundation.h>

//点击顺序练习按钮 参数@{@"subjectId":@""};
#define CXTQNOTORDER @"CXTQNOTORDER"
//点击考试按钮 参数@{@"subjectId":@""};
#define CXTQNOTTESTEVENT @"CXTQNOTTESTEVENT"
//点击首页业务模块通知，方便于统计用户使用情况 参数@{@"itme_type":@""};
//未做习题101，题型练习102，专项练习103，知识点练习104，错题及收藏105，成绩单106，vip理论速成107、新规押题108、练习 50 题 109、智能答题110、速成500题111、答题技巧112、做题免广告113、付费页面114、付费成功115
#define CXTQHOMEITEMEVENT @"CXTQHOMEITEMEVENT"
//点击首页业务模块子模块通知，方便于统计用户使用情况 参数@{@"itme_type":@""};
#define CXTQHOMESUBITEMEVENT @"CXTQHOMESUBITEMEVENT"
//考试结果回调 模拟考试结束的通知。 返回的字典模型key：startTimestamp, endTimestamp, score, isPass（BOOL类型转的NSNumber）, kemu(对应subject_id) 数据类型都是 (NSNumber)
#define CXTQTEXTRESULTS @"CXTQTEXTRESULTS"
///做题计学时，需要扫脸验证发送通知
///通知包含字典信息：key: practiceDurationTime,数据类型是 NSNumber，单位是秒；key: practiceStatus,value是个字符串枚举，start,verify,quit;
#define CXTQRECORDHOURSVALIDATION @"CXTQRECORDHOURSVALIDATION"

#define CXTQLOGINXCT @"CXTQLOGINXCT"
NS_ASSUME_NONNULL_BEGIN
//证件类型
typedef NS_ENUM(NSUInteger, CXTQCertificateType) {
    CXTQCertificateTypeDriverLicense            = 1,             // 初学
    CXTQCertificateTypeContinueStudy            = 6,             // 继续教育
    CXTQCertificateTypeVerifyStudy              = 12,            // 审验&满12分
    CXTQCertificateTypeCertificate              = 15,            // 资格证
    CXTQCertificateTypeSafetyEducation          = 23,            // 安全教育
    CXTQCertificateTypeSecurityOperation        = 27,            // 交通安全专项行动
};
//考试类型
typedef NS_ENUM(NSUInteger, CXTQTestType) {
    CXTQTestTypeDriverLicenseSmallCar           = 2,             // 初学小车(C1/C2/C3)
    CXTQTestTypeDriverLicenseFreight            = 3,             // 初学货车(A2/B2)
    CXTQTestTypeDriverLicensePassenger          = 4,             // 初学客车(A1/A3/B1)
    CXTQTestTypeDriverLicenseMotorcycle         = 5,             // 初学摩托车(D/E/F)
    CXTQTestTypeDriverLicenseSmallCarClassroom  = 26,            // 初学小车-课堂教学
    CXTQTestTypeDriverLicenseFreightEmployed    = 127,           // 初学货运从业
    CXTQTestTypeDriverLicenseTractor            = 214,           // 初学轻型牵引挂车
    CXTQTestTypeContinueStudyCoach              = 7,             // 继续教育-教练员
    CXTQTestTypeContinueStudyPassenger          = 8,             // 继续教育-客运
    CXTQTestTypeContinueStudyFreight            = 9,             // 继续教育-货运
    CXTQTestTypeContinueStudyTransportHon       = 10,            // 继续教育-道路旅客运输安全员
    CXTQTestTypeContinueStudyTaxi               = 11,            // 继续教育-出租车
    CXTQTestTypeContinueStudyDangerousCargo     = 21,            // 继续教育-危货
    CXTQTestTypeContinueStudyOnlineCar          = 32,            // 继续教育-网约车
    CXTQTestTypeVerifyStudyTwelve               = 13,            // 满分与审验-满12分教育
    CXTQTestTypeVerifyStudyCb                   = 17,            // 满分与审验-审验教育
    CXTQTestTypeCertificateOnlineCar            = 16,            // 资格证-网约车
    CXTQTestTypeCertificatePassenger            = 18,            // 资格证-道路旅客运输
    CXTQTestTypeCertificateFreight              = 19,            // 资格证-道路货物运输
    CXTQTestTypeCertificatePassengerAndFreight  = 20,            // 资格证-道路客货运输
    CXTQTestTypeCertificateTaxi                 = 24,            // 资格证-出租车
    CXTQTestTypeCertificateDangerousCargo       = 25,            // 资格证-危险货物
    CXTQTestTypeSafetyEducationDangerousCargo   = 22,            // 安全教育-危险货物
    CXTQTestTypeSafetyEducationTaxi             = 33,            // 安全教育-出租车
    CXTQTestTypeSafetyEducationPassenger        = 34,            // 安全教育-道路客运
    CXTQTestTypeSafetyEducationDutyAndSafety    = 41,            // 安全教育-责任人及安全员
    CXTQTestTypeSafetyEducationFreight          = 35,            // 安全教育-道路货物运
    CXTQTestTypeSafetyEducationTransit          = 43,            // 安全教育-公交
    CXTQTestTypeSafetyOperationPassenger        = 28,            // 交通安全专项行动-旅客运输
    CXTQTestTypeSafetyOperationFreight          = 29,            // 交通安全专项行动-货物运输
    CXTQTestTypeSafetyOperationDangerousCargo   = 30,            // 交通安全专项行动-危险货物
    CXTQTestTypeSafetyOperationTransit          = 31,            // 交通安全专项行动-公交车
};

@interface CXTQuestionSDK : NSObject

/*!
 * @abstract 题库初始化方法
 *
 * @param appId 商家编号;
 */
+ (void)cxtq_initQuestionWithAppId:(NSString * __nullable)appId;

/*!
 * @abstract 设置按照章节，子章节，课程 id取题顺序练习和考试，没有传0
 *
 * @param chapter_id 章节 id;
 * @param sub_chapter_id 子章节 id;
 * @param course_id 课程章节 id;
 */
+ (void)cxtq_setTakeQuestionChapter_id:(NSInteger)chapter_id sub_chapter_id:(NSInteger)sub_chapter_id course_id:(NSInteger)course_id;

/*!
 * @abstract 考试题库设置方法
 *
 * @param certificateType        证件类型;
 * @param licenceId                   课程编号;
 * @param provinceID    登录用户省的code，没有时需要传0;
 * @param cityID             登录用户城市的code，没有时需要传0;
 * @param userToken 学员课程登记接口返回参数;
 */
+ (void)cxtq_resetCertificateType:(CXTQCertificateType)certificateType licenceId:(CXTQTestType)licenceId provinceID:(NSInteger)provinceID cityID:(NSInteger)cityID userToken:(NSString * __nullable)userToken;

/// 设置及格分数
/// @param passMark 及格分数 0-100
/// @param time 考试时间
/// @param radioMark 单选题得分
/// @param radioCount 单选题数量
/// @param checkboxMark 多选题得分
/// @param checkboxCount 多选题数量
/// @param judgeMark 判断题得分
/// @param judgeCount 判断题数量
+ (void)cxtq_setUserTestRulesPassMark:(NSInteger)passMark time:(NSInteger)time radioMark:(NSInteger)radioMark radioCount:(NSInteger)radioCount checkboxMark:(NSInteger)checkboxMark checkboxCount:(NSInteger)checkboxCount judgeMark:(NSInteger)judgeMark judgeCount:(NSInteger)judgeCount;
///设置 考试按照试题 id固定取题，id逗号分隔
+ (void)cxtq_setUserTestQuestionsIds:(NSString *)questionsIds;


/// 获取题库主页 vc
+ (UIViewController *)cxtq_getQuestionHomeVc;


//跳转考试页面,仅用于接受CXTQNOTTESTEVENT通知后调用,!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!严重警告!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
+ (void)cxtq_pushTestVc;

// 获取当前设置的驾照类型科目一题目的总数（单一科目也用这个方法取就可以，比如 资格证考试）
+ (NSInteger)cxtq_fetchKemu1QuestionCount;

// 获取当前设置的驾照类型科目一已做题目的总数（单一科目也用这个方法取就可以，比如 资格证考试）
+ (NSInteger)cxtq_fetchKemu1DoneQuestionCount;

// 获取当前设置的驾照类型科目一考试结果分数的list
+ (NSArray <NSString *> *)cxtq_fetchKemu1ExamScoreList;

// 获取当前设置的驾照类型科目四题目的总数
+ (NSInteger)cxtq_fetchKemu4QuestionCount;

// 获取当前设置的驾照类型科目四已做题目的总数
+ (NSInteger)cxtq_fetchKemu4DoneQuestionCount;

// 获取当前设置的驾照类型科目四考试结果分数的list
+ (NSArray <NSString *> *)cxtq_fetchKemu4ExamScoreList;
@end

NS_ASSUME_NONNULL_END
