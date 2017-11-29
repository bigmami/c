#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
void output(char);
void ex10_3() {
	char ch;
	printf("\n\n..使用getch( )...\n");
	printf("請輸入一字元:");
	ch = _getch();
	output(ch);
	printf("\n\n...使用getche( )....\n");
	printf("請輸入一字元:");
	ch = _getche();
	output(ch);
	printf("\n\n...使用getchar( )....\n");
	printf("請輸入一字元:");
	ch = getchar();
	output(ch);
	printf("\n");
}
void output(char c){
	printf("\n使用putchar(  )輸出字元:");
		putchar(c);
}