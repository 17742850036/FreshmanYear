#pragma once
#include <iostream>
#include "production.h"
using namespace std;
class chicken :public product
{
private:
	double tuiprice = 5.66;
	double tuinumber = 1000;
	double jipaiprice = 26.80;
	double jipainumber = 1000;
public:
	void show()
	{
		cout << "			e����500g/" << tuiprice << "Ԫ" << " ��棺" << tuinumber << "g" << endl;
		cout << "			���أ��й� - ɽ�� - ����" << endl;
		cout << "   " << endl;
		cout << "			f����500g/ " << jipaiprice << "Ԫ" << " ��棺" << jipainumber << "g" << endl;
		cout << "			���أ��й� - �㶫 - ��Զ" << endl;
		cout << "   " << endl;
	}
	double price(double sum, char x)
	{
		double money = 0.00;
		if (x == 'e')
		{
			money = sum / 500.00 * tuiprice;
		}
		if (x == 'f')
		{
			money = sum / 500.00 * jipaiprice;
		}
		return money;
	}
	void change(double sum, char x)
	{
		if (x == 'e')
		{
			tuinumber -= sum;
		}
		if (x == 'f')
		{
			jipainumber -= sum;

		}
	}
	int define(double g, char x)
	{

		int z = 0;
		switch (x)
		{

		case 'e':
			if (g > tuinumber)
			{

				z = 1;

			}
			else
			{
				z = 0;
			}
			break;
		case 'f':
			if (g > jipainumber)
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
		cout << "			e����500g/" << tuiprice << "Ԫ" << " ��棺" << tuinumber << "g" << endl;
		cout << "   " << endl;
		cout << "			f����500g/ " << jipaiprice << "Ԫ" << " ��棺" << jipainumber << "g" << endl;
		cout << "   " << endl;
	}
	void dep(double a, char x)
	{
		if (x == 'e')
		{
			tuiprice = a;

		}
		if (x == 'f')
		{
			jipaiprice = a;

		}
	}
	void den(double a, char x)
	{
		if (x == 'e')
		{
			tuinumber = a;

		}
		if (x == 'f')
		{
			jipainumber = a;

		}
	}
};
