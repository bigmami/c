#include <stdio.h>
#include <stdlib.h>

void test1(){
	int a = 100;
	int *p = &a;
	int **pp = &p;
	printf("a=%d,*p=%d,and **pp=%d\n", a, *p, **pp);


}