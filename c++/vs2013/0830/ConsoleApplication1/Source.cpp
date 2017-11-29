#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
main(void)
{
	int sum= 0;
	for (int i = 0; i < 10; i++)
		sum += i;
	cout << "12%4" << 12 % 4 << endl;
	cout << "12%5" << 12 % 5 << endl;
	cout << "12%16" << 12 % 16 << endl;
	system("pause");
	return 0;
}