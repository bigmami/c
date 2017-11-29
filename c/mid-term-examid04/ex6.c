#include <stdio.h>
#include <stdlib.h>
int cub(int);
int a;
void ex6_1() {
	cub(5);
	printf("%d", a);
}

int cub(int x) {
	a = x*x*x*x*x*x;
	return a;
}