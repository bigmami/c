#include <stdio.h>
#include <stdlib.h>
int area();

void test3(){
	int total;
	total = area();
	printf("�T���έ��n�O%d\n", total);
	
	area();
}

int area(){
	int x,a,b;
	printf("�п�J����Ϊ����P�e\n");
	scanf("%d%d", &a, &b);
	x = (a + b) * 2;
	return x;
}
