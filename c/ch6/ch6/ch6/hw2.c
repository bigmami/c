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
	printf("請任意輸入一個介於0~100的數字\n");
	scanf("%d", &a);
	return a;
}

int compare() {
	
			if (a > ans) {
				if (a - ans == 5)
					printf("接近,在小一點點\n");
				else
					printf("太大,在小一點\n");
			}
			else {
				if (a < ans) {
					printf("太小,在大一點\n");
					if (ans - a == 5)
						printf("接近,在大一點點\n");
				}
				else {
					if (a == ans) {
						printf("恭喜你答對\n");
						flag = 0;
					}
				}
			}
		}
		

