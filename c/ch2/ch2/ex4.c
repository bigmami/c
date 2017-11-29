#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
#include <math.h>
//using namespace std;
void ex4(){
	int a, b, total, sum;
	double sum2;
	printf("珍珠奶茶與烏龍拿鐵分別為45與55元, 請先詢問客人各需要買幾瓶\n");
	printf("請問需要幾瓶珍珠奶茶\n");
	scanf("%d", &a);
	printf("請問需要幾瓶烏龍拿鐵\n");
	scanf("%d", &b);
	sum = a + b;
	total = a * 45 + b * 55;
	if (a + b>15 && total >= 800){
		sum2= (a * 45 + b * 55)*0.9;
		printf("你共購買了瓶飲料\n", &sum);
		printf("購買十五瓶即可享九折優惠，價格為元%e\n", &sum2);
	}
	else{
		printf("你共購了瓶飲料\n", &sum);
		printf("未滿十五瓶無法享九折優惠，價格為元%e\n", &sum2);
	}
	//system("pause");
	//return 0;

}
