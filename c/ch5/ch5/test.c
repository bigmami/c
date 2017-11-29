//1.除錯
#include <stdio.h>
#include <stdlib.h>
 test(void)
{
	/* score是2列3行的陣列 */
	int score[2][3] = { 
							{ 10, 20, 30 }, 
							{ 40, 50, 60 } 
												};
	int i, j;
	for (i = 0; i <= 1; i++)
	for (j = 0; j <= 2; j++)
		printf("score[%d][%d] = %d\n", i, j, score[i][j]);
	//system("PAUSE");
	//return 0;
}
