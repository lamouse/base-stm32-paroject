# 这是一个基于VScode platformio的基础stm32 基础项目

## 需要注意的问题
1. 需要删除.platformio\packages\framework-cmsis-stm32f1\Source\Templates\gcc 下除了linker文件夹下的所有项目
2. 需要删除.platformio\packages\framework-cmsis-stm32f1\Source\Templates下的.c文件
3. STM32F10x_StdPeriph_Driver 一定要放到src下面，否则会链接失败
