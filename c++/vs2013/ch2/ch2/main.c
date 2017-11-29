#include "c.h"
#include <stdio.h>
#include <stdlib.h>



//using namespace std;
void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6_1();
void ex6_2();
void ex6_3();
void ex6_4();
void ex6_5();

//主程式宣告區

void main(){
	int input;
	printf("請輸入你要開啟的課後習題\n");
	printf("ex1 ex2 ex4 ex5 ex6_1 ex6_2 ex6_3 ex6_4 ex6_5\n");
	scanf("%d",&input);
	switch (input)
	{
	case 1:
		ex1();
		break;
		case 2:
			ex2();
			break;
		case 3:
			ex3();
			break;
		case 4:
			ex4();
			break;
		case 5:
			ex5();
			break;
			/*
		case 6_1:
			ex6_1();
			break;
		case 6_2:
			ex6_2();
			break;
		case 6_3:
			ex6_3();
			break;
		case 6_4:
			ex6_4();
			break;
			*/
		default:
			break;
	}


				
		

}