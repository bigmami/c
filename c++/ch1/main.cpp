#include <cstdio>
#include <cstdlib>

  void main() {
	void ex1();
	void ex2();
	void ex3();
	void ex4_1();
	void ex4_2();
	void ex5();
	void ex6();
	int input;
	bool flag = 1;

	while (flag) {

		printf("-------------------------範例-------------------------\n");
		printf("1.第一支c++程式\n");
		printf("2.using namespace std的應用\n");
		printf("3.bool應用\n");
		printf("4.輸出寬度(Output Width)1\n");
		printf("5.輸出寬度(Output Width)2\n");
		printf("6.對齊方式(Alignment)\n");
		printf("7.設定精確度(Precision)\n");
		printf("請輸入要執行的範例?  , 按'0' 則結束執行!   ?    ");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			ex1();
			break;
		case 2:
			ex2();
			break;
		case 3:
			ex3();
			break;
		case 4:
			ex4_1();
			break;
		case 5:
			ex4_2();
			break;
		case 6:
			ex5();
			break;
		case 7:
			ex6();
			break;
		default:
			break;
		}

		system("pause");
		system("cls");
	}
}