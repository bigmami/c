#include <stdio.h>
#include <stdlib.h>

ex1() {
	
	int arr[5] = { 34,76,33,42,76 };
	int *ptr = &arr;
	for (int i = 0; i <= 4; i++) {
		
		printf("arr[%d]���ȬO%d\n", i, *(ptr+i)+10);
        }


}