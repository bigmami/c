#include <stdio.h>
#include <stdlib.h>
void output(void);
void dash();
ex6_1a(void)
{
	printf("�I�soutput���!!\n");
	dash();
	output();
	dash();
	printf("�I�s�����Aover!!\n");
}

void dash()
{
	for (int i = 0; i < 50; i++)
		printf("-");
	printf("\n");
}
void output()
{
	printf("�ڳ��wiPhone 6s\n");
	printf("�]���wAPP WATCH\n");
}