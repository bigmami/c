#include <stdlib.h>
#include <stdio.h>
int input2();
void test7(){
	int data;
	data = input2();
	printf("��J�@���");
	printf("����Ƭ�:%d\n", data);
}

int input2(){
	int num;
	printf("��J�@���");
	scanf("%d", &num);
	return num;
}