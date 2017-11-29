#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void main() {
	void ex1(); 
	void ex2();
	void ex3();
	void ex4();
	void ex5();
	void ex6_1();
	void ex7();
	void ex8();
	void ex9();
	void ex10_1();

	int input;
	_Bool flag = 1;

	while (flag) {
		//printf("-------106電子產學訓A班04蕭伃佑-------------------------\n");
		printf("-------------------------期中考作答-------------------------\n");
		printf("1.將陣列每一元素加上10並列出結果\n");
		printf("2.撰寫一函數void square(int *arr),呼叫陣列元素會被平方\n");
		printf("3.宣告整數陣列，手動輸入數字，利用指標取出陣列內容和位置\n");
		printf("4.利用指標變數，設計一方法swap(int x,int y),交換兩變數\n");
		printf("5.撰寫int mod(int x,int y)函數,計算mod(17,5)的結果\n");
		printf("6.撰寫cub(int x)函數，計算cub(5)的六次方\n");
		printf("7.撰寫double f(double x)用來回傳方程式的值，計算f(-3.2)、f(-2.1)、f(0)、f(2.1),\n");
		printf("8.設陣列A的維度為4X2X3,元素為1-24,計算陣列內元素的總和\n");
		printf("9.請設計一程式，將字串忠所以的大寫字母轉換成小寫字母\n");
		printf("10.鍵盤輸入字串後，計算出現a、e、i、o、u的次數(未作答)\n");
		printf("請輸入要執行的範例?  , 按'0' 則結束執行!   ?    ");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			ex1();
			break;
		case 2:
			ex2();
			break;
		
		case 3:
			ex3();
			break;

		case 4:
			ex4();
			break;

		case 5:
			ex5();
			break;
		case 6:
			ex6_1();
			break;

		case 7:
			ex7();
			break;

		case 8:
			ex8();
			break;

		case 9:
			ex9();
			break;
		case 10:
			ex10_1();
			break;
		case 0:
			exit(1);

		}
	}
}