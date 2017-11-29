#include <stdio.h>
#include <stdlib.h>
double Abs();
void test4(){
	double a;
	a = Abs();
	printf("該數的絕對值是%f\n",&a);
}

double Abs()
{
	double num;
	printf("請輸入一個整數,將回傳其的絕對值\n");
	scanf("%lf",&num);
	
	return (num >0) ? num  :  -num;
}

