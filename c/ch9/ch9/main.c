#include <stdio.h>
#include <stdlib.h>
#include "c.h"


void main() {
	void ex1a();
	void ex1b();
	void ex1c();
	void ex_2a();
	void ex_2b();
	void ex_3a();
	void ex_3b();
	void ex_4b();
	void test_1();
	void test_2();
	void test_3();
	void test_4();
	int input;
	_Bool flag = 1;

	while (flag) {
		
		printf("-------------------------範例-------------------------\n");
		printf("ex1a\n");
		printf("ex1b\n");
		printf("ex1c\n");
		printf("ex_2a\n");
		printf("ex_2b\n");
		printf("ex_3b\n");
		printf("ex_4b\n");
		printf("ex5\n");
		printf("ex6\n");
		printf("ex7\n");
		printf("ex8\n");
		printf("ex9\n");
		printf("ex10\n");
		printf("test_3\n");
		printf("test_4\n");
		printf("-------------------------範例-------------------------\n");
		printf("-------------------------練習--------------------------\n");
		printf("練習一:stuct square\n");
		printf("請輸入要執行的範例?  , 按'0' 則結束執行!   ?    ");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			ex1a();
			break;
		case 2:
			ex1b();
			break;

		case 3:
			ex1c();
			break;
	
		case 4:
			ex_2a();
			break;

		case 5:
			ex_2b();
			break;
			
		case 6:
			ex_3a();
			break;
			
		case 7:
			ex_3b;
			break;
			/*
		case 8:
			ex8();
			break;
			*/
		case 9:
			test_2();
			break;
			
		case 10:
			test_1();
			break;
		case 11:
			test_3();
			break;
		case 12:
			ex_4b();
			break;
		case 13:
			text_4();
			break;
		}
	}
}w