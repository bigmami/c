#include <stdio.h> 
#include <stdlib.h> 
int m, n, ans;
int gcd() { //��̤j���]��
	for (int i = 1; i < m && i < n; i++){
		if (m%i == 0 && n%i == 0)
			ans = i;

	}

}
void hw1() {


	printf("��J2�Ӿ��\n");
	scanf("%d %d", &m, &n);
	printf("gcd is%d\n", gcd());

}