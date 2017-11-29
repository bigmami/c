#include <stdlib.h>
#include <stdio.h>
void ex7_4d()
{
	int i, j, temp, flag, size, b;
	int left, right, mid, kd, bingo;
	int arr[] = { 80, 50, 40, 35, 20, 60 };
	printf("請輸入一筆資料\n");
	scanf("%d", &b);
	size = sizeof(arr) / sizeof(int);

	/**********Bubble sort*************/
	for (i = 0; i < size - 1; i++) {
		flag = 0;
		for (j = 0; j<size - i - 1; j++)
		if (arr[j] > arr[j + 1]) {
			flag = 1;
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
		if (flag == 0)
			break;
	}
	for (i = 0; i <= size - 1; i++)
		printf("%d ", arr[i]);
	printf("\n");
	/***********Binary search***********/
	printf("你要尋找那一個數字(輸入是英文字母結束程式): ");
	if (b == arr[]){
		while (scanf("%d", &kd) == 1) {
			left = 0;
			right = size - 1;
			bingo = 0;
			while (left <= right) {
				mid = (left + right) / 2;
				if (kd == arr[mid]) {
					bingo = 1;
					break;
				}
				if (kd < arr[mid])
					right = mid - 1;
				else
					left = mid + 1;
			}
			if (bingo == 1)
				printf("在 arr[%d] 找到 %d.\n", mid, kd);
			else
				printf("對不起，查無此資料! \n");
			printf("\n您要尋找那一個數字(輸入是英文字母將結束): ");
		}

	}
	else printf("輸入錯誤請重新輸入\n");
}
