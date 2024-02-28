#include <stm32f10x.h>
auto main()->int{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    GPIO_InitTypeDef init;
    init.GPIO_Mode = GPIO_Mode_Out_PP;
    init.GPIO_Pin = GPIO_Pin_0;
    init.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &init);
    while(true)
    {

    }
    return 0;
}