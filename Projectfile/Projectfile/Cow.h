#pragma once
#include <iostream>
#include "production.h"
using namespace std;
class cow : public product
{
private:
	double diaoprice = 98.00;
	double diaonumber = 100;
	double paiprice = 90.00;
	double painumber = 50;
public:
	void show()
	{
		cout << "			a����500g/" << diaoprice << "Ԫ" << " ��棺" << diaonumber << "g" << endl;
		cout << "			���أ��й� - �㶫 - ����" << endl;
		cout << "   " << endl;
		cout << "			bţ��500g/" << paiprice << "Ԫ" << " ��棺" << painumber << "g" << endl;
		cout << "			���أ� State of Texas - USA" << endl;
		cout << "   " << endl;
	}
	double price(double sum, char x)
	{
		double money = 0.00;
		if (x == 'a')
		{
			money = sum / 500.00 * diaoprice;

		}
		if (x == 'b')
		{
			money = sum / 500.00 * paiprice;

		}
		return money;
	}
	void change(double sum, char x)
	{
		if (x == 'a')
		{
			diaonumber -= sum;
		}
		if (x == 'b')
		{
			painumber -= sum;

		}


	}
	int define(double g, char x)
	{
		int z;
		switch (x)
		{
		case 'a':
			if (g > diaonumber)
			{
				z = 1;
			}
			else
			{
				z = 0;
			}
			break;
		case 'b':
			if (g > painumber)
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
		cout << "			a����500g / " << diaoprice << "Ԫ" << " ��棺" << diaonumber << "g" << endl;
		cout << "   " << endl;
		cout << "			bţ��500g/" << paiprice << "Ԫ" << " ��棺" << painumber << "g" << endl;
		cout << "   " << endl;
	}
	void dep(double a, char x)
	{
		if (x == 'a')
		{
			diaoprice = a;

		}
		if (x == 'b')
		{
			paiprice = a;

		}
	}
	void den(double a, char x)
	{
		if (x == 'a')
		{
			diaonumber = a;

		}
		if (x == 'b')
		{
			painumber = a;

		}
	}
};
