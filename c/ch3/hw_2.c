 #include <stdio.h>
#include <stdlib.h>

//#include <iostream>
//using namespace std;
int i,a,total;
int hw_2(){
	printf("�Q��do while�j��A�p��2+4+6+...+n���`�M�A�䤤n���������ơA�i����L�ۦ��J�C�Y��J�����O�����ơA�h�{���|�n�D�ϥΪ̦A����J�A�����J���ƬO�����Ƭ���C\n");
	scanf("%d",&a);
	while(1){
		if (a % 2 == 0 && a > 0){

			for (i = 2; i <= a; i += 2){
				total += i;
			}
		else{
			printf("��J���~�Э��s��J\n");
			break;
		}
			
	}
		printf("��J���~�Э��s��J\n");
			break;
		}
	  	
	printf("2+4+6+.....+n���`�M�O%d\n",total);

	return 0;
	system("pause");
}
