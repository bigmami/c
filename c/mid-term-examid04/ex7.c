#include <stdio.h>
#include <stdlib.h>
double f(double );
double a;


void ex7(){
	f(-3.2);
	f(-2.1);
	f(0);
	f(2.1);
	printf("%lf", f(-3.2));
	printf("\n");
	printf("%lf", f(-2.1));
	printf("\n");
	printf("%lf", f(0));
	printf("\n");
	printf("%lf", f(2.1));
	printf("\n");
}

double f(double x) {
	return a = 3 * x*x*x + 2 * x - 1;
}