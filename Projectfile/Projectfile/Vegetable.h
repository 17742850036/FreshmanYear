#pragma once
#include <iostream>
#include "production.h"
using namespace std;
class vegetable :public product
{
private:
	double congprice = 1.26;
	double congnumber = 1000;
	double suanprice = 2.00;
	double suannumber = 1000;
	double jiuprice = 3.00;
	double jiunumber = 1000;
	double tuprice = 2.00;
	double tunumber = 1000;
	double baiprice = 0.59;
	double bainumber = 1000;
	double boprice = 1.36;
	double bonumber = 1000;
	double shenprice = 2.68;
	double shennumber = 1000;

public:
	void show()
	{
		cout << "			i大葱500g/" << congprice << "元" << " 库存：" << congnumber << "g" << endl;
		cout << "			产地：中国 - 山东 - 铁岭 " << endl;
		cout << "   " << endl;
		cout << "			j大蒜500g/ " << suanprice << "元" << " 库存：" << suannumber << "g" << endl;
		cout << "			产地：中国 - 山东 - 金乡" << endl;
		cout << "   " << endl;
		cout << "			k韭菜500g/" << jiuprice << "元" << " 库存：" << jiunumber << "g" << endl;
		cout << "			产地：中国 - 甘肃 - 武山 " << endl;
		cout << "   " << endl;
		cout << "			l土豆500g/ " << tuprice << "元" << " 库存：" << tunumber << "g" << endl;
		cout << "			产地：中国 - 甘肃 - 定西" << endl;
		cout << "   " << endl;
		cout << "			m白菜500g/" << baiprice << "元" << " 库存：" << bainumber << "g" << endl;
		cout << "			产地：中国 - 黑龙江 - 哈尔滨 " << endl;
		cout << "   " << endl;
		cout << "			n菠菜500g/ " << boprice << "元" << " 库存：" << bonumber << "g" << endl;
		cout << "			产地：中国 - 山东 - 青岛" << endl;
		cout << "   " << endl;
		cout << "			o生菜500g/ " << shenprice << "元" << " 库存：" << shennumber << "g" << endl;
		cout << "			产地：中国 - 四川 - 彭州" << endl;
		cout << "   " << endl;
	}
	void guanli()
	{
		cout << "			i大葱500g/" << congprice << "元" << " 库存：" << congnumber << "g" << endl;
		cout << "   " << endl;
		cout << "			j大蒜500g/ " << suanprice << "元" << " 库存：" << suannumber << "g" << endl;
		cout << "   " << endl;
		cout << "			k韭菜500g/" << jiuprice << "元" << " 库存：" << jiunumber << "g" << endl;
		cout << "   " << endl;
		cout << "			l土豆500g/ " << tuprice << "元" << " 库存：" << tunumber << "g" << endl;
		cout << "   " << endl;
		cout << "			m白菜500g/" << baiprice << "元" << " 库存：" << bainumber << "g" << endl;
		cout << "   " << endl;
		cout << "			n菠菜500g/ " << boprice << "元" << " 库存：" << bonumber << "g" << endl;
		cout << "   " << endl;
		cout << "			o生菜500g/ " << shenprice << "元" << " 库存：" << shennumber << "g" << endl;
		cout << "   " << endl;
	}
	void dep(double a, char x)
	{
		if (x == 'i')
		{
			congprice = a;

		}
		if (x == 'j')
		{
			suanprice = a;

		}
		if (x == 'k')
		{
			jiuprice = a;

		}
		if (x == 'l')
		{
			tuprice = a;

		}
		if (x == 'm')
		{
			baiprice = a;

		}
		if (x == 'n')
		{
			boprice = a;

		}
		if (x == 'o')
		{
			shenprice = a;

		}
	}
	void den(double a, char x)
	{
		if (x == 'i')
		{
			congnumber = a;

		}
		if (x == 'j')
		{
			suannumber = a;

		}
		if (x == 'k')
		{
			jiunumber = a;

		}
		if (x == 'l')
		{
			tunumber = a;

		}
		if (x == 'm')
		{
			bainumber = a;

		}
		if (x == 'n')
		{
			bonumber = a;

		}
		if (x == 'o')
		{
			shennumber = a;

		}
	}
	double price(double sum, char x)
	{
		double money = 0.00;
		if (x == 'i')
		{
			money = sum / 500.00 * congprice;
		}
		if (x == 'j')
		{
			money = sum / 500.00 * suanprice;
		}
		if (x == 'k')
		{
			money = sum / 500.00 * jiuprice;
		}
		if (x == 'l')
		{
			money = sum / 500.00 * tuprice;
		}
		if (x == 'm')
		{
			money = sum / 500.00 * baiprice;
		}
		if (x == 'n')
		{
			money = sum / 500.00 * boprice;
		}
		if (x == 'o')
		{
			money = sum / 500.00 * shenprice;
		}
		return money;
	}
	void change(double sum, char x)
	{
		if (x == 'i')
		{
			congnumber -= sum;
		}
		if (x == 'j')
		{
			suannumber -= sum;

		}
		if (x == 'k')
		{
			jiunumber -= sum;
		}
		if (x == 'l')
		{
			tunumber -= sum;

		}
		if (x == 'm')
		{
			bainumber -= sum;
		}
		if (x == 'n')
		{
			bonumber -= sum;

		}
		if (x == 'o')
		{
			shennumber -= sum;
		}


	}
	int define(double g, char x)
	{
		int z;
		switch (x)
		{
		case 'i':
			if (g > congnumber)
			{
				z = 1;
			}
			else
			{
				z = 0;
			}
			break;
		case 'j':
			if (g > suannumber)
			{
				z = 1;
			}
			else
			{
				z = 0;
			}
			break;
		case 'k':
			if (g > jiunumber)
			{
				z = 1;
			}
			else
			{
				z = 0;
			}
			break;
		case 'l':
			if (g > tunumber)
			{
				z = 1;
			}
			else
			{
				z = 0;
			}
			break;
		case 'm':
			if (g > bainumber)
			{
				z = 1;
			}
			else
			{
				z = 0;
			}
			break;

		case 'n':
			if (g > bonumber)
			{
				z = 1;
			}
			else
			{
				z = 0;
			}
			break;

		case 'o':
			if (g > shennumber)
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
};