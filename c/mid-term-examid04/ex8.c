#include <stdio.h>
#include <stdlib.h>
void ex8() {
	int sum=0;
	int arr[4][2][3] = { {{1,2,3},
						 {4,5,6}},
						{{7,8,9},
						{10,11,12}},
						{{13,14,15},
						{16,17,18}},
						{{19,20,21},
					     {22,23,24}}};

	
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 2; j++)
			for (int k = 0; k < 3; k++) {
				sum += arr[i][j][k];
				printf("arr[%d][%d][%d]=%d\n", i, j, k,arr[i][j][k]);
				printf("Á`©M:%d\n", sum);
			}
}