//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//using namespace std;

void ex6_4(){
	int a, i, j, k;
	printf("�п�J�P�P�����\n");
	scanf("%d",&a); //��J�ƭȡA�N�_�����j���A�˧Y��ex4 
	for (j = 0; j <= a; j++){  //�����Lnull
		for (k = 0; k<j; k++){
			printf(" ");
		}
		for (i = a - j; i>0; i--){ //���L* 
			printf("*");
		}
		printf("\n"); //�_�� 
	}
	//system("pause");
	//return 0;
}