#include <stdio.h>
#include <stdlib.h>
void test_1()
{
	/* �ŧi���ctriangle�����A�A�H�����B��l" . "�s�����c���� */
	struct square
	{
		int length;	      
		double area;	   
	};
	struct square squ;
	printf("�п�J�����Ϊ���: ");
	scanf("%d", &squ.length);  /* �Htri.length�s�����c����length */
	squ.area = squ.length *squ.length ; /*�Htri.area �s�����c����area*/
	printf("�T���Ϊ����n��: %lf\n", squ.area);

}