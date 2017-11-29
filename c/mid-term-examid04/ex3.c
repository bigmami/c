#include <stdio.h>
#include <stdlib.h>
void ex3() {
	int arr[10];
	int *ptr = &arr;
	for (int i = 0; i <= 9; i++) {
		printf("請輸入arr[%d]的值:", i);
		scanf("%d", &arr[i]);
		printf("arr[%d]的內容:%d\n",i,arr[i]);
		printf("arr[%d]的地址:%p\n", i,*(ptr+i));
	}
}
