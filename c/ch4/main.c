#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex4_1();
void ex4_2a();
void ex4_2b();
void ex4_2c();
void ex4_3a();
void ex4_4();
void ex4_5();
void ex4_6();
void ex4_7();
void ex4_8();
void ex7_4d();

void main(){

	int input;
	_Bool flag = 1;

	while (flag){
		printf("1.do while迴圈\n");
		printf("2. 輸入10個整數存入陣列，再從陣列讀出\n");
		printf("3. 輸出陣列每一元素的位址\n");
		printf("4. 陣列記憶體\n");
		printf("5. while迴圈的範例\n");
		printf("6. 以巢狀while迴圈改寫九九乘法表\n");
		printf("7. 以巢狀迴圈印出幾何圖形\n");
		printf("8. 以巢狀迴圈反印數字\n");
		printf("-------------------------作業-------------------------\n");
		printf("9. 試利用巢狀迴圈撰寫出一個能產生如下圖結果的程式\n");
		printf("10. 請利用do while迴圈，計算 的總和\n");
		printf("11. 請由鍵盤輸入數值1~4，並加以判斷輸入值是否在1~4之間，如果超出此範圍，則印出 輸入錯誤，否則利用switch印出相對應的季節\n");
		printf("12. 試撰寫一程式，利用while迴圈印出5~20之間所有整數的平方值，最後再印出這些平方值的總和。\n");
		printf("13. 試利用while迴圈找出最小的n值，使得1+2+3+n的總和大於等於1000\n");
		printf("14. 試利用巢狀for迴圈印出九九乘法表\n");
		printf("----------------------------------------------------\n");
		printf("請輸入要執行的範例?  1 ~6, 按'0' 則結束執行!   ?    ");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			ex4_1();
			break;
		case 2:
			ex4_2a();
			break;
		case 3:
			ex4_2b();
			break;

		case 4:
			ex4_2c();
			break;

		case 5:
			ex4_3a();
			break;

		case 6:
			ex4_4();
			break;

		case 7:
			ex4_5();
			break;

		case 8:
			ex4_6();
			break;
		case 9:
			ex4_7();

			break;
		case 10:
			ex4_8();
			break;
		//case 11:
			//hw3();
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