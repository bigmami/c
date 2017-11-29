//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//using namespace std;

void ex6_1(){
	int a, i, j, k;
	printf("請輸入星星的行數\n");
	scanf("%d",&a); //輸入數值 
	for (j = 1; j <= a; j++){
		for (i = a - j; i>0; i--){ //迴圈遞減打印null 
			printf(" ");
		}
		for (k = 0; k<j; k++){ //迴圈遞增打印*
			printf("*");
		}
		printf("\n");
	}
	//system("pause");
	//return 0;
}