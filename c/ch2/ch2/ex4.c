#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
#include <math.h>
//using namespace std;
void ex4(){
	int a, b, total, sum;
	double sum2;
	printf("�ï]�����P�Q�s���K���O��45�P55��, �Х��߰ݫȤH�U�ݭn�R�X�~\n");
	printf("�аݻݭn�X�~�ï]����\n");
	scanf("%d", &a);
	printf("�аݻݭn�X�~�Q�s���K\n");
	scanf("%d", &b);
	sum = a + b;
	total = a * 45 + b * 55;
	if (a + b>15 && total >= 800){
		sum2= (a * 45 + b * 55)*0.9;
		printf("�A�@�ʶR�F�~����\n", &sum);
		printf("�ʶR�Q���~�Y�i�ɤE���u�f�A���欰��%e\n", &sum2);
	}
	else{
		printf("�A�@�ʤF�~����\n", &sum);
		printf("�����Q���~�L�k�ɤE���u�f�A���欰��%e\n", &sum2);
	}
	//system("pause");
	//return 0;

}
