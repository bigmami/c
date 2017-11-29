//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//using namespace std;

void ex6_4(){
	int a, i, j, k;
	printf("請輸入星星的行數\n");
	scanf("%d",&a); //輸入數值，將巢狀式迴圈顛倒即為ex4 
	for (j = 0; j <= a; j++){  //先打印null
		for (k = 0; k<j; k++){
			printf(" ");
		}
		for (i = a - j; i>0; i--){ //打印* 
			printf("*");
		}
		printf("\n"); //斷行 
	}
	//system("pause");
	//return 0;
}