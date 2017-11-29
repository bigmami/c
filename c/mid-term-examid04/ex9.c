#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void ex9() {
	char *arr = "HELLOWORLD";
	char s[15];
	int i = 0;
	do {
		s[i] = tolower(*arr);
		arr++;
		i++;
	} while (*arr != '\0');
	printf("%s\n", s);

}