# AERO-SWIFT 秋季实战任务

## 任务须知

- 1、秋季实战时间为9.23~11.9，为期七周。前三周为基础考核任务，后四周为项目考核任务。请合理安排时间，认真对待考核。我们会根据大家考核期间的综合表现于11月中旬公布考核结果。
- 2、考核标准将采用积分制，基础考核评分将划定标准线，项目考核评分将分为基础部分和发挥部分，我们将给每个人打分以保证公平性。
- 3、基础好的队员可以快速完成已经掌握的部分，而着重完成后期的项目考核，对于基础薄弱的队员，请认真学习打好扎实的基础。整个考核都需要有C++编程基础，如果对编程技能还不熟练请尽快学习。整个考核会比较有难度，希望你坚持下来，必将有所收获。
- 4、基础考核有选修内容，选修内容不是必须的，但我们建议你掌握尽可能多的技能，这将会帮助你提高效率。项目考核要求你选择一个项目进行完成。
- 5、请大家在每周的截止日期前按时完成规定任务。**由于考虑到参与考核的人数较多，我们规定，基础考核的提交时间为【每周六8:00-23:00】，项目考核的提交时间为【第五至七周】，请在时间段内按时上传。** 你可以根据自己的时间安排提前完成或先做后面的内容（但不要提前上传），这并不影响考核结果。如果有极其特殊原因需要推迟完成请在考核群内提前说明。
- 6、请你们**独立认真完成**，不要抄袭代码，我们将会仔细审阅每一份工程的代码。
- 7、你们若有问题可以通过issue的方式来提问，如果有推荐的学习资料可以merge request来补充。
- 8、请更多地通过issue的方式来发起正式的讨论，可以但尽量减少使用Q群发问，多尝试通过google获得解答。

## 积分制详细说明

我们会严格按照积分制进行评分。评分的具体标准如下。  

| 评分项            | 积分值                |  
| ---------------- | -------------------- |  
| 面试             | 50分                 |  
| 基础考核         | 450分                |  
| 项目考核         | 500分                |  

相关事项：  
- git可以多次提交, 我们以**截止时间前的最后一次提交**的结果作为标准。  
- 我们鼓励大一学生积极参与，对于**大一**学生，所有部分的积分值会有乘以**1.2**倍的加成。 
- 一些评分项有划定范围（如5~10分），完成评分项要求即可拿到范围内最低分，是否能拿更高分将以你的评分项完成情况评定。
- 积分值（包括细项）只精确到小数点后一位。 
- 请在截止时间前及时提交你的代码，如果超过截止时间未提交，我们会视情况相应扣分。  
- 如果最终版本里出现了错误文件，我们会视情况相应扣分。  
- 考核相关负责人：曾祥伟、张昊、刘寅一、李沐晗。
- 本评分标准最终解释权由中大空中机器人队所有。  

## 任务成果提交方式

每周任务请提交自己的代码到github你自己的分支上，任务完成的质量将作为我们考核的参考标准之一。
你们在github的sysu-aero-swift团队中的权限为developer，即可以修改子分支，但不可以创建子分支，也不能修改主分支master。

具体方式：
```
git clone https://github.com/SYSU-AERO-SWIFT/tutorial_2018.git
cd tutorial_2018
git branch -r #查看远程所有分支
git checkout -b 本地分支名 origin/远程分支名-你的分支名
mv task_submit/example_your_name task_submit/your_name #改成你自己的名字(命名格式：英文+中文，如 shallwe曾祥伟)
```


## 基础考核 - 第一周（9.23-9.29）

必学内容：

- 1、安装Linux操作系统。
    - 由于参加考核的同学水平参差不齐，我们建议不熟悉Linux系统的同学在虚拟机装系统，而不用双系统，避免损坏你的硬盘。如果对计算机体系和操作系统较熟悉，可以安装双系统。
    - 对于未接触过或未安装Linux系统的同学，推荐安装**Ubuntu 16.04/18.04**版本操作系统。不建议第一次就安装Arch Linux系统，这个系统并非新手向。
    - 对于已经能熟练使用Linux系统的同学，建议安装**Debian**或**Arch Linux**。Debian较为稳定，而且比较自由。Arch Linux是队伍在任务七时无人机所使用的系统，这个系统轻量简洁，官方文档齐全，比Ubuntu更加稳定。
