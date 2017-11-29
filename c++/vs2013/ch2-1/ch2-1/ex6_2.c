//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//using namespace std;

void ex6_2(){
	int a, i, j;
	printf("請輸入星星的行數\n");
	scanf("%d",&a);
	for (i = 1; i<a; i++){ //迴圈打印* 
		for (j = 0; j<i; j++){
			printf("*");
		}
		printf("/n");
	}
	//system("pause");
	//return 0;
}