#include <stdlib.h>
#include <stdio.h>
int init();
int  getans();
int compare();
int a;
int ans;
_Bool flag = 1;

void hw2() {
	
	while (flag) {
		init();
		getans();
		compare();
	}
}


int init() {
	ans = 87;
	return ans;
}

int getans() {
	printf("�Х��N��J�@�Ӥ���0~100���Ʀr\n");
	scanf("%d", &a);
	return a;
}

int compare() {
	
			if (a > ans) {
				if (a - ans == 5)
					printf("����,�b�p�@�I�I\n");
				else
					printf("�Ӥj,�b�p�@�I\n");
			}
			else {
				if (a < ans) {
					printf("�Ӥp,�b�j�@�I\n");
					if (ans - a == 5)
						printf("����,�b�j�@�I�I\n");
				}
				else {
					if (a == ans) {
						printf("���ߧA����\n");
						flag = 0;
					}
				}
			}
		}
		

