#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void main(){
	void ex8_1();
	void ex8_2();
	void ex8_3();
	void ex8_4();
	void ex8_5();
	void test1();
	void test2();
	void test3();
	void exam();
	int input;
	_Bool flag = 1;

	while (flag){
		printf("-------------------------範例-------------------------\n");
		printf("1.陣列名稱的值即陣列的位址\n");
		printf("2.指標的算數運算\n");
		printf("3.雙重指標\n");
		printf("4.指標陣列與二維陣列\n");
		printf("5.指標陣列與二維陣列\n");
		printf("-------------------------練習-------------------------\n");
		printf("練習一\n");
		printf("練習二\n");
		printf("練習三\n");
		printf("-------------------------作業-------------------------\n");
		printf("----------------------------------------------------\n");
		printf("請輸入要執行的範例?  , 按'0' 則結束執行!   ?    ");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			ex8_1();
			break;
		case 2:
			ex8_2();
			break;
		case 3:
			ex8_3();
			break;
		case 4:
			ex8_4();
			break;

		case 5:
			ex8_5();
			break;
		case 6:
			test1();
			break;
		case 7:
			test2();
			break;
		case 8:
			test3();
		case 9:
			exam();
			break;
		case 10:
			
			break;
		default:
			break;
		}

		system("pause");
		system("cls");
	}



}