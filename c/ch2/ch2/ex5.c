#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
#include <math.h>
//using namespace std;
void ex5(){
	int a, b, sum, total;
	double sum2;
	printf("�ï]�����P�Q�s���K���O��45�P55��, �Х��߰ݫȤH�U�ݭn�R�X�~\n");
	printf("�аݻݭn�X�~�ï]����\n");
	scanf("%d", &a);
	printf("�аݻݭn�X�~�Q�s���K\n");
	scanf("%d", &b);
	sum = a + b;
	total = a * 45 + b * 55;
	if (a + b>12){
		sum2 = (a * 45 + b * 55)*0.95;
		printf("�A�@�ʶR�F�~����\n", &sum);
		printf("�ʶR�Q�G�~�Y�i�ɤE�����u�f�A���欰��%E\n", &sum2);
	}
	else if (total >= 700){
		sum2 = (a * 45 + b * 55)*0.95;
		printf("�A�@�ʶR�F�~����\n", &sum);
		printf("�`�B�F(�t) 700���A�Y�i�ɤE�����u�f�A���欰%E\n", &sum2);
	}
	else if (a >= 10){
		sum2 = (a * 45 + b * 55)*0.95;
		printf("�A�@�ʶR�F�~����\n", &sum);
		printf("�ʶR�W�L�Q�~�ï]�����A�Y�i�ɤE�����u�f�A���欰��%E\n", &sum2);
	}
	else {
		printf("�A�@�ʶR�F�~����\n", &sum);
		printf("���F�u�f��סA�L�k�ɤE�����u�f�A���欰%d\n", &total);
	}
	//system("pause");
	//return 0;

}
