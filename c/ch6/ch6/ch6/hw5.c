#include <stdio.h>
#include <stdlib.h>
void counter();
void hw5()
{
	printf("�I�s�禡,�N�|�p�⦸��\n");
	counter();
}
void counter(void)
{
	static int c=1;
	printf("counter()�w�g�I�s%d��\n", c++);
	
	}

