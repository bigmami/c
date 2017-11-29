#include <stdlib.h>
#include <stdio.h>

int Fib1(int n){
	if (n==0 || n==1)
	return 1;
	
	
	return (Fib1(n-1)+Fib1(n-2)); //費式數列公式 遞迴版 
}

void hw4_1(){
	int input, i;

		printf("請輸入數列\n");
		scanf("%d", &input);           //偵測輸入
		printf("\n");

		if (input < 0)
			printf("輸入錯誤，請勿輸入小於零的數");

		else{
			for (i = 0; i <= input; i++)
				printf("%d  ", Fib1(i));
		}

		printf("\n\n");



	}




