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
		cout << "			p�ҳ�500g/" << chengprice << "Ԫ" << " ��棺" << chengnumber << "g" << endl;
		cout << "			���أ��й� - ���� - ��Ϫ" << endl;
		cout << "   " << endl;
		cout << "			qɰ����500g/ " << jvprice << "Ԫ" << " ��棺" << jvnumber << "g" << endl;
		cout << "			���أ��й� - ���� - ����" << endl;
		cout << "   " << endl;
		cout << "			r�㽶500g/" << bananprice << "Ԫ" << " ��棺" << banannumber << "g" << endl;
		cout << "			���أ��й� - ���� - ����" << endl;
		cout << "   " << endl;
		cout << "			sƻ��500g/ " << appleprice << "Ԫ" << " ��棺" << applenumber << "g" << endl;
		cout << "			���أ�Washington D.C.- USA" << endl;
		cout << "   " << endl;
		cout << "			t��500g/" << pearprice << "Ԫ" << " ��棺" << pearnumber << "g" << endl;
		cout << "			���أ��й� - �½� - �����" << endl;
		cout << "   " << endl;
		cout << "			u����500g/" << puprice << "Ԫ" << " ��棺" << punumber << "g" << endl;
		cout << "			���أ��й� - �½� - ��³��" << endl;
		cout << "   " << endl;
	}
	void guanli()
	{
		cout << "			p�ҳ�500g/" << chengprice << "Ԫ" << " ��棺" << chengnumber << "g" << endl;
		cout << "   " << endl;
		cout << "			qɰ����500g/ " << jvprice << "Ԫ" << " ��棺" << jvnumber << "g" << endl;
		cout << "   " << endl;
		cout << "			r�㽶500g/" << bananprice << "Ԫ" << " ��棺" << banannumber << "g" << endl;
		cout << "   " << endl;
		cout << "			sƻ��500g/ " << appleprice << "Ԫ" << " ��棺" << applenumber << "g" << endl;
		cout << "   " << endl;
		cout << "			t��500g/" << pearprice << "Ԫ" << " ��棺" << pearnumber << "g" << endl;
		cout << "   " << endl;
		cout << "			u����500g/" << puprice << "Ԫ" << " ��棺" << punumber << "g" << endl;
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