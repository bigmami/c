#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

int hw_3(){
	int a;
	printf("請輸入1~4\n");
	scanf("%d",&a);
	if(a>0 && a<=4)
		switch(a){
			case 1:
			printf("春天\n");
			break;
			case 2:		
			printf("夏天\n");
			break;
			case 3:
			printf("秋天\n");
			break;
			case 4:
			printf("冬天\n");
			break;
			default:
			break;
			
		}
			else
			{
			printf("輸入錯誤，請重新輸入\n"); 
			} 	   
	return 0;
	}
	
