#include <stdio.h> 
#include <stdlib.h>
char change(char);
void test_1(){
	char a = 'x';
	char b = 'A';
	char c = 'b';
	char d = 'C';
	//scanf("%c",a);
	change(a);
	change(b);
	change(c);
	change(d);
	printf("%c", change(a));
	printf("%c", change(b));
	printf("%c", change(c));
	printf("%c", change(d));
	//return 0;
	//system("pause");
}

char change(char ch){
	return	(ch>91) ? ch - 32 : ch + 32;
}