#include <stdio.h>
#include <stdlib.h>

ex1(void){
	printf("�п�J�Q�H������\n");
	int hight[10][2], i, j;
	for (i = 0; i <10; i++){
		printf("�п�J��%d�H������: ", i + 1);
		scanf("%d", &hight[i][1]);
		hight[i][0] = i + 1;
		
	}
	for (i = 0; i <=9; i++){
		printf("��%d�H��������= %d\n   ", hight[i][0], hight[i][1]);

	}




	//return 0;
	//system("pause");
}
								











