#include <stdlib.h>
#include <stdio.h>

int Fib1(int n){
	if (n==0 || n==1)
	return 1;
	
	
	return (Fib1(n-1)+Fib1(n-2)); //�O���ƦC���� ���j�� 
}

void hw4_1(){
	int input, i;

		printf("�п�J�ƦC\n");
		scanf("%d", &input);           //������J
		printf("\n");

		if (input < 0)
			printf("��J���~�A�Фſ�J�p��s����");

		else{
			for (i = 0; i <= input; i++)
				printf("%d  ", Fib1(i));
		}

		printf("\n\n");



	}




