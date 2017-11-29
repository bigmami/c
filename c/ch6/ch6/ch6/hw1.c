#include <stdio.h> 
#include <stdlib.h> 
int m, n, ans;
int gcd() { //找最大公因數
	for (int i = 1; i < m && i < n; i++){
		if (m%i == 0 && n%i == 0)
			ans = i;

	}

}
void hw1() {


	printf("輸入2個整數\n");
	scanf("%d %d", &m, &n);
	printf("gcd is%d\n", gcd());

}