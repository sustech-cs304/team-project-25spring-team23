# 极限竞速：南科大 Team 23 Final Report

## 1 Metrics

本项目使用Unreal Engine 5.5，基于蓝图制作

### 1.1 UI部分

- 15个蓝图类
- 平均圈复杂度：5
- 依赖：
    1. Electra Player Plugin
    2. Async Loading Screen Plugin
    3. FidelityFX$^{TM}$ Super Resolution 3 SDK

### 1.2 

## 2 Documentation

### 2.1 Doc for Users

#### 2.1.1 安装游戏

下载xxxxx.exe，选择安装路径，点击安装游戏。

#### 2.1.2 开始游戏

进入游戏开场动画后按任意键进入主菜单。

点击“Play”进入主世界，此时是开放世界探索模式。在探索中你会遇到路中间的任务标识，可以按E开启特定任务，例如进入特定关卡的人机对战模式。

#### 2.1.3 暂停游戏

在游戏中按Q键暂停游戏并呼出菜单。你可以点击“Continue”继续游戏，点击“Settings”进入设置界面，或者点击“Quit"离开游戏。

#### 2.1.4 画面设置

在设置界面点击“Graphic”可进入画面设置界面。

在这里你可以开启AMD FSR3。开启FSR3后，超分质量默认为“超级性能”档，帧生成默认开。

你还可以开启抗锯齿。抗锯齿方法默认为TAA。

#### 2.1.5 

### 2.2 Doc for Developers

该游戏使用UE5.5进行开发。

#### 2.2.1 UI控件

UI控件蓝图、主菜单关卡蓝图和UI相关图标、小地图材质等资产存储在./Content/UI/目录。

- **MainMenoMap:** 这是游戏开始菜单的关卡蓝图，和主菜单有关的UI控件在此处实现。
- **WBP_Menu:** 这是游戏开始菜单的控件蓝图，其中定义了主菜单的样式和按钮功能。
- **WBP_Pause:** 这是游戏暂停界面的控件蓝图，其中定义了暂停界面的样式和按钮功能。
- **WBP_SettingsMain:** 这是游戏设置主界面的控件蓝图，其中定义了一级设置界面的样式和按钮功能
- **WBP_GraphicSettings:** 这是游戏画面设置界面的控件蓝图，其中定义了二级设置界面的样式和按钮功能，其他二级界面同上。
- **BP_GameInstance，BP_SaveSettings和BPI_SaveSettings:** 这是游戏设置参数的实例，用于使用户的设置参数持久化。
- **WBP_MiniMap:** 这是小地图的控件蓝图，用于在HUD界面显示小地图。

#### 2.2.2 

## 3 Tests

## 4 Build

## 5 Deployment
