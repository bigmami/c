#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

void ex10_7()
{
	char ch;
	printf("�п�J�@�Ӧr��:");
	ch = _getche();
	if (isupper(ch))
		printf("\n%c�O�j�g�^��r��\n", ch);
	else if (islower(ch))
		printf("\n%c�O�p�g�^��r��\n", ch);
	else
		printf("\n%c ���O�^��r��\n", ch);
}