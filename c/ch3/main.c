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
		printf(("--------------------------範例------------------------\n");
		printf("1. 遞增與遞減運算子\n");
		printf("2. 條件運算子的範例\n");
		printf("3. 巢狀 if 敘述的練習\n");
		printf("4. switch 敘述的範例\n");
		printf("5. while迴圈的範例\n");
		printf("6. 以巢狀while迴圈改寫九九乘法表\n");
		printf("7. 以巢狀迴圈印出幾何圖形\n");
		printf("8. 以巢狀迴圈反印數字\n");
		printf("-------------------------作業-------------------------\n");
		printf("9. 試利用巢狀迴圈撰寫出一個能產生如下圖結果的程式\n");
		printf("10.請利用do while迴圈，計算 的總和，其中n為正的偶數，可由鍵盤自行輸入。若輸入的不是正偶數，則程式會要求使用者再次輸入，直到輸入的數是正偶數為止。\n");
		printf("11.請由鍵盤輸入數值1~4，並加以判斷輸入值是否在1~4之間，如果超出此範圍，則印出 輸入錯誤，否則利用switch印出相對應的季節：\n");
		printf("12.試撰寫一程式，利用while迴圈印出5~20之間所有整數的平方值，最後再印出這些平方值的總和。\n");
		printf("13.試利用while迴圈找出最小的n值，使得 的總和大於等於1000。\n");
		printf("14.6.	試利用巢狀for迴圈印出九九乘法表。\n");
		printf("請輸入要執行的範例?  1 ~10, 按'0' 則結束執行!   ?    ");
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