#pragma once
#include <iostream>
#include "production.h"
using namespace std;
class pig :public product
{
private:
	double lijiprice = 21.50;
	double lijinumber = 1000;
	double zhupaiprice = 19.00;
	double zhupainumber = 1000;
public:
	void show()
	{
		cout << "			c�Ｙ500g/" << lijiprice << "Ԫ" << " ��棺" << lijinumber << "g" << endl;
		cout << "			���أ��й� - ������ - ������" << endl;
		cout << "   " << endl;
		cout << "			d����500g/ " << zhupaiprice << "Ԫ" << " ��棺" << zhupainumber << "g" << endl;
		cout << "			���أ��й� - �Ĵ� - �ɶ�" << endl;
		cout << "   " << endl;
	}
	void dep(double a, char x)
	{
		if (x == 'c')
		{
			lijiprice = a;

		}
		if (x == 'd')
		{
			zhupaiprice = a;

		}
	}
	void den(double a, char x)
	{
		if (x == 'c')
		{
			lijinumber = a;

		}
		if (x == 'd')
		{
			zhupainumber = a;

		}
	}
	double price(double sum, char x)
	{
		double money = 0.00;
		if (x == 'c')
		{
			money = sum / 500.00 * lijiprice;
		}
		if (x == 'd')
		{
			money = sum / 500.00 * zhupaiprice;
		}
		return money;
	}
	void change(double sum, char x)
	{
		if (x == 'c')
		{
			lijinumber -= sum;
		}
		if (x == 'd')
		{
			zhupainumber -= sum;

		}
	}
	int define(double g, char x)
	{
		int z = 0;//��ʼ��
		switch (x)
		{
		case 'c':
			if (g > lijinumber)
			{
				z = 1;

			}
			else
			{
				z = 0;

			}
			break;
		case 'd':
			if (g > zhupainumber)
			{
				z = 1;
			}
			else
			{
				z = 0;
			}
			break;
		}
		return z;

	}
	void guanli()
	{
		cout << "			c�Ｙ500g/" << lijiprice << "Ԫ" << " ��棺" << lijinumber << "g" << endl;
		cout << "   " << endl;
		cout << "			d����500g/ " << zhupaiprice << "Ԫ" << " ��棺" << zhupainumber << "g" << endl;
		cout << "   " << endl;
	}
};