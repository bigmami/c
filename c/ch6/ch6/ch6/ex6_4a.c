#include <stdio.h>
#include <stdlib.h>
int number;
void output2(void);
void ex6_4a(){
	printf("Please enter a number:");
	scanf("%d", &number);
	output2();
	
}

void output2(void)
{
	printf("number is %d \n", number);
}