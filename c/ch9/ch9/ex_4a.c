#include <stdio.h>
#include <stdlib.h>

ex_4a(){
	struct student
	{
		char name[20];
		int score;
	};
	struct student *ptr;
	ptr = (struct student *) malloc(sizeof(struct student));
		printf("�п�J�ǥͩm�W:");
		gets(ptr->name);
		printf("�п�J�ǥͦ��Z:");
		scanf("%d", &ptr->score);
		printf("\n�ǥͪ��m�W�O%s\n", ptr->name);
		printf("���Z��%d\n", ptr->score);
}