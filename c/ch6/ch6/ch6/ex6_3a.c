
#include <stdio.h>
#include <stdlib.h>
int square1(int); 
int ex6_3a()
{
	int num, ans;
	printf("�p��Y�@��ƪ�����\n\n");
	printf("�п�J�@���: ");
	scanf("%d", &num);
	ans = square1(num);  
	printf("%d ������O %d\n", num, ans);
	system("PAUSE");
	return 0;
}
int square1(n)
{
	int total;
	total = n*n;
	return  total; 
}
