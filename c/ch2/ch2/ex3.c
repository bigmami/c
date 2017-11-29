#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
#include <math.h>
//using namespace std;
void ex3(){
	float a;
	printf("請輸入溫度\n");
	scanf("%f", &a);
	if (a >= 20 && a <= 22){
		printf("請加一件薄外套!\n");
	}
	else if (a >= 14 && a <= 19){
		printf("天氣冷, 請穿上外套!\n");
	}
	else{
		printf("溫度輸入錯誤，請重新輸入\n");
	}
	//system("pause");
	//return 0;
}