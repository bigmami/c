#include <stdio.h>
#include <stdlib.h>
int n;
double squAdd2(double, double,double);
void printstar2();
void test5()
{
	double num1, num2, num3, sum;
	printf("此程式在計算三浮點數的立方和\n");
	printf("請輸入三個浮點數: ");
	scanf("%lf %lf%lf", &num1, &num2, &num3);
	printf("請問要輸入多少個*號\n");
	scanf("%d", &n);
	sum = squAdd2(num1, num2, num3);
	printstar2();
	printf("%f 的立方加　%f的立方加 %f的立方為%f\n", num1, num2, num3, sum); 
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