#pragma once
#include <iostream>
#include "production.h"
using namespace std;
class user
{
public:
	int zhanshi(int l, int x, char jishu[], double keshu[], double danbi[])
	{
		
		
		while (l != x)
		{
			
			switch (jishu[l])
			{
			case 'a':
				cout << " ���� ���� " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 'b':
				cout << " Texas ţ�� " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 'c':
				cout << " ������ �Ｙ " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 'd':
				cout << " �ɶ� ���� " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 'e':
				cout << " ���� ���� " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 'f':
				cout << " ��Զ ���� " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 'g':
				cout << " ׯ�� ������ " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 'h':
				cout << " ������˹ ���� " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;

			case 'i':
				cout << " ���� ��� " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 'j':
				cout << " ���� ���� " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 'k':
				cout << " ��ɽ �²� " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 'l':
				cout << " ���� ���� " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 'm':
				cout << " ������ �ײ� " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 'n':
				cout << " �ൺ ���� " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 'o':
				cout << " ���� ���� " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 'p':
				cout << " ��Ϫ �ҳ� " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 'q':
				cout << " ���� ɳ���� " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 'r':
				cout << " ���� �㽶 " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 's':
				cout << " Washington D.C. ƻ�� " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 't':
				cout << " ����� �� " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			case 'u':
				cout << " ��³�� ���� " << keshu[l] << "g   " << danbi[l] << "Ԫ" << endl;
				cout << "   " << endl;
				break;
			}
			
			l++;
			
		}
		return l;
	}
};