#include <stdio.h>
#include <stdlib.h>

void exam(){
	int j;
	char *str[13] = { "ab", "cd", "ef", "gh", "ij", "kl", "mn", "op", "qr", "st", "uv", "wx", "yz" };
	
		for (j = 0; j <= 12; j++)
			printf("str[%d]ªº¦ì§}=%p\n",  j, &str[j]);
									

	for(int i = 0; i <= 25; i++)
		printf("%c,", **str +i);
	




}