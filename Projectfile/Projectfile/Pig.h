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
		cout << "			c里脊500g/" << lijiprice << "元" << " 库存：" << lijinumber << "g" << endl;
		cout << "			产地：中国 - 黑龙江 - 哈尔滨" << endl;
		cout << "   " << endl;
		cout << "			d猪排500g/ " << zhupaiprice << "元" << " 库存：" << zhupainumber << "g" << endl;
		cout << "			产地：中国 - 四川 - 成都" << endl;
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
		int z = 0;//初始化
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
		cout << "			c里脊500g/" << lijiprice << "元" << " 库存：" << lijinumber << "g" << endl;
		cout << "   " << endl;
		cout << "			d猪排500g/ " << zhupaiprice << "元" << " 库存：" << zhupainumber << "g" << endl;
		cout << "   " << endl;
	}
};