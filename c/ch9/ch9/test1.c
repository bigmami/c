#include <stdio.h>
#include <stdlib.h>
void test_1()
{
	/* 宣告結構triangle的型態，以成員運算子" . "存取結構成員 */
	struct square
	{
		int length;	      
		double area;	   
	};
	struct square squ;
	printf("請輸入正角形的長: ");
	scanf("%d", &squ.length);  /* 以tri.length存取結構成員length */
	squ.area = squ.length *squ.length ; /*以tri.area 存取結構成員area*/
	printf("三角形的面積為: %lf\n", squ.area);

}