#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

void ex10_6()
{
	char ch;
	printf("請輸入一個字元:");
	ch = _getche();
	if (isalpha(ch))
		printf("\n%c是一英文字母\n", ch);
	else if (isdigit(ch))
		printf("\n%c是數字\n", ch);
	else
		printf("\n%c 不是一英文字母或數字\n", ch);
}