- 2、熟悉Linux命令行，掌握Linux的基础命令。
- 3、学习git，熟悉github的使用。
- 4、学习g++的使用。[git参考教程](https://git-scm.com/book/zh/v2)
- 5、学习使用Vim或Emacs。Vim 是一款强大的文本编辑器，我们强烈建议你熟练地掌握Vim（或Emacs），这将有助于你提升编程的效率。

选修内容：

- 1、理解Linux中的man或help命令。尽管google也是一种方法，但man或help命令往往最全面，最易获取也是最详细的命令说明。
- 2、科学上网。你可以使用免费的Hosts，Lantern等（在github上都可以找到），也可以选择付费的翻墙软件。

本周任务：

- 1、在命令行使用g++编译一个C++程序, 输出Hello World。请不要使用任何类型的IDE。
- 2、使用git把上述整个工程提交到Github上。**在此工程中，请勿提交不重要的中间文件。**（如.o文件和编译的可执行文件。提示：使用.gitignore）
- 3、简单描述git的工作流程，配上合适的图来描述，解释git的分支的原理，以及如何恰当地合并git分支。（写在Word文档中即可，300字以内）
- 4、简单写一写你学习到的Vim/Emacs的常用操作或命令（写在Word文档中即可，100字以内），一并上传到Github上。
- 5、完成[程序设计能力练习](https://github.com/SYSU-AERO-SWIFT/tutorial_2018/blob/master/docs/exercises/programming_exercise.md)第一周题目Palindromes，同样使用g++编译。  
- 6、预先安装OpenCV，参考资料可见入门教程。

评分标准：  

| 评分项               | 积分值                      |  
| ----------------    | -------------------------- |  
| 成功上传Hello World工程      | 27~30分              |  
| 阐述清晰git的原理和分支        | 10~20分             |  
| 阐述常用Vim/Emacs操作或命令  | 5~10分              |  
| 完成程序设计题（Palindromes）| 4~5分              | 


## 基础考核 - 第二周（9.30-10.6）

必学内容：

- 1、入门OpenCV。
- 2、使用makefile。
- 3、掌握基本的markdown语法。
- 4、了解多线程编程。
- 5、使用shell脚本。

选修内容：

- 1、多旋翼无人机飞行操控。（队伍会提供玩具无人机，如果你在学校有空余时间，可以来实验室拿飞行器去训练。训练飞行器操控技巧的一个重要目的在于：避免损失贵重的无人机。无人机在调试或实际飞行时可能遇到意外情况或者失控，如果没有良好的飞行器操控技巧我们不会冒险让你使用无人机。）
- 2、习惯阅读英文文档以及官方Document。

本周任务：

- 1、编写一个**多文件**的C++程序，阅读[《中大空中机器人团队代码规范》](https://github.com/SYSU-AERO-SWIFT/tutorial_2018/blob/master/docs/team_code_style.md) ，用OpenCV写一个多线程的简易计时工具Timer。在计时的同时处理用户输入（开始，暂停，继续，停止，退出）。请查看[具体任务说明](https://github.com/SYSU-AERO-SWIFT/tutorial_2018/blob/master/docs/exercises/timer_exercise.md)。所有代码的命名以及架构必须按照《团队代码规范》来进行。
- 2、为上述工程写一个makefile文件并编译运行通过。
- 3、用git上传到Github上，并使用markdown按照《团队代码规范》写一份说明文档`README.md`。
- 4、完成[程序设计能力练习](https://github.com/SYSU-AERO-SWIFT/tutorial_2018/blob/master/docs/exercises/programming_exercise.md)第二周题目IP Networks，使用g++编译。  
- 5、完成[Shell练习题](https://github.com/SYSU-AERO-SWIFT/tutorial_2018/blob/master/docs/exercises/shell_exercise.md)。教程可参考[菜鸟教程](http://www.runoob.com/linux/linux-shell.html)，掌握基础命令即可。


评分标准：  

| 评分项               | 积分值                      |
| ----------------    | -------------------------- |
| 编写简易计时工具，实现 start, stop, quit  | 50~60分        |
| 实现 pause, resume                      | 25~30分        |
| 使用 makefile 成功编译运行       | 10分              |
| 编写`README.md`       | 12~15分              |
| 完成程序设计题（IP networks）| 4~5分              | 
| Shell 练习题       | 15分              |


## 基础考核 - 第三周（10.7-10.13）

必学内容：

- 1、认真研读任务8的相关规则。（[官方文档V1.2](http://www.aerialroboticscompetition.org/assets/downloads/mission8rules_1.2.pdf)）  
- 2、了解基本OpenCV，包括core, highgui, imgproc三个部分，掌握重要数据类型和函数的使用。  
- 3、学会使用cmake。  

选修内容：

- 1、熟练运用STL标准库（包括vector, map, list, thread, mutex, atomic, auto_ptr等）。
- 2、了解线程的同步和互斥机制，了解读者与写者问题。

本周任务：

- 1、编写一个**多文件**的C++程序，使用OpenCV写一个能对含有四位数码管图片进行图像处理和数字识别的程序。请查看[具体任务说明](https://github.com/SYSU-AERO-SWIFT/tutorial_2018/blob/master/docs/exercises/digit_exercise.md)。所有代码的命名以及架构必须按照《团队代码规范》来进行。我们会提供测试样本，请你验证测试样本，将工程文件和识别结果截图一并上传作为评分标准。

- 2、使用cmake编译上述工程并运行通过。
- 3、用git上传到Github上，并使用markdown按照《团队代码规范》为上述工程写一份`README.md`。


评分标准：  

| 评分项               | 积分值                      |
| ----------------    | -------------------------- |
| 使用cmake编译工程并运行通过     | 15分        |
| 工程质量及完整性             | 10~20分       |
| 图片处理出各自连贯的数字       | 30分        |
| 定位四个数字，分割数字 （5~20组Samples）       | 5~20分        |
| 级别一测试样本识别率 = 60% ~ 100%                 | 10~50分    |
| 级别二测试样本识别率 = 50% ~ 95% （>=95%算满分）   | 5~50分     |
| 级别三测试样本识别率 = 40% ~ 90% （>=90%算满分）   | 0~50分     |
| 编写`README.md`       | 8~10分              |
| 测试过程结果完整清晰     | 3~5分        |


## 项目考核 - 第四至七周（10.14-11.9）

[[ 项目考核题目 ](https://github.com/SYSU-AERO-SWIFT/tutorial_2018/blob/master/docs/exercises/projects.md)]  
你有多个可选方向进行，每个方向的要求请参考具体的文件。  
你可以选择：编程技术方向、图像处理方向、性能优化方向、嵌入式与控制方向、导航与编队方向。  
你只能选择一个方向进行专攻，每个方向都是没有上限的。有发挥部分可供选做，甚至可以自己再发挥。  
如果你能做出**超出考核范围的东西**，那真是太棒了！  
我们会根据你的努力情况酌情给分。  
具体考核内容请查看项目考核题目。  
加油！ ヽ(ﾟ∀ﾟ*)ﾉ━━━ｩ♪  


