#include <stdio.h>
#include <stdlib.h>
int area();

void test3(){
	int total;
	total = area();
	printf("三角形面積是%d\n", total);
	
	area();
}

int area(){
	int x,a,b;
	printf("請輸入長方形的長與寬\n");
	scanf("%d%d", &a, &b);
	x = (a + b) * 2;
	return x;
}
