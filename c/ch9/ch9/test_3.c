
#include <stdio.h>
#include <stdlib.h>
void test_3()
{
	struct order
	{
		char product[20]; /*���~�W��*/
		double price;    /*���~���*/
		int quantity;    /*���~�ƶq */
	};
	struct order num[5];
	int i;
	double sum;
 /* �H�]�w�覡������� */

	double total[5];
	for (i = 1; i <= 5; i++){
		printf("�п�J���~�W��: ");
		scanf("%s", num[i].product);
		printf("�п�J���~����: ");
		scanf("%lf", &num[i].price);
		printf("�п�J�q�ʼƶq: ");
		scanf("%d", &num[i].quantity);
		total[i] = num[i].price * num[i].quantity;
		printf("\n<< �w��C�� >>\n");
		printf("���~�W��: %s\n", num[i].product);
		printf("����: %.1f\n", num[i].price);
		printf("�ƶq: %d\n", num[i].quantity);
		printf("�`�@����: %.1f\n\n", total[i]);
		
		
		
	}
	/* total���~�`�������~������H���~�ƶq */
	sum += total[i];
	printf("�Ҧ��ӫ~�`����: %.1f\n\n", sum);

}
