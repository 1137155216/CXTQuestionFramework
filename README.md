# CXTQuestionFramework

## 这是车学堂专用题库
### CocoaPods导入：
```
pod 'CXTQuestionFramework', '~> 1.0.7'

pod update --verbose --repo-update
```
### 初始化：
+ (void)initQuestionWithAppId:(NSString *)appId;
示例：
引入
```
#import <CXTQuestionFramework/CXTQestionSDK.h>
```
初始化
```
//初始化方法，AppId ：商家编号
[CXTQestionSDK initQuestionWithAppId:<#(nonnull NSString *)#>]
```
获取主页
+ (UIViewController *)getQuestionHomeVc;
示例：
```
//获取题库主页 vc
UIViewController * questionPage = [CXTQestionSDK getQuestionHomeVc];
```
刷新
```
/*!
 * @abstract 考试题库设置方法
 *
 * @param certificateType        证件类型;
 * @param licenceId                   课程编号;
 * @param provinceID    登录用户省的code，没有时需要传0;
 * @param cityID             登录用户城市的code，没有时需要传0;
 * @param userToken 学员课程登记接口返回参数;
 */
+ (void)resetCertificateType:(CXTQCertificateType)certificateType licenceId:(CXTQTestType)licenceId provinceID:(NSInteger)provinceID cityID:(NSInteger)cityID userToken:(NSString *)userToken;
```
示例
```
[CXTQestionSDK resetCertificateType:1 licenceId:2 provinceID:0 cityID:0 userToken:@"xxxxxxxx"];
```
其他 API
```
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
```
通知回调
```
//点击考试按钮 参数@{@"subjectId":@""};
#define CXTQNOTTESTEVENT @"CXTQNOTTESTEVENT"
//考试结果回调 模拟考试结束的通知。 返回的字典模型key：startTimestamp, endTimestamp, score, isPass（BOOL类型转的NSNumber）, kemu(对应subject_id) 数据类型都是 (NSNumber)
#define CXTQTEXTRESULTS @"CXTQTEXTRESULTS"
```
刷新方法枚举类型
```
//证件类型
typedef NS_ENUM(NSUInteger, CXTQCertificateType) {
    CXTQCertificateTypeDriverLicense            = 1,             // 初学
    CXTQCertificateTypeContinueStudy            = 6,             // 继续教育
    CXTQCertificateTypeVerifyStudy              = 12,            // 审验&满12分
    CXTQCertificateTypeCertificate              = 15,            // 资格证
    CXTQCertificateTypeSafetyEducation          = 23,            // 安全教育
};
//考试类型
typedef NS_ENUM(NSUInteger, CXTQTestType) {
    CXTQTestTypeDriverLicenseSmallCar           = 2,             // 初学小车(C1/C2/C3)
    CXTQTestTypeDriverLicenseFreight            = 3,             // 初学货车(A2/B2)
    CXTQTestTypeDriverLicensePassenger          = 4,             // 初学客车(A1/A3/B1)
    CXTQTestTypeDriverLicenseMotorcycle         = 5,             // 初学摩托车(D/E/F)
    CXTQTestTypeDriverLicenseSmallCarClassroom  = 26,            // 初学小车-课堂教学
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
    CXTQTestTypeSafetyEducationFreight          = 35,            // 资格证-道路货物运
    
};
```

## 更新记录：【倒叙】

* 2021-03-02 <br>
最新Version：【Version：1.0.7】<br>
更新内容：<br>
1.0.7、首页新增根据栈设置返回按钮，新增模块无限添加
