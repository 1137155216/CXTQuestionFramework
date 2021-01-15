# CXTQuestionFramework

## 这是车学堂专用题库
### CocoaPods导入：
```
pod 'CXTQuestionFramework', '~> 1.0.6'

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
