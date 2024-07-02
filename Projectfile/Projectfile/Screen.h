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
		cout << "					欢迎" << endl;
		cout << "   " << endl;
		cout << " 销售产品：" << endl;
		cout << "   " << endl;
		cout << " 肉类 " << endl;
		cout << " 蔬菜类 " << endl;
		cout << " 水果类 " << endl;
		cout << "   " << endl;
		cout << " 如果您需要购买产品请回复1，无需购买请回复0。管理员请回复2 " << endl;
		cout << "   " << endl;
	}

	void buy()
	{
		cout << "请输入购买克数：";
	}
	void choice()
	{
		cout << "返回上一级回复Z,如需购买请输入对应字母 ";
	}
	void meat()
	{
		cout << "A牛肉 B猪肉 C鸡肉 D鱼肉，如需购买请回复对应字母，返回上一级请回复F" << endl;
		cout << "   " << endl;

	}
	void support()
	{
		cout << "如需购买请回复对应字母，返回上一级请回复F" << endl;
	}
};