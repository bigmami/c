#include <stdio.h>
#include <stdlib.h>

void ex1a() {
	struct student
	{
		char name[20];
		int score;

	}rec1;
	struct student rec2;
	printf("rec1µ²ºc¦û%dbytes\n", sizeof(rec1));
	printf("rec2 µ²ºc¦û %d bytes\n", sizeof(rec2));
}