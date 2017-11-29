#include <stdio.h>
#include <stdlib.h>

void square();
void ex2() {
	
	square();
	
}

void square() {
	int arr[] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 6; i++) {
		arr[i] = arr[i] * arr[i];
		printf("arr[%d]=%d\n", i, arr[i]);
	}
}