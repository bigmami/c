#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex1();
void test();
void Bubblsort();


void main(){

	int input;
	_Bool flag = 1;

	while (flag){
		printf("-------------------------�d��-------------------------\n");
		printf("1.do while�j��\n");
		printf("2. ��J10�Ӿ�Ʀs�J�}�C�A�A�q�}�CŪ�X\n");
		printf("3. ��X�}�C�C�@��������}\n");
		printf("4. �}�C�O����\n");
		printf("5. while�j�骺�d��\n");
		printf("6. �H�_��while�j���g�E�E���k��\n");
		printf("7. �H�_���j��L�X�X��ϧ�\n");
		printf("8. �H�_���j��ϦL�Ʀr\n");
		printf("-------------------------�@�~-------------------------\n");
		printf("9. �էQ�α_���j�鼶�g�X�@�ӯಣ�ͦp�U�ϵ��G���{��\n");
		printf("10. �ЧQ��do while�j��A�p�� ���`�M\n");
		printf("11. �Х���L��J�ƭ�1~4�A�å[�H�P�_��J�ȬO�_�b1~4�����A�p�G�W�X���d��A�h�L�X ��J���~�A�_�h�Q��switch�L�X�۹������u�`\n");
		printf("12. �ռ��g�@�{���A�Q��while�j��L�X5~20�����Ҧ���ƪ�����ȡA�̫�A�L�X�o�ǥ���Ȫ��`�M�C\n");
		printf("13. �էQ��while�j���X�̤p��n�ȡA�ϱo1+2+3+n���`�M�j�󵥩�1000\n");
		printf("14. �էQ�α_��for�j��L�X�E�E���k��\n");
		printf("----------------------------------------------------\n");
		printf("�п�J�n���檺�d��?  1 ~6, ��'0' �h��������!   ?    ");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			ex1();
			break;
		case 2:
			test();
			break;
		case 3:
			Bubblsort(); 
			break;

		case 4:
			ex7_4d();
			break;

			//	case 5:
			//		ex3_5();
			//		break;

			//	case 6:
			//		ex3_6();
			//		break;

			//	case 7:
			//		ex3_7();
			//		break;

			//	case 8:
			//		ex3_8();
			//		break;
			//	case 9:
			//		hw1();

			//		break;
			//	case 10:
			//		hw2();
			//		break;
			//	case 11:
			//		hw3();
			//		break;
			//	case 12:
			//		hw4();
			//		break;
			//	case 13:
			//		hw5();
			//		break;
			//	case 14:
			//		hw6();
			//		break;
			//		*/
			//	case 0:
			//		flag = 0;
			//		break;
		default:
			break;
		}

		system("pause");
		system("cls");
	}



}