#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

int hw_4(){
	int total=0;
	int i=5;
	while(i>=5 && i<=20){
		printf("%d\n",i*i);
		i++;
	}	
		for(i=5;i<=20;i++)
		total+=i*i;
		
	printf("Á`©M¬O%d\n",total);
	return 0;
	system("pause"); 
}
