#include <stdio.h>
#include <stdlib.h>
#include "c.h"

v


void main(){
	oid ex2_1();
	void ex2_2();
	void ex2_3();
	void ex2_4();
	void ex2_5();
	void ex2_6();
	void ex2_7();
	void ex2_8();
	void ex2_9();
	void ex2_10();
	void ex2_11();
	void hw1();
	void hw2();
	void hw3();
	void hw4();
	void hw5();
	void hw6_1();
	void hw6_2();
	void hw6_3();
	void hw6_4();
	void hw6_5();

	int input;
	_Bool flag = 1;

	while (flag){
		printf("--------------------------------�d��---------------------------------- \n");
		printf("1.����ǦC�P�榡�X������\n");
		printf("2.�l�ƹB��l\n");
		printf("3.���W�P����B��l\n");
		printf("4.�޿�B��l\n");
		printf("5.�_�� if �ԭz���m��\n");
		printf("6.if-else-if �ԭz������\n");
		printf("7.if �P else ���t����D\n");
		printf("8.����B��l���d��\n");
		printf("9.switch �ԭz���d��\n");
		printf("10.while�j�骺�d��\n");
		printf("11.�H�_��while�j���g�E�E���k��\n");
		printf("-------------------------------�@�~----------------------------------\n");
		printf("12. �ռ��g�@�{���A�i����L��J�@�Ӿ�ơA�M��P�_���O�_�Ʃΰ���\n");
		printf("13. �м��g�@�{���A�i����L��J���ūסA�{������X���ؤ�ū�\n");
		printf("14. �ռ��g�@�{���A�i����L��J��šA�Y�b20~22�פ����A��ܥX:�Х[�@�����~�M! �A�Y�b14~19�פ����A��ܥX:�Ѯ�N, �Ь�W�~�M!\n");
		printf("15. �ï]�����P�Q�s���K���O��45�P55��, �Х��߰ݫȤH�U�ݭn�R�X�~, ��ï]�����P�Q�s���K�ʶR�`�ƶW�L15�~, �åB�`�B�F(�t) 800��, ����ɦ�9���u�f\n");
		printf("16. �ï]�����P�Q�s���K���O��45�P55��, �Х��߰ݫȤH�U�ݭn�R�X�~, ��ï]�����P�Q�s���K�ʶR�`�ƶW�L12�~, �άO�`�B�F(�t) 700��, �άO�ï]�����ʶR�F(�t)10�~, ����ɦ�95���u�f\n");
		printf("17. �Шϥ� For �j��L�X�U�C�P��1\n");
		printf("18. �Шϥ� For �j��L�X�U�C�P��2\n");
		printf("19. �Шϥ� For �j��L�X�U�C�P��3\n");
		printf("20. �Шϥ� For �j��L�X�U�C�P��4\n");
		printf("21. �Шϥ� For �j��L�X�U�C�P��5\n");
		printf("----------------------------------------------------\n");
		printf("�п�J�n���檺�d��?  1 ~21, ��'0' �h��������!   ?    ");
		scanf("%d", &input);

		
		switch (input)
		{
		case 1:
			ex2_1();
			break;
		case 2:
			ex2_2();
			break;
		case 3:
			ex2_3();
			break;

		case 4:
			ex2_4();
			break;

		case 5:
			ex2_5();
			break;

		case 6:
			ex2_6();
			break;

		case 7:
			ex6_2();
			break;

		case 8:
			ex6_3();
			break;

		case 9:
			ex6_4();
			break;

		case 10:
			ex6_5();
			break;

		case 0:
			flag = 0;
			break;
		default:
			break;
		}

		system("pause");
		system("cls");
	}




}