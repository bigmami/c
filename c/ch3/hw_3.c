#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

int hw_3(){
	int a;
	printf("�п�J1~4\n");
	scanf("%d",&a);
	if(a>0 && a<=4)
		switch(a){
			case 1:
			printf("�K��\n");
			break;
			case 2:		
			printf("�L��\n");
			break;
			case 3:
			printf("���\n");
			break;
			case 4:
			printf("�V��\n");
			break;
			default:
			break;
			
		}
			else
			{
			printf("��J���~�A�Э��s��J\n"); 
			} 	   
	return 0;
	}
	
