#include <stdio.h>
#include <stdlib.h>
#include "c.h"


void main() {
	void ex10_1();
	void ex10_2();
	void ex10_3();
	void ex10_4();
	void ex10_5();
	void ex10_6();
	void ex10_7();
	void ex10_8();
	void ex10_9();
	void test_1();
	int input;
	_Bool flag = 1;
	
	while (flag) {

		printf("-------------------------範例-------------------------\n");
		printf("1.scanf的缺點 \n");
		printf("2.改善多重scanf的輸入方式\n");
		printf("3.使用getch,getche,getchar輸入字元\n");
		printf("4.使用getchar輸入字元\n");
		printf("請輸入要執行的範例?  , 按'0' 則結束執行!   ?    ");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			ex10_1();
			break;
			
		case 2:
			ex10_2();
			break;
			
		case 3:
			ex10_3();
			break;
			
		case 4:
			ex10_4();
			break;
			
		case 5:
			ex10_5();
			break;
			
		case 6:
			ex10_6();
			break;
			
		case 7:
			ex10_7;
			break;
			
			case 8:
			ex10_8();
			break;
		
		case 9:
			ex10_9();
			break;
			
		case 10:
			test_1();
			break;
			/*
		case 11:
			test_3();
			break;
		case 12:
			ex_4b();
			break;
		case 13:
			text_4();
			break;
			*/
		}
	}
}