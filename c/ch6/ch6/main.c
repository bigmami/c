#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex6_1a();

void main(){

	int input;
	_Bool flag = 1;

	while (flag){
		printf("-------------------------�d��-------------------------\n");
		printf("1.�ۭq�禡����\n");
		
		printf("-------------------------�@�~-------------------------\n");

		printf("----------------------------------------------------\n");
		printf("�п�J�n���檺�d��?  1 ~6, ��'0' �h��������!   ?    ");
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