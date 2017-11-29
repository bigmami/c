#include <stdio.h>
#include <stdlib.h>
#include "c.h"
void ex7_1();
void ex7_2();
void ex7_3();
void ex7_4();
void ex7_5();
void ex7_6();
void ex7_7();
void ex7_8();
void ex7_9();
void ex7_10();
void main(){

	int input;
	_Bool flag = 1;

	while (flag){
		printf("-------------------------範例-------------------------\n");
		printf("1.ex7_1\n");
		printf("2.ex7_2\n");
		printf("3.ex7_3\n");
		printf("4.ex7_4\n");
		printf("5.ex7_5\n");
		printf("6.ex7_6\n");
		printf("7.ex7_7\n");
		printf("8.ex7_8\n");
		printf("9.ex7_9\n");
		printf("10.ex7_10\n");
		printf("-------------------------作業-------------------------\n");
		printf("----------------------------------------------------\n");
		printf("請輸入要執行的範例?  1 ~6, 按'0' 則結束執行!   ?    ");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			ex7_1();
			break;
		case 2:
			ex7_2();
			break;
		case 3:
			ex7_3();
			break;
		case 4:
			ex7_4();
			break;
		
		case 5:
			ex7_5();
			break;
		case 6:
			ex7_6();
			break;
		case 7:
			ex7_7();
			break;
		case 8:
			ex7_8();
		case 9:
			ex7_9();
			break;
		case 10:
			ex7_10();
			break;
			break;
		default:
			break;
		}

		system("pause");
		system("cls");
	}



}