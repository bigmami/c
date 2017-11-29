#include <stdio.h>
#include <stdlib.h>

ex1(void){
	printf("請輸入十人的身高\n");
	int hight[10][2], i, j;
	for (i = 0; i <10; i++){
		printf("請輸入第%d人的身高: ", i + 1);
		scanf("%d", &hight[i][1]);
		hight[i][0] = i + 1;
		
	}
	for (i = 0; i <=9; i++){
		printf("第%d人的身高為= %d\n   ", hight[i][0], hight[i][1]);

	}




	//return 0;
	//system("pause");
}
								











