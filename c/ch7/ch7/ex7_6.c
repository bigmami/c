#include <stdio.h>
#include <stdlib.h>
void swap(int, int); /* swap()��ƪ��쫬 */
ex7_6(){
	int a = 5, b = 20;
	printf("Before swap...");
	printf("a=%d,b=%d\n", a, b);
	swap(a, b);
	printf("After swap...");
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}
void swap(int x, int y) /* �w�qswap()��� */
{
	int tmp = x;
	x = y;
	y = tmp;
}