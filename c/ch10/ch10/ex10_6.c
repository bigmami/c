#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

void ex10_6()
{
	char ch;
	printf("�п�J�@�Ӧr��:");
	ch = _getche();
	if (isalpha(ch))
		printf("\n%c�O�@�^��r��\n", ch);
	else if (isdigit(ch))
		printf("\n%c�O�Ʀr\n", ch);
	else
		printf("\n%c ���O�@�^��r���μƦr\n", ch);
}