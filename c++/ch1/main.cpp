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

		printf("-------------------------�d��-------------------------\n");
		printf("1.�Ĥ@��c++�{��\n");
		printf("2.using namespace std������\n");
		printf("3.bool����\n");
		printf("4.��X�e��(Output Width)1\n");
		printf("5.��X�e��(Output Width)2\n");
		printf("6.����覡(Alignment)\n");
		printf("7.�]�w��T��(Precision)\n");
		printf("�п�J�n���檺�d��?  , ��'0' �h��������!   ?    ");
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