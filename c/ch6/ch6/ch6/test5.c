#include <stdio.h>
#include <stdlib.h>
int n;
double squAdd2(double, double,double);
void printstar2();
void test5()
{
	double num1, num2, num3, sum;
	printf("���{���b�p��T�B�I�ƪ��ߤ�M\n");
	printf("�п�J�T�ӯB�I��: ");
	scanf("%lf %lf%lf", &num1, &num2, &num3);
	printf("�аݭn��J�h�֭�*��\n");
	scanf("%d", &n);
	sum = squAdd2(num1, num2, num3);
	printstar2();
	printf("%f ���ߤ�[�@%f���ߤ�[ %f���ߤ謰%f\n", num1, num2, num3, sum); 
	printstar2();
	
}
double squAdd2(double a, double b, double c)
{
	double ans;
	ans = a * a*a + b * b*b + c*c*c;
	return ans;
}
void printstar2()
{
	int i;
	for (i = 1; i <= n; i++)
		printf("*");
	printf("\n");
}