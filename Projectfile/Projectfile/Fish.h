#pragma once
#include <iostream>
#include "production.h"
using namespace std;
class fish :public product
{
private:
	double longliprice = 200.00;
	double longnumber = 1000;
	double nianprice = 30.00;
	double niannumber = 1000;
public:
	void show()
	{
		cout << "			g龙利鱼500g/" << longliprice << "元" << " 库存：" << longnumber << "g" << endl;
		cout << "			产地：中国 - 辽宁 - 庄河" << endl;
		cout << "   " << endl;
		cout << "			h鲶鱼500g/ " << nianprice << "元" << " 库存：" << niannumber << "g" << endl;
		cout << "			产地：中国 - 内蒙古 - 鄂尔多斯" << endl;
		cout << "   " << endl;
	}
	double price(double sum, char x)
	{
		double money = 0.00;
		if (x == 'g')
		{
			money = sum / 500.00 * longliprice;
		}
		if (x == 'h')
		{
			money = sum / 500.00 * nianprice;
		}
		return money;
	}
	void change(double sum, char x)
	{
		if (x == 'g')
		{
			longnumber -= sum;
		}
		if (x == 'h')
		{
			niannumber -= sum;

		}
	}
	int define(double g, char x)
	{
		int z = 0;
		switch (x)
		{
		case 'g':
			if (g > longnumber)
			{
				z = 1;
			}
			else
			{
				z = 0;
			}
			break;
		case 'h':
			if (g > niannumber)
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
		cout << "			g龙利鱼500g/" << longliprice << "元" << " 库存：" << longnumber << "g" << endl;
		cout << "   " << endl;
		cout << "			h鲶鱼500g/ " << nianprice << "元" << " 库存：" << niannumber << "g" << endl;
		cout << "   " << endl;
	}
	void dep(double a, char x)
	{
		if (x == 'g')
		{
			longliprice = a;

		}
		if (x == 'h')
		{
			nianprice = a;

		}
	}
	void den(double a, char x)
	{
		if (x == 'g')
		{
			longnumber = a;

		}
		if (x == 'h')
		{
			niannumber = a;

		}
	}

};
