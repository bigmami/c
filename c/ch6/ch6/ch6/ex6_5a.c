
#include <stdio.h>  
#include <stdlib.h>
int factorial(int);
void ex6_5a()
{
	int num;
	printf("Please input a number: ");
	scanf("%d", &num);
	printf("Factorial(%d)=%d\n", num, factorial(num));
}
int factorial(int n)
{
	if (n >1)
		return (n * factorial(n - 1));
	else
		return 1;
}
