#include <stdio.h>
#include <stdlib.h>

void test2(){
	double d;
	double *p = &d;
	double **pp = &p;
	printf("�п�J�@double��:"); //%lf double
	scanf("%lf", &d);					//%f float
	printf("a=%.2f,*p=%.2f,and **p=%.2f\n", d, *p, **pp);

}