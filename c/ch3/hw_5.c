#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;



int hw_5(){
int n=0;
int total=0;	
printf("試利用while迴圈找出最小的n值，使得1+2+3+...+n的總和大於等於1000\n");
do{
	n++;
	total+=n;
}	while(total<1000);
	printf("%d\n",n);
	return 0;
	system("pause");

	}

