#include <stdio.h>
#include <stdlib.h>

void ex10_2(){
	char ch;
	int i;
	for (i = 1; i <= 3; i++)
	{
		printf("#%d 的輸入資料: ", i);
		scanf("%c", &ch); /*以scanf()輸入字元*/
		printf("#%d 的輸出資料:%c\n\n", i, ch);
		/*法一
		while (getchar() != '\n')
			continue;
			*/
		//法二
		while (getchar() != '\n')
			;
	}
}