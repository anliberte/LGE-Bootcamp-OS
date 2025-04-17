#include "device_driver.h"

void CPU1_Main(void)
{
    // CPU1 초기화
    CoInitMmuAndL1L2Cache();
    Uart_Init(115200);
    
    // GIC 초기화
    GIC_CPU_Interface_Enable(1,1);
    GIC_Set_Priority_Mask(1,0xFF);
    
    // APP2 실행
    Run_App2();
    
    for(;;)
    {
        // 무한 루프
    }
} 