
#include <stdio.h>
#include <stdlib.h>
void test_3()
{
	struct order
	{
		char product[20]; /*產品名稱*/
		double price;    /*產品單價*/
		int quantity;    /*產品數量 */
	};
	struct order num[5];
	int i;
	double sum;
 /* 以設定方式給予初值 */

	double total[5];
	for (i = 1; i <= 5; i++){
		printf("請輸入產品名稱: ");
		scanf("%s", num[i].product);
		printf("請輸入產品價格: ");
		scanf("%lf", &num[i].price);
		printf("請輸入訂購數量: ");
		scanf("%d", &num[i].quantity);
		total[i] = num[i].price * num[i].quantity;
		printf("\n<< 定單列表 >>\n");
		printf("產品名稱: %s\n", num[i].product);
		printf("價格: %.1f\n", num[i].price);
		printf("數量: %d\n", num[i].quantity);
		printf("總共價格: %.1f\n\n", total[i]);
		
		
		
	}
	/* total產品總價為產品單價乘以產品數量 */
	sum += total[i];
	printf("所有商品總價格: %.1f\n\n", sum);

}
