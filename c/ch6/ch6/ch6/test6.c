#include <stdlib.h>
#include <stdio.h>
int num;
int cube();
void test6(){
	printf("�п�J�@���ܼ�\n");
	scanf("%d", &num);
		printf("�Ӽƪ��T����O%d\n", cube());
}

int cube(){
	int i;
	i = num*num*num;
	return i;
}