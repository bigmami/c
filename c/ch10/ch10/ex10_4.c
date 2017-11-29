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
		printf("請選擇你要的商品(1..3)或q結束:");
		option = getchar();
		switch (option)
		{
		case '1':printf("\n你選擇的商品是ipod nano\n");
			break;
		case '2':printf("\n你選擇的商品是iphone\n");
			break;
		case '3':printf("\n你選擇的商品是iMac\n");
			break;
		case 'q': exit(0);
		default:
			printf("\n沒有這樣的商品請重新輸入\n");
		}
	} while (getchar() != '\n');

}

