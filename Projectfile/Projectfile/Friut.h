#pragma once
#pragma once
#include <iostream>
#include "production.h"
using namespace std;
class friut :public product
{
private:
	double chengprice = 74.56;
	double chengnumber = 1000;
	double jvprice = 2.50;
	double jvnumber = 1000;
	double bananprice = 3.00;
	double banannumber = 1000;
	double appleprice = 4.40;
	double applenumber = 1000;
	double pearprice = 3.25;
	double pearnumber = 1000;
	double puprice = 4.36;
	double  punumber = 1000;
public:
	void show()
	{
		cout << "			p褚橙500g/" << chengprice << "元" << " 库存：" << chengnumber << "g" << endl;
		cout << "			产地：中国 - 云南 - 玉溪" << endl;
		cout << "   " << endl;
		cout << "			q砂糖橘500g/ " << jvprice << "元" << " 库存：" << jvnumber << "g" << endl;
		cout << "			产地：中国 - 广西 - 梧州" << endl;
		cout << "   " << endl;
		cout << "			r香蕉500g/" << bananprice << "元" << " 库存：" << banannumber << "g" << endl;
		cout << "			产地：中国 - 海南 - 澄迈" << endl;
		cout << "   " << endl;
		cout << "			s苹果500g/ " << appleprice << "元" << " 库存：" << applenumber << "g" << endl;
		cout << "			产地：Washington D.C.- USA" << endl;
		cout << "   " << endl;
		cout << "			t梨500g/" << pearprice << "元" << " 库存：" << pearnumber << "g" << endl;
		cout << "			产地：中国 - 新疆 - 库尔勒" << endl;
		cout << "   " << endl;
		cout << "			u葡萄500g/" << puprice << "元" << " 库存：" << punumber << "g" << endl;
		cout << "			产地：中国 - 新疆 - 吐鲁番" << endl;
		cout << "   " << endl;
	}
	void guanli()
	{
		cout << "			p褚橙500g/" << chengprice << "元" << " 库存：" << chengnumber << "g" << endl;
		cout << "   " << endl;
		cout << "			q砂糖橘500g/ " << jvprice << "元" << " 库存：" << jvnumber << "g" << endl;
		cout << "   " << endl;
		cout << "			r香蕉500g/" << bananprice << "元" << " 库存：" << banannumber << "g" << endl;
		cout << "   " << endl;
		cout << "			s苹果500g/ " << appleprice << "元" << " 库存：" << applenumber << "g" << endl;
		cout << "   " << endl;
		cout << "			t梨500g/" << pearprice << "元" << " 库存：" << pearnumber << "g" << endl;
		cout << "   " << endl;
		cout << "			u葡萄500g/" << puprice << "元" << " 库存：" << punumber << "g" << endl;
		cout << "   " << endl;
	}
	void dep(double a, char x)
	{
		if (x == 'p')
		{
			chengprice = a;

		}
		if (x == 'q')
		{
			jvprice = a;

		}
		if (x == 'r')
		{
			bananprice = a;

		}
		if (x == 's')
		{
			appleprice = a;

		}
		if (x == 't')
		{
			pearprice = a;

		}
		if (x == 'u')
		{
			puprice = a;

		}

	}
	void den(double a, char x)
	{
		if (x == 'p')
		{
			chengnumber = a;

		}
		if (x == 'q')
		{
			jvnumber = a;

		}
		if (x == 'r')
		{
			banannumber = a;

		}
		if (x == 's')
		{
			applenumber = a;

		}
		if (x == 't')
		{
			pearnumber = a;

		}
		if (x == 'u')
		{
			punumber = a;

		}
	}
	double price(double sum, char x)
	{
		double money = 0.00;
		if (x == 'p')
		{
			money = sum / 500.00 * chengprice;
		}
		if (x == 'q')
		{
			money = sum / 500.00 * jvprice;
		}
		if (x == 'r')
		{
			money = sum / 500.00 * chengprice;
		}
		if (x == 's')
		{
			money = sum / 500.00 * jvprice;
		}
		if (x == 't')
		{
			money = sum / 500.00 * pearprice;
		}
		if (x == 'u')
		{
			money = sum / 500.00 * puprice;
		}
		return money;
	}
	void change(double sum, char x)
	{
		if (x == 'p')
		{
			chengnumber -= sum;
		}
		if (x == 'q')
		{
			jvnumber -= sum;

		}
		if (x == 'r')
		{
			banannumber -= sum;
		}
		if (x == 's')
		{
			applenumber -= sum;

		}
		if (x == 't')
		{
			pearnumber -= sum;
		}
		if (x == 'u')
		{
			punumber -= sum;

		}
	}
	int define(double g, char x)
	{
		int z;
		switch (x)
		{
		case 'p':
			if (g > chengnumber)
			{
				z = 1;
			}
			else
			{
				z = 0;
			}
			break;
		case 'q':
			if (g > jvnumber)
			{
				z = 1;
			}
			else
			{
				z = 0;
			}
			break;
		case 'r':
			if (g > banannumber)
			{
				z = 1;
			}
			else
			{
				z = 0;
			}
			break;
		case 's':
			if (g > applenumber)
			{
				z = 1;
			}
			else
			{
				z = 0;
			}
			break;
		case 't':
			if (g > pearnumber)
			{
				z = 1;
			}
			else
			{
				z = 0;
			}
			break;

		case 'u':
			if (g > punumber)
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