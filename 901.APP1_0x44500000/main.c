#include "Device_Driver.h"

int Main(void)
{
	Uart_Printf(">>APP1\n");
	int cnt = 0;
	while(1)
	{
		Uart_Printf("counter move1 %d\n", cnt);
		Delay(100000000);
		cnt++;
	}

	return 0;
}
