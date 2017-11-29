
#include <stdio.h>
#include <stdlib.h>
int square();  
int ex6_2a()
{
	int ans;
	printf("計算某一整數的平方\n\n");
	ans = square();   
	printf("它的平方是 %d\n", ans);
}
int square()
{
	int num, total;
	printf("請輸入一整數: ");
	scanf("%d", &num);
	total = num*num;
	return  total;
}