
#include <stdio.h>
#include <stdlib.h>
void test_2()
{
	struct order
	{
		char studentname[20]; /*���~�W��*/
		int source;    /*���~�ƶq */
	};
	struct order num1 = { "������",80 }; /* �H�]�w�覡������� */
	
	/* total���~�`�������~������H���~�ƶq */
	printf("\n<< �ǥͦ��Z >>\n");
	printf("�ǥͦW�� %s\n", num1.studentname);
	printf("���� %d\n", num1.source);
	
}
