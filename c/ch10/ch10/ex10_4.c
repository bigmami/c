#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void ex10_4() {
	char option;
	do{
		printf("\n");
		printf("1) ipod nano \n");
		printf("2) iphone\n");
		printf("3) iMac \n");
		printf("�п�ܧA�n���ӫ~(1..3)��q����:");
		option = getchar();
		switch (option)
		{
		case '1':printf("\n�A��ܪ��ӫ~�Oipod nano\n");
			break;
		case '2':printf("\n�A��ܪ��ӫ~�Oiphone\n");
			break;
		case '3':printf("\n�A��ܪ��ӫ~�OiMac\n");
			break;
		case 'q': exit(0);
		default:
			printf("\n�S���o�˪��ӫ~�Э��s��J\n");
		}
	} while (getchar() != '\n');

}

