#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

void ex10_8()
{
	char ch;
	printf("請輸入一個字元:");
	ch = _getche();
		printf("\n此字母的大寫是%c\n", toupper(ch));
		printf("\n此字母的小寫是%c\n", tolower(ch));
}