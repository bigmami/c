
#include <stdio.h>
#include <stdlib.h>
int square();  
int ex6_2a()
{
	int ans;
	printf("�p��Y�@��ƪ�����\n\n");
	ans = square();   
	printf("��������O %d\n", ans);
}
int square()
{
	int num, total;
	printf("�п�J�@���: ");
	scanf("%d", &num);
	total = num*num;
	return  total;
}