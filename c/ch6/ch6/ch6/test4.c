#include <stdio.h>
#include <stdlib.h>
double Abs();
void test4(){
	double a;
	a = Abs();
	printf("�Ӽƪ�����ȬO%f\n",&a);
}

double Abs()
{
	double num;
	printf("�п�J�@�Ӿ��,�N�^�Ǩ䪺�����\n");
	scanf("%lf",&num);
	
	return (num >0) ? num  :  -num;
}

