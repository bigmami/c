#include <stdio.h>
#include <stdlib.h>

void ex7_2(){
	int *ptri[6];
	char *ptrc;
	char x[] = "yvtsyvts";
	double asfioafjoafa = 88.1615;
	printf("sizeof(ptri)=%d\n",sizeof(ptri));
	printf("sizeof(ptrc)=%d\n", sizeof(ptrc));
	printf("sizeof(ptri)=%d\n", sizeof(*ptri));
	printf("sizeof(ptrc)=%d\n", sizeof(*ptrc));
	printf("sizeof(ptri)=%d\n", sizeof(x));
	printf("sizeof(ptri)=%d\n", sizeof(asfioafjoafa));
}