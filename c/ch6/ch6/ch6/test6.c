#include <stdlib.h>
#include <stdio.h>
int num;
int cube();
void test6(){
	printf("請輸入一個變數\n");
	scanf("%d", &num);
		printf("該數的三次方是%d\n", cube());
}

int cube(){
	int i;
	i = num*num*num;
	return i;
}