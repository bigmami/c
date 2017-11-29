#include <stdio.h>
#include <stdlib.h>

void test2(){
	double d;
	double *p = &d;
	double **pp = &p;
	printf("請輸入一double數:"); //%lf double
	scanf("%lf", &d);					//%f float
	printf("a=%.2f,*p=%.2f,and **p=%.2f\n", d, *p, **pp);

}