#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *); 
void ex4() {
	printf("請輸入兩數\n");
	int a, b;
	scanf("%d%d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);
}
void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}