#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex6_1a();
void ex6_2a();
void ex6_2b();
void ex6_3a();
void ex6_3b();
void ex6_3c();
void ex6_4a();
void ex6_4b();
void ex6_4c();
void ex6_5a();
void ex6_5b();
void test();
void test3();
void test4();
void test5();
void test6();
void test7();
void hw1();
void hw1_1();
void hw2();
void hw3();
void hw4();
void hw4_1();
void hw5();


void main(){

	int input;
	_Bool flag = 1;

	while (flag){
		printf("-------------------------絛ㄒ-------------------------\n");
		printf("1.ex6_1a\n");
		printf("2.ex6_2a\n");
		printf("3.ex6_2b\n");
		printf("4.ex6_3a\n");
		printf("5.ex6_3b\n");
		printf("6.ex6_3c\n");
		printf("7.ex6_4a\n");
		printf("8.ex6_4b\n");
		printf("9.ex6_4c\n");
		printf("10.ex6_5a\n");
		printf("11.ex6_5b\n");
		printf("-------------------------絤策-------------------------\n");
		printf("12.璹ㄧΑ莱ノ\n");
		printf("13.级糶祘Α, 祘Αい﹚竡ㄧ计 calculate(), 璶―ㄏノ块俱计戈, 耞戈琌┪单 60, 獽 pass┪ down\n");
		printf("14.级糶祘Α,璸衡よ籔糴\n");
		printf("15.级糶祘Α,肚荡癸\n");
		printf("16.ㄏ﹚竡ㄧ计,俱计程,タ计程\n");
		printf("17.瞦计笴栏\n");
		printf("-------------------------穨-------------------------\n");
		printf("18.ノ患癹 gcd(程そ计)\n");
		printf("19.獶患癹ㄧ计―ㄢ计 gcd(程そ计)\n");
		printf("20.砞璸瞦计笴栏, ﹚竡 init ㄧ计 t 眔氮, ﹚竡 getans ㄧ计,眔ㄏノ块氮, 程﹚竡 compare ㄧ计, ゑ耕氮琌タ絋\n");
		printf("21.ㄏ﹚竡ㄧ计, 俱计程, 俱计程\n");
		printf("22.禣ん计獶患癹\n");
		printf("23.禣ん计患癹\n");
		printf("24.聅凝呼, 穦矗ㄑヘ玡ゎ呼砆聅凝计, 刚 static 纗摸ㄧ计い砞璸璸计竟, –讽㊣赣ㄧ计, 璸计竟常璶笆仓, 程块赣ㄧ计砆㊣Ω计\n");
		printf("----------------------------------------------------\n");
		printf("叫块璶磅︽絛ㄒ?  1 ~6, '0' 玥挡磅︽!   ?    ");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			ex6_1a();
			break;

		case 2:
			ex6_2a();
			break;

		case 3:
			ex6_2b();
			break;

		case 4:
			ex6_3a();
			break;
		case 5:
			ex6_3b();
			break;

		case 6:
			ex6_3c();
			break;
		case 7:
			ex6_4a();
			break;

		case 8:
			ex6_4b();
			break;

		case 9:
			ex6_4c();
			break;

		case 10:
			ex6_5a();
			break;

		case 11:
			ex6_5b();
			break;
		case 12:
			test();
			break;
		case 13:
			test3();
			break;
		case 14:
			test4();
			break;
		case 15:
			test5();
			break;
		case 16:
			test6();
			break;
		case 17:
			test7();
			break;
		case 18:
			hw1();
			break;
		case 19:
			hw1_1();
			break;
		case 20:
			hw2();
			break;
		case 21:
			hw3();
			break;
		case 22:
			hw4();
			break;
		case 23:
			hw4_1();
			break;
		case 24:
			hw5();
			break;
		default:
			break;
		}

		system("pause");
		system("cls");
	}



}