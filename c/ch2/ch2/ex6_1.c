//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//using namespace std;

void ex6_1(){
	int a, i, j, k;
	printf("�п�J�P�P�����\n");
	scanf("%d",&a); //��J�ƭ� 
	for (j = 1; j <= a; j++){
		for (i = a - j; i>0; i--){ //�j�黼��Lnull 
			printf(" ");
		}
		for (k = 0; k<j; k++){ //�j�黼�W���L*
			printf("*");
		}
		printf("\n");
	}
	//system("pause");
	//return 0;
}