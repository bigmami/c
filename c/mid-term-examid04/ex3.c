#include <stdio.h>
#include <stdlib.h>
void ex3() {
	int arr[10];
	int *ptr = &arr;
	for (int i = 0; i <= 9; i++) {
		printf("�п�Jarr[%d]����:", i);
		scanf("%d", &arr[i]);
		printf("arr[%d]�����e:%d\n",i,arr[i]);
		printf("arr[%d]���a�}:%p\n", i,*(ptr+i));
	}
}
