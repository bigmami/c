//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//using namespace std;

void ex6_3(){
	int a, i, j, k;
	printf("請輸入星星的行數\n");
	scanf("%n",&a); //輸入數值 
	for (j = 1; j <= a; j++){   //先打印null
		for (i = a - j; i>0; i--){
			printf("*");
		}
		for (k = 0; k<j; k++){  //打印* 
			printf(" ");
		}
		printf("\n"); //斷行 
	}
	//system("pause");
	//return 0;
}