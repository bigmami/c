#include <stdio.h>
#include <stdlib.h>

void ex8_5(){
	char *str[4] = { "Department", "of", "Informantion", "Management" };
	printf("*str=%p\n", *str);
	printf("**str=%c\n", **str);
	printf("*(str+2)=%p\n", *(str + 2));
	printf("**(str+2)=%p\n", **(str + 2));
	printf("*(str+2)=%p\n", *str + 2);
	printf("**(str+2)=%c\n", *(*str + 2));
}