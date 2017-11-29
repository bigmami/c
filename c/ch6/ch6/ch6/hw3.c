#include <stdlib.h>
#include <stdio.h>
int a, b,c;

int maimum();
int minimum();

void hw3() {
	printf("叫块俱计\n");
	scanf("%d%d%d", &a, &b, &c);
	maimum();
	minimum();
	
}

int maimum() {
	
	if (a >= b) {
		if (a >= c)
		printf("程%d\n", a);
		else
			printf("程%d\n", c);
	}
	else {
		if (b >= c)
			printf("程%d\n", b);
		else
			printf("程%d\n", a);
	}
}

int minimum(){
	if (a <= b) {
		if (a <= c)
		printf("程%d\n", a);
		else
			printf("程%d\n", c);
	}
	else {
		if (b <= c)
			printf("程%d\n", b);
		else
			printf("程%d\n", c);
	}
}
