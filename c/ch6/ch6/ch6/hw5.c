#include <stdio.h>
#include <stdlib.h>
void counter();
void hw5()
{
	printf("呼叫函式,將會計算次數\n");
	counter();
}
void counter(void)
{
	static int c=1;
	printf("counter()已經呼叫%d次\n", c++);
	
	}

