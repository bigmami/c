//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//using namespace std;

void ex6_2(){
	int a, i, j;
	printf("�п�J�P�P�����\n");
	scanf("%d",&a);
	for (i = 1; i<a; i++){ //�j�饴�L* 
		for (j = 0; j<i; j++){
			printf("*");
		}
		printf("/n");
	}
	//system("pause");
	//return 0;
}