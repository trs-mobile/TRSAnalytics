# TRSAnalytics
TRS网脉移动统计SDK

集成文档: https://miridescen.gitbooks.io/sdk-2-0/content/

修改日志:

v2.0.2  2019.06.18
1. 修正页面统计上报数据时，在页面模型数组遍历的同时删除页面对象，导致页面模型指向指针内容被释放，内存指针内容混乱引起的崩溃。

v2.0.1  2019.04.22
1. 增加页面稿件类型se_newsArticleType字段统计。
