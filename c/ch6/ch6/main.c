#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex6_1a();

void main(){

	int input;
	_Bool flag = 1;

	while (flag){
		printf("-------------------------範例-------------------------\n");
		printf("1.自訂函式應用\n");
		
		printf("-------------------------作業-------------------------\n");

		printf("----------------------------------------------------\n");
		printf("請輸入要執行的範例?  1 ~6, 按'0' 則結束執行!   ?    ");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			ex6_1a();
			break;
		case 2:
			
		default:
			break;
		}

		system("pause");
		system("cls");
	}



}