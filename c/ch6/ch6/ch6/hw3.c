#include <stdlib.h>
#include <stdio.h>
int a, b,c;

int maimum();
int minimum();

void hw3() {
	printf("�п�J�T�Ӿ��\n");
	scanf("%d%d%d", &a, &b, &c);
	maimum();
	minimum();
	
}

int maimum() {
	
	if (a >= b) {
		if (a >= c)
		printf("�̤j�Ȭ�%d\n", a);
		else
			printf("�̤j�Ȭ�%d\n", c);
	}
	else {
		if (b >= c)
			printf("�̤j�Ȭ�%d\n", b);
		else
			printf("�̤j�Ȭ�%d\n", a);
	}
}

int minimum(){
	if (a <= b) {
		if (a <= c)
		printf("�̤p�Ȭ�%d\n", a);
		else
			printf("�̤p�Ȭ�%d\n", c);
	}
	else {
		if (b <= c)
			printf("�̤p�Ȭ�%d\n", b);
		else
			printf("�̤p�Ȭ�%d\n", c);
	}
}
