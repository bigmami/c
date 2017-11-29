 #include <stdio.h>
#include <stdlib.h>

//#include <iostream>
//using namespace std;
int i,a,total;
int hw_2(){
	printf("利用do while迴圈，計算2+4+6+...+n的總和，其中n為正的偶數，可由鍵盤自行輸入。若輸入的不是正偶數，則程式會要求使用者再次輸入，直到輸入的數是正偶數為止。\n");
	scanf("%d",&a);
	while(1){
		if (a % 2 == 0 && a > 0){

			for (i = 2; i <= a; i += 2){
				total += i;
			}
		else{
			printf("輸入錯誤請重新輸入\n");
			break;
		}
			
	}
		printf("輸入錯誤請重新輸入\n");
			break;
		}
	  	
	printf("2+4+6+.....+n的總和是%d\n",total);

	return 0;
	system("pause");
}
