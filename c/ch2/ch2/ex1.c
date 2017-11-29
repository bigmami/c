#include <stdio.h>
#include <stdlib.h>

void ex1(){
	int a;
	printf("請輸入一個整數\n");
	scanf("%d", &a);
	if (a % 2 == 0){
		printf("你輸入的是偶數\n");
	}
	else{
		printf("你輸入的是奇數\n");
	}
	//system("pause");
	//return 0;	
}