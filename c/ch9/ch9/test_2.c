
#include <stdio.h>
#include <stdlib.h>
void test_2()
{
	struct order
	{
		char studentname[20]; /*產品名稱*/
		int source;    /*產品數量 */
	};
	struct order num1 = { "蕭先生",80 }; /* 以設定方式給予初值 */
	
	/* total產品總價為產品單價乘以產品數量 */
	printf("\n<< 學生成績 >>\n");
	printf("學生名稱 %s\n", num1.studentname);
	printf("分數 %d\n", num1.source);
	
}
