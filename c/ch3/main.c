#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex3_1();
void ex3_2();
void ex3_3();
void ex3_4();
void ex3_5();
void ex3_6();
void hw_1();
void hw_2();
void hw_3();
void hw_4();
void hw_5();
void hw_6();




void main(){

	int input;
	_Bool flag =1;

	while (flag){
		printf(("--------------------------�d��------------------------\n");
		printf("1. ���W�P����B��l\n");
		printf("2. ����B��l���d��\n");
		printf("3. �_�� if �ԭz���m��\n");
		printf("4. switch �ԭz���d��\n");
		printf("5. while�j�骺�d��\n");
		printf("6. �H�_��while�j���g�E�E���k��\n");
		printf("7. �H�_���j��L�X�X��ϧ�\n");
		printf("8. �H�_���j��ϦL�Ʀr\n");
		printf("-------------------------�@�~-------------------------\n");
		printf("9. �էQ�α_���j�鼶�g�X�@�ӯಣ�ͦp�U�ϵ��G���{��\n");
		printf("10.�ЧQ��do while�j��A�p�� ���`�M�A�䤤n���������ơA�i����L�ۦ��J�C�Y��J�����O�����ơA�h�{���|�n�D�ϥΪ̦A����J�A�����J���ƬO�����Ƭ���C\n");
		printf("11.�Х���L��J�ƭ�1~4�A�å[�H�P�_��J�ȬO�_�b1~4�����A�p�G�W�X���d��A�h�L�X ��J���~�A�_�h�Q��switch�L�X�۹������u�`�G\n");
		printf("12.�ռ��g�@�{���A�Q��while�j��L�X5~20�����Ҧ���ƪ�����ȡA�̫�A�L�X�o�ǥ���Ȫ��`�M�C\n");
		printf("13.�էQ��while�j���X�̤p��n�ȡA�ϱo ���`�M�j�󵥩�1000�C\n");
		printf("14.6.	�էQ�α_��for�j��L�X�E�E���k��C\n");
		printf("�п�J�n���檺�d��?  1 ~10, ��'0' �h��������!   ?    ");
		scanf("%d", &input);

		//ex3_1();
		switch (input)
		{
		case 1:
			ex3_1();
			break;
		case 2:
			ex3_2();
			break;
		case 3:
			ex3_3();
			break;
		
		case 4:
			ex3_4();
			break;
		
		case 5:
			ex3_5();
			break;

		case 6:
			ex3_6();
			break;

		case 7:
			ex3_7();
			break;

		case 9:
			hw_1();
			break;
		case 10:
			hw_2();
			break;
		case 11:
			hw_3();
			break;
		case 12:
			hw_4();
			break;
		case 13:
			hw_5();
			break;
		case 14:
			hw_6();
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