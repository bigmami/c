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
		printf("-------------------------�d��-------------------------\n");
		printf("1.�}�C�W�٪��ȧY�}�C����}\n");
		printf("2.���Ъ���ƹB��\n");
		printf("3.��������\n");
		printf("4.���а}�C�P�G���}�C\n");
		printf("5.���а}�C�P�G���}�C\n");
		printf("-------------------------�m��-------------------------\n");
		printf("�m�ߤ@\n");
		printf("�m�ߤG\n");
		printf("�m�ߤT\n");
		printf("-------------------------�@�~-------------------------\n");
		printf("----------------------------------------------------\n");
		printf("�п�J�n���檺�d��?  , ��'0' �h��������!   ?    ");
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