#include <iostream>
#include<iomanip>
using namespace std;

void ex4_1(){
	int ix = 125;
	float fy = 12.345f;
	cout << "1234567890 字元個數對照用" << endl;
	cout.width(10); cout << ix << endl;
	cout << setw(10) << fy << endl;
}