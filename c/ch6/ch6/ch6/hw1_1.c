#include <stdio.h> 
#include <stdlib.h> 
int m, n;
int gcd1(int m, int n) { //gcd»¼°jª©
	if (n == 0)
		return m;
	else
		return gcd1(n, m % n);
}


void hw1_1(){

	printf("¿é¤J¨â¼Æ\n");
	printf("m=");
	scanf("%d", &m);
	printf("n=");
	scanf("%d", &n);
	printf("gcd:%d\n", gcd1(m, n));
}