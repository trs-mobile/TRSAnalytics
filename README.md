# TRSAnalytics
**TRS网脉移动统计SDK**

**集成文档: https://www.yuque.com/trs-mobile/ta_ios**

**更新日志:**

**2.0.8 2021.05.19**
1. 修复应用进入后台挂起，会导致宿主应用被系统关闭，触发冷启动；
2. SDK最低要求系统版本为9.0。

**2.0.7 2020.09.14**
1. 增加网脉SDK设备码（江苏新华日报项目需要）

**2.0.6 2020.06.18**
1. 修正离开页面调用偶尔引发的崩溃问题。

**2.0.5  2020.05.28**
1. 修复提交到后端的SDK版本号字段sv不对的Bug；
1. 更新苹果设备机型信息收集至最新；
1. 解决后台carrier数据有不少未知和境外运营商，上传除大陆已识别运营商外的境外运营商名称。

**2.0.4  2020.01.07**
1. 调整SDK最低要求系统版本为8.0。

**2.0.3  2020.01.06**
1. 修复系统获取最顶层视图ViewController类型可能为空，引起的字典构造崩溃问题。

**2.0.2  2019.06.18**
1. 修复页面统计上报数据时，在页面模型数组遍历的同时删除页面对象，导致页面模型指向指针内容被释放，内存指针内容混乱引起的崩溃。

**2.0.1  2019.04.22**
1. 增加页面稿件类型se_newsArticleType字段统计。
