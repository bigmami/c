#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

void ex10_8()
{
	char ch;
	printf("�п�J�@�Ӧr��:");
	ch = _getche();
		printf("\n���r�����j�g�O%c\n", toupper(ch));
		printf("\n���r�����p�g�O%c\n", tolower(ch));
}