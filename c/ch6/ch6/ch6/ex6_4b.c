#include <stdlib.h>
#include <stdio.h>
void input(void);
void output3(void);
void ex6_4b(){
	printf("此程式在測試全域變數\n");
	input();
	output3();
}
int array[5];
void input(void)
{
	int index;
	for (index = 0; index < 5; index++)
	{
		printf("請輸入%d整數", index + 1);
		scanf("%d", &array[index]);

	}
}
void output3(void)
{
	int index;
	printf("\n");
	for (index = 0; index < 5; index++)
		printf("arry[%d] is %d\n", index, array[index]);
}