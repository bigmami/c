#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
#include <math.h>
//using namespace std;
void ex5(){
	int a, b, sum, total;
	double sum2;
	printf("珍珠奶茶與烏龍拿鐵分別為45與55元, 請先詢問客人各需要買幾瓶\n");
	printf("請問需要幾瓶珍珠奶茶\n");
	scanf("%d", &a);
	printf("請問需要幾瓶烏龍拿鐵\n");
	scanf("%d", &b);
	sum = a + b;
	total = a * 45 + b * 55;
	if (a + b>12){
		sum2 = (a * 45 + b * 55)*0.95;
		printf("你共購買了瓶飲料\n", &sum);
		printf("購買十二瓶即可享九五折優惠，價格為元%E\n", &sum2);
	}
	else if (total >= 700){
		sum2 = (a * 45 + b * 55)*0.95;
		printf("你共購買了瓶飲料\n", &sum);
		printf("總額達(含) 700元，即可享九五折優惠，價格為%E\n", &sum2);
	}
	else if (a >= 10){
		sum2 = (a * 45 + b * 55)*0.95;
		printf("你共購買了瓶飲料\n", &sum);
		printf("購買超過十瓶珍珠奶茶，即可享九五折優惠，價格為元%E\n", &sum2);
	}
	else {
		printf("你共購買了瓶飲料\n", &sum);
		printf("未達優惠方案，無法享九五折優惠，價格為%d\n", &total);
	}
	//system("pause");
	//return 0;

}
