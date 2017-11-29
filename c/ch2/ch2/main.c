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
		printf("--------------------------------範例---------------------------------- \n");
		printf("1.跳脫序列與格式碼的應用\n");
		printf("2.餘數運算子\n");
		printf("3.遞增與遞減運算子\n");
		printf("4.邏輯運算子\n");
		printf("5.巢狀 if 敘述的練習\n");
		printf("6.if-else-if 敘述的應用\n");
		printf("7.if 與 else 的配對問題\n");
		printf("8.條件運算子的範例\n");
		printf("9.switch 敘述的範例\n");
		printf("10.while迴圈的範例\n");
		printf("11.以巢狀while迴圈改寫九九乘法表\n");
		printf("-------------------------------作業----------------------------------\n");
		printf("12. 試撰寫一程式，可由鍵盤輸入一個整數，然後判斷它是奇數或偶數\n");
		printf("13. 請撰寫一程式，可由鍵盤輸入攝氏溫度，程式的輸出為華氏溫度\n");
		printf("14. 試撰寫一程式，可由鍵盤輸入氣溫，若在20~22度之間，顯示出:請加一件薄外套! ，若在14~19度之間，顯示出:天氣冷, 請穿上外套!\n");
		printf("15. 珍珠奶茶與烏龍拿鐵分別為45與55元, 請先詢問客人各需要買幾瓶, 當珍珠奶茶與烏龍拿鐵購買總數超過15瓶, 並且總額達(含) 800元, 售價享有9折優惠\n");
		printf("16. 珍珠奶茶與烏龍拿鐵分別為45與55元, 請先詢問客人各需要買幾瓶, 當珍珠奶茶與烏龍拿鐵購買總數超過12瓶, 或是總額達(含) 700元, 或是珍珠奶茶購買達(含)10瓶, 售價享有95折優惠\n");
		printf("17. 請使用 For 迴圈印出下列星號1\n");
		printf("18. 請使用 For 迴圈印出下列星號2\n");
		printf("19. 請使用 For 迴圈印出下列星號3\n");
		printf("20. 請使用 For 迴圈印出下列星號4\n");
		printf("21. 請使用 For 迴圈印出下列星號5\n");
		printf("----------------------------------------------------\n");
		printf("請輸入要執行的範例?  1 ~21, 按'0' 則結束執行!   ?    ");
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