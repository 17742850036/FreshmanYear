#pragma once
#include <iostream>
#include "production.h"
using namespace std;
class SCREEN
{
public:
	void screen()
	{
		cout << "   " << endl;
		cout << "   " << endl;
		cout << "					��ӭ" << endl;
		cout << "   " << endl;
		cout << " ���۲�Ʒ��" << endl;
		cout << "   " << endl;
		cout << " ���� " << endl;
		cout << " �߲��� " << endl;
		cout << " ˮ���� " << endl;
		cout << "   " << endl;
		cout << " �������Ҫ�����Ʒ��ظ�1�����蹺����ظ�0������Ա��ظ�2 " << endl;
		cout << "   " << endl;
	}

	void buy()
	{
		cout << "�����빺�������";
	}
	void choice()
	{
		cout << "������һ���ظ�Z,���蹺���������Ӧ��ĸ ";
	}
	void meat()
	{
		cout << "Aţ�� B���� C���� D���⣬���蹺����ظ���Ӧ��ĸ��������һ����ظ�F" << endl;
		cout << "   " << endl;

	}
	void support()
	{
		cout << "���蹺����ظ���Ӧ��ĸ��������һ����ظ�F" << endl;
	}
};