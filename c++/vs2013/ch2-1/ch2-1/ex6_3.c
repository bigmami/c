//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//using namespace std;

void ex6_3(){
	int a, i, j, k;
	printf("�п�J�P�P�����\n");
	scanf("%n",&a); //��J�ƭ� 
	for (j = 1; j <= a; j++){   //�����Lnull
		for (i = a - j; i>0; i--){
			printf("*");
		}
		for (k = 0; k<j; k++){  //���L* 
			printf(" ");
		}
		printf("\n"); //�_�� 
	}
	//system("pause");
	//return 0;
}