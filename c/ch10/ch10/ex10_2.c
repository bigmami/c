#include <stdio.h>
#include <stdlib.h>

void ex10_2(){
	char ch;
	int i;
	for (i = 1; i <= 3; i++)
	{
		printf("#%d ����J���: ", i);
		scanf("%c", &ch); /*�Hscanf()��J�r��*/
		printf("#%d ����X���:%c\n\n", i, ch);
		/*�k�@
		while (getchar() != '\n')
			continue;
			*/
		//�k�G
		while (getchar() != '\n')
			;
	}
}