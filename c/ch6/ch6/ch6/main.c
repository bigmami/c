#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex6_1a();
void ex6_2a();
void ex6_2b();
void ex6_3a();
void ex6_3b();
void ex6_3c();
void ex6_4a();
void ex6_4b();
void ex6_4c();
void ex6_5a();
void ex6_5b();
void test();
void test3();
void test4();
void test5();
void test6();
void test7();
void hw1();
void hw1_1();
void hw2();
void hw3();
void hw4();
void hw4_1();
void hw5();


void main(){

	int input;
	_Bool flag = 1;

	while (flag){
		printf("-------------------------�d��-------------------------\n");
		printf("1.ex6_1a\n");
		printf("2.ex6_2a\n");
		printf("3.ex6_2b\n");
		printf("4.ex6_3a\n");
		printf("5.ex6_3b\n");
		printf("6.ex6_3c\n");
		printf("7.ex6_4a\n");
		printf("8.ex6_4b\n");
		printf("9.ex6_4c\n");
		printf("10.ex6_5a\n");
		printf("11.ex6_5b\n");
		printf("-------------------------�m��-------------------------\n");
		printf("12.�ۭq�禡����\n");
		printf("13.���g�@�{��, �{�����w�q�@��� calculate(), �n�D�ϥΪ̿�J��Ƹ��, �A�P�_����ƬO�_�j��ε��� 60, �H�K�L�X pass�� down\n");
		printf("14.���g�@�{��,�p�����Ϊ����P�e\n");
		printf("15.���g�@�{��,�^�ǵ����\n");
		printf("16.�ϩw�q�G�Ө��,�@���L�X�T�Ӿ�ƪ��̤j��,�G���L�X�T�ӥ��ƪ��̤p��\n");
		printf("17.�q�Ʀr�C��\n");
		printf("-------------------------�@�~-------------------------\n");
		printf("18.�Q�λ��j�� gcd(�̤j���]��)\n");
		printf("19.�D���j��ƨD��ƪ� gcd(�̤j���]��)\n");
		printf("20.�]�p�@�q�Ʀr�C��, ���w�q init ��� t ���o����, �A�w�q getans ���,���o�ϥΪ̿�J������, �̫�A�w�q compare ���, ������׬O�_���T\n");
		printf("21.�ϩw�q�G�Ө��, �@���L�X�T�Ӿ�ƪ��̤j��, �G���L�X�T�Ӿ�ƪ��̤p��\n");
		printf("22.�O��ƦC�D���j\n");
		printf("23.�O��ƦC���j\n");
		printf("24.�s���@������, �ҷ|���Ѩ�ثe��������Q�s�����H��, �եH static �x�s���O���Ƥ��]�p�@�p�ƾ�, �C��I�s�Ө��, �p�ƾ����ȳ��n�۰ʲ֥[, �̫��X�Ө�ƳQ�I�s������\n");
		printf("----------------------------------------------------\n");
		printf("�п�J�n���檺�d��?  1 ~6, ��'0' �h��������!   ?    ");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			ex6_1a();
			break;

		case 2:
			ex6_2a();
			break;

		case 3:
			ex6_2b();
			break;

		case 4:
			ex6_3a();
			break;
		case 5:
			ex6_3b();
			break;

		case 6:
			ex6_3c();
			break;
		case 7:
			ex6_4a();
			break;

		case 8:
			ex6_4b();
			break;

		case 9:
			ex6_4c();
			break;

		case 10:
			ex6_5a();
			break;

		case 11:
			ex6_5b();
			break;
		case 12:
			test();
			break;
		case 13:
			test3();
			break;
		case 14:
			test4();
			break;
		case 15:
			test5();
			break;
		case 16:
			test6();
			break;
		case 17:
			test7();
			break;
		case 18:
			hw1();
			break;
		case 19:
			hw1_1();
			break;
		case 20:
			hw2();
			break;
		case 21:
			hw3();
			break;
		case 22:
			hw4();
			break;
		case 23:
			hw4_1();
			break;
		case 24:
			hw5();
			break;
		default:
			break;
		}

		system("pause");
		system("cls");
	}



}