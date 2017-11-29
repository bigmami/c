#include <stdlib.h>
#include <stdio.h>
int input2();
void test7(){
	int data;
	data = input2();
	printf("輸入一整數");
	printf("此整數為:%d\n", data);
}

int input2(){
	int num;
	printf("輸入一整數");
	scanf("%d", &num);
	return num;
}