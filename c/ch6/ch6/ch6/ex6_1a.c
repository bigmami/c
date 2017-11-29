#include <stdio.h>
#include <stdlib.h>
void output(void);
void dash();
ex6_1a(void)
{
	printf("呼叫output函數!!\n");
	dash();
	output();
	dash();
	printf("呼叫結束，over!!\n");
}

void dash()
{
	for (int i = 0; i < 50; i++)
		printf("-");
	printf("\n");
}
void output()
{
	printf("我喜歡iPhone 6s\n");
	printf("也喜歡APP WATCH\n");
}