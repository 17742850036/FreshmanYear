#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctime>
#include <sstream>
#include "Chicken.h"
#include "Cow.h"
#include "Fish.h"
#include "Friut.h"
#include "Pig.h"
#include "production.h"
#include "Screen.h"
#include "user.h"
#include "Vegetable.h"
#include "Selfdefinite.h"
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
int chushi = 0;
ofstream file;
ifstream infile;
selfdefinite buchong1;
cow daniu;
pig xiaozhu;
chicken xiaoji;
fish yv;
vegetable cai;
friut guo;
SCREEN pingmu;
user USE;
void getlline()
{
	ifstream Readfile;
	
	string tmp;
	Readfile.open("test.txt", ios::in);//ios::in ��ʾ��ֻ���ķ�ʽ��ȡ�ļ�
	
		while (getline(Readfile, tmp, '\n'))
		{
			chushi++;
		}
		Readfile.close();
	
}
void getinformation()
{
	if (chushi == 0)
	{

	}
	else
	{
		infile.open("test.txt");
		for (int ceshi = 0; ceshi < chushi; ceshi++)
		{
			infile >> buchong1.buchong[ceshi].number >> buchong1.buchong[ceshi].name >> buchong1.buchong[ceshi].price >> buchong1.buchong[ceshi].remain;

		}
		infile.close();
	}
}
int main()
{
	getlline();
	getinformation();
	int ceshi;
	char add;
	int zj;//zengjia
	double buybuchong;
	int x11 = 0;
	long long now = time(0);
	tm* gmtm = gmtime(&now);
	double shouru = 0.00;
	int z = 0;	
	char zhanghao[100] = { "xiaozhu" };
	char mima[100] = { "123456" };//λ��initalǰ��Ȼ�޸ĺ��ֶ���Ϊ123456
	char jishu[100] = { "0" };//�޸Ĵ�ini֮ǰ
	int x = 0, y = 0, k = 0;//���ڶ�Ӧ����
	int l = 0;//����ʱ����ѭ�����
	double danbi[100] = { 0 };//��¼��������
	double keshu[100] = { 0 };//��¼��Ӧ�������
	char zaibuybianhao[100] = { '0' };
	double zaibaidanjian[100] = { 0 };
	double zaibaikeshu[100] = { 0 };
	int X1 = 0, Y1 = 0, K1 = 0;
inital:
	pingmu.screen();
	char f = 0;
	char b;
	double g = 0;
	double totalp = 0.00;
	char* p = &mima[0];
	double j;
	cin >> f;
	system("cls");
	if (f == '1')
	{
	LOOP:
		cout << " ���������Ʒ��ظ�1�������߲�����ظ�2������ˮ������ظ�3������������Ʒ��ظ�4�����������ظ�5��   " << endl;//�޸�ǰ��ѭ���ڲ����ظ����ָ�����������Ӿ�ƣ��
		cout << "   " << endl;
		while (1)
		{

			cin >> f;
			system("cls");
			if (f == '1')//������������
			{
			FIRST:
				pingmu.meat();//Aţ�� B���� C���� D���⣬���蹺����ظ���Ӧ��ĸ��������һ����ظ�F				
				cin >> b;
				system("cls");//
				if (b == 'A')
				{
					
				Buy:
					
				SECOND://������λ��
					daniu.show();//a���� bţ��2��
					pingmu.choice();//������һ���ظ�Z,���蹺���������Ӧ��ĸ
					cin >> b;
					//λ�ó����¼z���۸���ʾ0
					if (b == 'Z')
					{
						system("cls");//
						goto FIRST;
						
					}
					else if (b == 'a' || b == 'b')
					{
						pingmu.buy(); //�����빺�������
						cin >> g;
						system("cls");//
						if (g == 0 || g < 0)
						{
							system("cls");///////////////
							cout << "		�Ƿ����롣" << endl;
							cout << " " << endl;
							system("pause");/////////////
							system("cls");///////////////
							goto SECOND;
						}
						else //��ֹ��������������
						{
							if (daniu.define(g, b))
							{
								cout << "   " << endl;
								cout << "��Ǹ����޷������������������������롣" << endl;
								system("pause");////////////////////
								system("cls");//////////////////////////
								goto Buy;
							}
							else
							{
								jishu[x] = b;
								x++;
								keshu[y] = g;
								y++;
								daniu.change(g, b);
								danbi[k] = daniu.price(g, b);
								k++;
								totalp += daniu.price(g, b);
								cout << "���ѹ���ɹ�����������: " << daniu.price(g, b) << "Ԫ" << " �ۼ����ѣ�" << totalp << "Ԫ" << endl;
								cout << "   " << endl;						
								goto Buy;
							}
						}
					}
					else
					{

						system("cls");
						cout << "		�Ƿ����롣" << endl;
						cout << " " << endl;
						system("pause");////////////////
						system("cls");////////
						goto SECOND;
					}
				}
				else if (b == 'B')
				{
				BUy:
					
				sECOND://������λ�ý�������Ȼ�����Ļ��ʾ����
					xiaozhu.show();
					pingmu.choice();//������һ���ظ�Z,���蹺���������Ӧ��ĸ
					cin >> b;

					if (b == 'Z')
					{
						system("cls");//
						goto FIRST;
					}
					else if (b == 'c' || b == 'd')
					{

						pingmu.buy(); //�����빺�������
						cin >> g;
						system("cls");//
						if (g == 0 || g < 0)
						{
							system("cls");
							cout << "		�Ƿ����롣" << endl;
							cout << " " << endl;
							system("pause");
							system("cls");
							goto sECOND;
						}
						else
						{
							if (xiaozhu.define(g, b))
							{
								cout << "   " << endl;
								cout << "��Ǹ����޷������������������������롣" << endl;
								system("pause");
								system("cls");
								goto BUy;
							}
							else
							{
								jishu[x] = b;
								x++;
								keshu[y] = g;
								y++;
								xiaozhu.change(g, b);
								danbi[k] = xiaozhu.price(g, b);
								k++;

								totalp += xiaozhu.price(g, b);
								cout << "���ѹ���ɹ�����������: " << xiaozhu.price(g, b) << "Ԫ" << " �ۼ����ѣ�" << totalp << "Ԫ" << endl;
								cout << "   " << endl;
								goto BUy;
							}
						}
					}
					else
					{
						system("cls");//
						cout << "		�Ƿ����롣" << endl;
						cout << " " << endl;
						system("pause");////////////////
						system("cls");////////
						goto sECOND;
					}

				}
				else if (b == 'C')
				{

				BUy1:
					
					seCOND://������λ�ý�������Ȼ�����Ļ��ʾ����
					xiaoji.show();
					pingmu.choice();//������һ���ظ�Z,���蹺���������Ӧ��ĸ
					cin >> b;
					if (b == 'Z')
					{
						system("cls");//
						goto FIRST;
					}
					else if (b == 'e' || b == 'f')
					{

						pingmu.buy(); //�����빺�������
						cin >> g;
						system("cls");//
						if (g == 0 || g < 0)
						{
							system("cls");//
							cout << "		�Ƿ����롣" << endl;
							cout << " " << endl;
							system("pause");//
							system("cls");//						
							goto seCOND;
						}
						else
						{
							if (xiaoji.define(g, b))
							{

								cout << "   " << endl;
								cout << "��Ǹ����޷������������������������롣" << endl;
								system("pause");//
								system("cls");//	
								goto BUy1;
							}
							else
							{
								jishu[x] = b;
								x++;
								keshu[y] = g;
								y++;
								xiaoji.change(g, b);
								totalp += xiaoji.price(g, b);
								danbi[k] = xiaoji.price(g, b);
								k++;
								cout << "���ѹ���ɹ�����������: " << xiaoji.price(g, b) << "Ԫ" << " �ۼ����ѣ�" << totalp << "Ԫ" << endl;
								cout << "   " << endl;
								goto  BUy1;
							}
						}
					}
					else
					{
						system("cls");//
						cout << "		�Ƿ����롣" << endl;
						cout << " " << endl;
						system("pause");//
						system("cls");//	
						goto seCOND;
					}

				}
				else if (b == 'D')
				{
				buy1:					
					secOND://������λ�ý�������Ȼ�����Ļ��ʾ����
					yv.show();
					pingmu.choice();//������һ���ظ�Z,���蹺���������Ӧ��ĸ
					cin >> b;
					if (b == 'Z')
					{
						system("cls");//
						goto FIRST;
					}
					else if (b == 'g' || b == 'h')
					{

						pingmu.buy(); //�����빺�������
						cin >> g;
						system("cls");//
						if (g == 0 || g < 0)
						{							
							system("cls");//	
							cout << "		�Ƿ����롣" << endl;
							cout << " " << endl;
							system("pause");//
							system("cls");//	
							goto secOND;
						}
						else
						{
							if (yv.define(g, b))
							{
								cout << "   " << endl;
								cout << "��Ǹ����޷������������������������롣" << endl;
								system("pause");//
								system("cls");//	
								goto buy1;
							}
							else
							{
								jishu[x] = b;
								x++;
								keshu[y] = g;
								y++;
								danbi[k] = yv.price(g, b);
								k++;
								totalp += yv.price(g, b);
								yv.change(g, b);
								cout << "���ѹ���ɹ�����������: " << yv.price(g, b) << "Ԫ" << " �ۼ����ѣ�" << totalp << "Ԫ" << endl;
								cout << "   " << endl;
								goto buy1;
							}
						}
					}
					else
					{
						system("cls");//
						cout << "		�Ƿ����롣" << endl;
						cout << " " << endl;
						system("pause");
						system("cls");//	
						goto secOND;
					}

				}
				else if (b == 'F')
				{
					goto LOOP;

				}
				else
				{
					cout << "		�Ƿ����롣" << endl;
					cout << " " << endl;
					system("pause");
					system("cls");
					goto FIRST;
				}



			}
			else if (f == '2')
			{
			buy2:
				secoND://////////
				cai.show();//i���
			
				pingmu.support();//���蹺����ظ���Ӧ��ĸ��������һ����ظ�F
				cin >> b;
				if (b == 'F')
				{
					system("cls");////////////////////////////////////////////
					goto LOOP;
				}
				else if (b == 'i' || b == 'j' || b == 'k' || b == 'l' || b == 'm' || b == 'n' || b == 'o')
				{
					pingmu.buy(); //�����빺�������
					cin >> g;
					system("cls");//////////////////////////////////////////////
					if (g == 0 || g < 0)
					{
						system("cls");//	
						cout << "		�Ƿ����롣" << endl;
						cout << " " << endl;
						system("pause");//
						system("cls");//	
						goto secoND;
					}
					else 
					{
						if (cai.define(g, b))
						{
							cout << "   " << endl;
							cout << "��Ǹ����޷������������������������롣" << endl;
							system("pause");//
							system("cls");//	
							goto buy2;
						}
						else
						{
							jishu[x] = b;
							x++;
							keshu[y] = g;
							y++;
							danbi[k] = cai.price(g, b);
							k++;
							totalp += cai.price(g, b);
							cai.change(g, b);
							cout << "���ѹ���ɹ�����������: " << cai.price(g, b) << "Ԫ" << " �ۼ����ѣ�" << totalp << "Ԫ" << endl;
							cout << "   " << endl;
							goto secoND;
						}
					}
				}
				else
				{
					system("cls");////////////////////////////////////////////////
					cout << "		�Ƿ����롣" << endl;
					cout << " " << endl;
					system("pause");//
					system("cls");//	
					goto secoND;
				}
			}
			else if (f == '3')
			{
			buy3:
		    seconD:
			guo.show();//����		
			pingmu.support();//���蹺����ظ���Ӧ��ĸ��������һ����ظ�F
			cin >> b;
			if (b == 'F')
			{
				system("cls");
				goto LOOP;
			}
			else if (b == 'p' || b == 'q' || b == 'r' || b == 's' || b == 't' || b == 'u')
			{
				pingmu.buy(); //�����빺�������
				cin >> g;
				system("cls");
				if (g == 0 || g < 0)
				{
					system("cls");//
					cout << "		�Ƿ����롣" << endl;
					cout << " " << endl;
					system("pause");//
					system("cls");//	
					goto seconD;

				}
				else {
					if (guo.define(g, b))
					{
						cout << "   " << endl;
						cout << "��Ǹ����޷������������������������롣" << endl;
						system("pause");//
						system("cls");//	
						goto buy3;
					}
					else
					{
						jishu[x] = b;
						x++;
						keshu[y] = g;
						y++;
						danbi[k] = guo.price(g, b);
						k++;
						totalp += guo.price(g, b);
						guo.change(g, b);
						cout << "���ѹ���ɹ�����������: " << guo.price(g, b) << "Ԫ" << " �ۼ����ѣ�" << totalp << "Ԫ" << endl;
						cout << "   " << endl;
						goto buy3;
					}
				}
			}
			else
			{
				system("cls");
				cout << "		�Ƿ����롣" << endl;
				cout << " " << endl;
				system("pause");//
				system("cls");//	

				goto seconD;
			}
			}
			else if (f == '4')
			{
				
				if (chushi == 0)
				{
					cout << "��Ǹ��Ŀǰû��������Ʒ��";
					cout << "   " << endl;
					system("pause");
					system("cls");
					goto LOOP;
				}
				else
				{
				zaimai:
					
					for(ceshi=0;ceshi<chushi;ceshi++)
					{
						cout << "			" << buchong1.buchong[ceshi].number << buchong1.buchong[ceshi].name << buchong1.buchong[ceshi].price << "Ԫ" << "  ��棺" << buchong1.buchong[ceshi].remain << endl;
					}
					cout << "�����빺����Ʒ���,���ذ�Z" << endl;
					int zancun1;
					int ceshuzi1=0;
					cin >> add;
					if (add == 'Z')
					{
						system("cls");//
						goto LOOP;
					}
					else
					{
						for (ceshi = 0; ceshi < chushi; ceshi++)
						{
							if (buchong1.buchong[ceshi].number == add)
							{
								zancun1 = ceshi;//�ҵ�Ŀ���±��ż�¼		
								ceshuzi1 = 1;
								break;
							}
						}
						if (ceshuzi1 == 0)
						{
							system("cls");//	
							cout << "�޴���Ʒ��ţ�������������" << endl;
							system("pause");//
							system("cls");//
							goto zaimai;
						}
						if (ceshuzi1 == 1)
						{
							cout << "�����빺������" << endl;
							cin >> buybuchong;
							if (buybuchong <= 0)
							{
								system("cls");//	
								cout << "�Ƿ����룡" << endl;
								system("pause");//
								system("cls");//
								goto zaimai;
							}
							else if (buybuchong <= buchong1.buchong[zancun1].remain)
							{
								zaibaikeshu[K1] = buybuchong;
								K1++;
								zaibuybianhao[X1] = add;
								X1++;
								zaibaidanjian[Y1] = buybuchong * buchong1.buchong[zancun1].price;
								Y1++;
								totalp += buybuchong * buchong1.buchong[zancun1].price;
								system("cls");//
								cout << "���ѹ���ɹ�����������: " << buybuchong * buchong1.buchong[zancun1].price << "Ԫ" << " �ۼ����ѣ�" << totalp << "Ԫ" << endl;
								cout << "   " << endl;
								buchong1.buchong[zancun1].remain -= buybuchong;
								//
								file.open("test.txt");
								for (ceshi = 0; ceshi < chushi; ceshi++)
								{
									file << buchong1.buchong[ceshi].number << '\t' << buchong1.buchong[ceshi].name << '\t' << buchong1.buchong[ceshi].price << '\t' << buchong1.buchong[ceshi].remain << endl;
								}
								file.close();
								//
								goto zaimai;
							}
							else
							{
								system("cls");//
								cout << "   " << endl;
								cout << "��Ǹ����޷������������������������롣" << endl;
								system("pause");//
								system("cls");//
								goto zaimai;
							}
						}
					}
					
				}
			}
			else if (f == '5')
			{
				system("cls");
				cout << " �����������²�Ʒ�� " << endl;
				cout << "   " << endl;
				l=USE.zhanshi(l, x, jishu, keshu, danbi);
				int jishuha = 0;
				for (x11 ; x11 < X1; x11++)//X1�����Ŀ��x11Ϊ���ϴΣ���2�ͱ���2
				{
					int z = 0,q1;
					for ( jishuha=0;jishuha <chushi; jishuha++)
					{
						if (zaibuybianhao[x11] == buchong1.buchong[jishuha].number)
						{
							z = 1;
							q1 = jishuha;//�ڱ�����������в��ҽṹ���ż�¼�±�
							break;
						}
					}
					if (z == 1)
					{
						cout <<" "<< buchong1.buchong[q1].name << "   " << zaibaikeshu[x11] << "g   " << zaibaidanjian[x11] << "Ԫ" << endl;
						cout << "   " << endl;
					}
					
				}
				shouru += totalp;
				cout << " ���ı�������Ϊ: " << totalp << " Ԫ����л����ʹ�á�" << endl;
				cout << " " << gmtm->tm_year + 1900 << "��" << gmtm->tm_mon + 1 << "��" << gmtm->tm_wday + 18 << "��" << "  " << gmtm->tm_hour + 8 << ":" << gmtm->tm_min << ":" << gmtm->tm_sec;
				cout << "   " << endl;
				cout << "   " << endl;
				cout << "   " << endl;
				cout << "   " << endl;
				system("pause");
				system("cls");
				goto inital;
				
			
			}
			else
			{
				cout << "		�Ƿ����롣" << endl;
				cout << " " << endl;
				system("pause");
				system("cls");
				goto LOOP;
			}
		}
	}
	else if (f == '2')//����Աϵͳ
	{
	four:
	cout << "���������Ա�˺ţ�";
	char inzhanghao[100];
	scanf("%s", &inzhanghao);
	cout << endl;
	cout << "���������Ա���룺";
	char inmima[100];//
	char ch;
	int jkj = 0;
		while (1)
		{
			ch = _getch();
			if (ch == '\r')
			{
			inmima[jkj++] = '\0';
			break;
			}
			printf("*");
			inmima[jkj++] = ch;
		}
			system("cls");//	
		if (strcmp(inzhanghao, zhanghao) == 0 && strcmp(inmima, mima) == 0)
	{
	one:
		cout << "���Ҫ�Բ�Ʒ��������ѡ���Ӧ��ĸ�������Զ�����Ʒ��K��ɾ���Զ�����Ʒ��L���޸��Զ�����Ʒ���ظ�M���޸��Զ�����Ʒ�۸�ظ�N��������һ����Z���ر�ϵͳ��Y,�޸����밴X" << endl;
		cout << " " << endl;
		daniu.guanli();
		xiaozhu.guanli();
		xiaoji.guanli();
		yv.guanli();
		cai.guanli();
		guo.guanli();
		//		
		for (ceshi = 0; ceshi < chushi; ceshi++)
		{
			cout << "			" << buchong1.buchong[ceshi].number << buchong1.buchong[ceshi].name << buchong1.buchong[ceshi].price << "Ԫ" << "  ��棺" << buchong1.buchong[ceshi].remain << endl;
			cout << " " << endl;
		}
		// չʾ�嵥
		int l = 0;

		cout << " ���������²�Ʒ�� " << endl;
		cout << "   " << endl;
		USE.zhanshi(l, x, jishu, keshu, danbi);
		int jishuha = 0;
		for (x11=0; x11 < X1; x11++)//X1�����Ŀ��x11Ϊ���ϴΣ���2�ͱ���2
		{
			int z = 0, q1;
			for (jishuha = 0; jishuha < chushi; jishuha++)
			{
				if (zaibuybianhao[x11] == buchong1.buchong[jishuha].number)
				{
					z = 1;
					q1 = jishuha;//�ڱ�����������в��ҽṹ���ż�¼�±�
					break;
				}
			}
			if (z == 1)
			{
				cout << "   " << buchong1.buchong[q1].name << zaibaikeshu[x11] << "g   " << zaibaidanjian[x11] << "Ԫ" << endl;
				cout << "   " << endl;
			}

		}

		cout << "�ۼ����۶" << shouru << endl;//
		cin >> b;
		if (b == 'Z')
		{
		
			system("cls");//
			goto inital;
		}
		else if (b == 'Y')
		{
			return 0;
		}
		else if (b == 'X')
		{
			
			system("cls");
			cout << "������ԭ����" << endl;
			char xiumima[100] = { '0' };
			char xinmima[100] = { '0' };
			char querenmima[100] = { '0' };
			scanf("%s", &xiumima);
			
			system("cls");
			if (strcmp(xiumima, mima) == 0)
			{
			chongxin:
				cout << "�������µ�����" << endl;
				scanf("%s", &xinmima);
				cout << "��ȷ���µ�����" << endl;
				scanf("%s", &querenmima);
				if (strcmp(xinmima, querenmima) == 0)
				{

					char* q = &xinmima[0];
					while (1)
					{
						char kong[100] = { '\0' };
						char* x = &kong[0];
						if (*p == '\0')
						{
							break;
						}
						else
						{
							*p = *x;
							p++;
							x++;
						}
					}
					p = &mima[0];
					while (*q != '\0')
					{
						*p = *q;
						q++;
						p++;

					}
					cout << "�޸ĳɹ��������뽫���´ε�¼ʱ��Ч��" << endl;
					system("pause");
					system("cls");
					goto one;
				}
				else
				{
					cout << "�����������벻ͬ�����������롣" << endl;
					cout << " " << endl;
					system("pause");
					system("cls");
					goto chongxin;

				}

			}
			else
			{
				cout << "�������" << endl;
				cout << " " << endl;
				system("pause");
				system("cls");
				goto four;
			}
		}
		else if (b >= 'a' && b <= 'u')
		{
			switch (b)
			{
				case 'a':
				case 'b':
				three://�˴���ͬ
				cout << "�޸ļ۸�1���޸Ŀ�水2��������һ����3" << endl;
				cout << " " << endl;
				cin >> f;
				system("cls");
				if (f == '3')
				{
					goto one;
				}
				else if (f == '1')
				{

				chong:
					cout << "�����µļ۸�" << endl;
					cin >> j;
					if (j > 0)
					{
						daniu.dep(j, b);//
						cout << "�޸ĳɹ���" << endl;
						system("pause");
						system("cls");
						goto one;//ÿ�ζ���ͬ*/
					}
					else
					{
						cout << "�˼۸񲻺������������룡" << endl;
						system("pause");
						system("cls");
						goto chong;
					}
				}
				else if (f == '2')
				{
				Chong:
					cout << "�����µĿ��" << endl;
					cin >> j;
					if (j >= 0)
					{
						daniu.den(j, b);
						cout << "�޸ĳɹ���" << endl;
						system("pause");
						system("cls");
						goto one;//ÿ�ζ���ͬ
					}
					else
					{
						cout << "�˿�治�������������룡" << endl;
						system("pause");
						system("cls");
						goto Chong;
					}

				}
				else
				{
					cout << "		�Ƿ����롣" << endl;
					system("pause");
					system("cls");
					cout << " " << endl;

					goto three;
				}
				break;
			case 'c':
			case 'd':
			Three://�˴���ͬ
				cout << "�޸ļ۸�1���޸Ŀ�水2��������һ����3" << endl;
				cout << " " << endl;
				cin >> f;
				if (f == '3')
				{
					goto one;
				}
				else if (f == '1')
				{
				CHong1:
					cout << "�����µļ۸�" << endl;
					cin >> j;
					if (j >= 0)
					{
						xiaozhu.dep(j, b);//
						cout << "�޸ĳɹ���" << endl;
						system("pause");
						system("cls");
						goto one;//ÿ�ζ���ͬ
					}
					else
					{
						cout << "�˼۸񲻺������������룡" << endl;
						system("pause");
						system("cls");
						goto CHong1;
					}
				}
				else if (f == '2')
				{
				CHongz:
					cout << "�����µĿ��" << endl;
					cin >> f;
					if (j >= 0)
					{
						xiaozhu.den(j, b);
						cout << "�޸ĳɹ���" << endl;
						system("pause");
						system("cls");
						goto one;//ÿ�ζ���ͬ
					}
					else
					{

						cout << "�˿�治�������������룡" << endl;
						system("pause");
						system("cls");
						goto CHongz;

					}
				}
				else
				{
					cout << "		�Ƿ����롣" << endl;
					system("pause");
					system("cls");
					cout << " " << endl;
					goto Three;
				}
				break;
			case 'e':
			case 'f':
			THree://�˴���ͬ
				cout << "�޸ļ۸�1���޸Ŀ�水2��������һ����3" << endl;
				cout << " " << endl;
				cin >> f;
				if (f == '3')
				{
					goto one;
				}
				else if (f == '1')
				{
				CHong2:
					cout << "�����µļ۸�" << endl;
					cin >> f;
					if (j >= 0)
					{
						xiaoji.dep(j, b);//
						cout << "�޸ĳɹ���" << endl;
						system("pause");
						system("cls");
						goto one;//ÿ�ζ���ͬ
					}
					else
					{
						cout << "�˼۸񲻺������������룡" << endl;
						system("pause");
						system("cls");
						goto CHong2;
					}
				}
				else if (f == '2')
				{
				CHong3:
					cout << "�����µĿ��" << endl;
					cin >> j;
					if (j >= 0)
					{
						xiaoji.den(j, b);
						cout << "�޸ĳɹ���" << endl;
						system("pause");
						system("cls");
						goto one;//ÿ�ζ���ͬ
					}
					else
					{
						cout << "�˿�治�������������룡" << endl;
						system("pause");
						system("cls");
						goto CHong3;
					}
				}
				else
				{
					cout << "		�Ƿ����롣" << endl;
					system("pause");
					system("cls");
					cout << " " << endl;
					goto THree;
				}
				break;
			case 'g':
			case 'h':
			THRee://�˴���ͬ
				cout << "�޸ļ۸�1���޸Ŀ�水2��������һ����3" << endl;
				cout << " " << endl;
				cin >> f;
				if (f == '3')
				{
					goto one;
				}
				else if (f == '1')
				{
				CHonga:
					cout << "�����µļ۸�" << endl;
					cin >> f;
					if (j >= 0)
					{
						yv.dep(j, b);//
						cout << "�޸ĳɹ���" << endl;
						system("pause");
						system("cls");
						goto one;//ÿ�ζ���ͬ
					}
					else
					{
						cout << "�˼۸񲻺������������룡" << endl;
						system("pause");
						system("cls");
						goto CHonga;
					}
				}
				else if (f == '2')
				{
				CHongaa:
					cout << "�����µĿ��" << endl;
					cin >> f;
					if (j >= 0)
					{
						yv.den(j, b);
						cout << "�޸ĳɹ���" << endl;
						system("pause");
						system("cls");
						goto one;//ÿ�ζ���ͬ
					}
					else
					{
						cout << "�˿�治�������������룡" << endl;
						system("pause");
						system("cls");
						goto CHongaa;
					}
				}
				else
				{
					cout << "		�Ƿ����롣" << endl;
					system("pause");
					system("cls");
					cout << " " << endl;
					goto THRee;
				}
				break;
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			THREe://�˴���ͬ
				cout << "�޸ļ۸�1���޸Ŀ�水2��������һ����3" << endl;
				cout << " " << endl;
				cin >> f;
				if (f == '3')
				{
					goto one;
				}
				else if (f == '1')
				{
				CHonga1:
					cout << "�����µļ۸�" << endl;
					cin >> j;
					if (j >= 0)
					{
						cai.dep(j, b);//
						cout << "�޸ĳɹ���" << endl;
						system("pause");
						system("cls");
						goto one;//ÿ�ζ���ͬ
					}
					else
					{
						cout << "�˼۸񲻺������������룡" << endl;
						system("pause");
						system("cls");
						goto CHonga1;
					}
				}
				else if (f == '2')
				{
				CHongaa1:
					cout << "�����µĿ��" << endl;
					cin >> j;
					if (j >= 0)
					{
						cai.den(j, b);
						cout << "�޸ĳɹ���" << endl;
						system("pause");
						system("cls");
						goto one;//ÿ�ζ���ͬ
					}
					else
					{
						cout << "�˿�治�������������룡" << endl;
						system("pause");
						system("cls");
						goto CHongaa1;
					}
				}
				else
				{
					cout << "		�Ƿ����롣" << endl;
					system("pause");
					system("cls");
					cout << " " << endl;
					goto THREe;
				}
				break;
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			THREE://�˴���ͬ
				cout << "�޸ļ۸�1���޸Ŀ�水2��������һ����3" << endl;
				cout << " " << endl;
				cin >> f;
				if (f == '3')
				{
					goto one;
				}
				else if (f == '1')
				{
				CHonga1a:
					cout << "�����µļ۸�" << endl;
					cin >> j;
					if (j > 0)
					{
						guo.dep(j, b);//
						cout << "�޸ĳɹ���" << endl;
						system("pause");
						system("cls");
						goto one;//ÿ�ζ���ͬ
					}
					else
					{
						cout << "�˼۸񲻺������������룡" << endl;
						system("pause");
						system("cls");
						goto CHonga1a;
					}
				}
				else if (f == '2')
				{
				CHonga1a1:
					cout << "�����µĿ��" << endl;
					cin >> j;
					if (j >= 0)
					{
						guo.den(j, b);
						cout << "�޸ĳɹ���" << endl;
						system("pause");
						system("cls");
						goto one;//ÿ�ζ���ͬ
					}
					else
					{
						cout << "�˿�治�������������룡" << endl;
						system("pause");
						system("cls");
						goto CHonga1a1;
					}
				}
				else
				{
					cout << "		�Ƿ����롣" << endl;
					system("pause");
					system("cls");
					cout << " " << endl;
					goto THREE;
				}
				break;





			}
		}
		else if (b == 'K')
		{
			
			system("cls");//	
		zengjia:
			cout << " ��������Ҫ��ӵ��Զ�����Ʒ����" << endl;//д��Ʒ��Ϣ
			cin >> l;
			if (l <= 0)
			{
				cout << "�������������" << endl;
				goto zengjia;
			}
			else
			{
				char cezimu;
				for (zj = 0; zj < l; zj++)
				{
					cout << "��������Ʒ����: ";
					cin >> buchong1.buchong[zj + chushi].name;//��д��ĸ
				daxie:
					cout << "��������Ʒ���: ";
					cin >> cezimu;
					if (cezimu >= 'A' && cezimu <= 'Z')
					{
						buchong1.buchong[zj + chushi].number = cezimu;
					}
					else
					{

						cout << "�������д��ĸ" << endl;
						goto daxie;
					}
					cout << "��������Ʒ�۸�: ";
					cin >> buchong1.buchong[zj + chushi].price;
					cout << "��������Ʒ���: ";
					cin >> buchong1.buchong[zj + chushi].remain;
					cout << endl;

				}
				file.open("test.txt",ios::app);//¼���Ʒ��Ϣ
				for (zj = 0; zj < l; zj++)
				{
					file << setw(5) << buchong1.buchong[zj + chushi].number << "\t" << buchong1.buchong[zj + chushi].name <<"\t" << buchong1.buchong[zj + chushi].price <<"\t" << buchong1.buchong[zj + chushi].remain << endl;
				}
				chushi += l;
				file.close();
				cout << "��Ʒ�����ɹ���" << endl;
				system("pause");
				system("cls");//
				goto one;
			}
		}
		else if (b == 'L')
		{
			
			int ceshuzi = 0;
			int zancun;
			cout << "������ɾ���Զ�����Ʒ���" << endl;

			cin >> add;			
			system("cls");//
			for (ceshi = 0; ceshi < chushi; ceshi++)
			{
				if (buchong1.buchong[ceshi].number == add)
				{
					zancun = ceshi;//�ҵ�Ŀ���ż�¼
					ceshuzi = 1;
					break;
				}
			}
			if (ceshuzi == 1)
			{
				zaikan:
				cout << "Ŀ���Ʒ��Ϣ���£�" << endl;
				cout << "			" << buchong1.buchong[ceshi].number << buchong1.buchong[ceshi].name << buchong1.buchong[ceshi].price << "Ԫ" << "  ��棺" << buchong1.buchong[ceshi].remain << endl;
				cout << "ȷ��ɾ����1��ȡ����0" << endl;
				cin >> ceshuzi;//��д

				if (ceshuzi == 1)
				{
					for (ceshi = zancun; ceshi < chushi - 1; ceshi++)
					{
						buchong1.buchong[ceshi].number = buchong1.buchong[ceshi + 1].number;
						buchong1.buchong[ceshi].name = buchong1.buchong[ceshi + 1].name;
						buchong1.buchong[ceshi].price = buchong1.buchong[ceshi + 1].price;
						buchong1.buchong[ceshi].remain = buchong1.buchong[ceshi + 1].remain;
					}
					chushi -= 1;
					//
					file.open("test.txt");
					for (ceshi = 0; ceshi < chushi; ceshi++)
					{
						file << buchong1.buchong[ceshi].number << '\t' << buchong1.buchong[ceshi].name << '\t' << buchong1.buchong[ceshi].price << '\t' << buchong1.buchong[ceshi].remain << endl;
					}
					file.close();
					//
					cout << "ɾ���ɹ�" << endl;
					
					system("pause");
					system("cls");//
					goto one;
				}
				else if(ceshuzi == 0)
				{
					system("cls");//
					goto one;
				}
				else
				{
					cout << "�Ƿ����룡"<<endl;
					system("pause");
					system("cls");//
					goto zaikan;

				}
			}
			else
			{
				cout << "�޴���Ʒ" << endl;
				system("pause");
				system("cls");//
				goto one;
			}

		}
		else if (b == 'N')
		{
			int ceshuzi = 0;
			int zancun;			
			
			cout << "������Ҫ�޸��Զ�����Ʒ�ı��" << endl;

			cin >> add;
			
			system("cls");//
			for (ceshi = 0; ceshi < chushi; ceshi++)
			{
				if (buchong1.buchong[ceshi].number == add)
				{
					zancun = ceshi;//�ҵ�Ŀ���ż�¼
					ceshuzi = 1;
					break;
				}
			}
			if (ceshuzi == 1)
			{
				zaikan1:
				cout << "Ŀ���Ʒ��Ϣ���£�" << endl;
				cout << "			" << buchong1.buchong[ceshi].number << buchong1.buchong[ceshi].name << buchong1.buchong[ceshi].price << "Ԫ" << "  ��棺" << buchong1.buchong[ceshi].remain << endl;
				cout << "ȷ���޸İ�1��ȡ����0" << endl;
				cin >> ceshuzi;//��д
				if (ceshuzi == 1)
				{
				chonglai:
					cout << "�������µļ۸�:" << endl;
					cin >> ceshuzi;
					if (ceshuzi > 0)
					{
						buchong1.buchong[ceshi].price = ceshuzi;
						cout << "�޸ĳɹ���" << endl;
						//
						file.open("test.txt");
						for (ceshi = 0; ceshi < chushi; ceshi++)
						{
							file << buchong1.buchong[ceshi].number << '\t' << buchong1.buchong[ceshi].name << '\t' << buchong1.buchong[ceshi].price << '\t' << buchong1.buchong[ceshi].remain << endl;
						}
						file.close();
						//
						system("pause");
						system("cls");//
						goto one;
					}
					else
					{
						cout << "�Ƿ����룬���������룡" << endl;
						system("pause");
						system("cls");//
						goto chonglai;
					}
				}
				else if(ceshuzi==0)
				{
					goto one;
				}
				else
				{
					cout << "�Ƿ����룡" << endl;
					system("pause");
					system("cls");//
					goto zaikan1;
				}
			}
			else
			{
				cout << "�޴���Ʒ��" << endl;
				system("pause");
				system("cls");//
				goto one;
			}
		}
		else if (b == 'M')
		{
			int ceshuzi = 0;
			int zancun;
			
			
			//zailaiyici:
			cout << "������Ҫ�޸��Զ�����Ʒ�ı��" << endl;

			cin >> add;
			
			system("cls");//
			for (ceshi = 0; ceshi < chushi; ceshi++)
			{
				if (buchong1.buchong[ceshi].number == add)
				{
					zancun = ceshi;//�ҵ�Ŀ���ż�¼
					ceshuzi = 1;
					break;
				}
			}
			if (ceshuzi == 1)
			{
				zaikan2:
				cout << "Ŀ���Ʒ��Ϣ���£�" << endl;
				cout << "			" << buchong1.buchong[ceshi].number << buchong1.buchong[ceshi].name << buchong1.buchong[ceshi].price << "Ԫ" << "  ��棺" << buchong1.buchong[ceshi].remain << endl;
				cout << "ȷ���޸İ�1��ȡ����0" << endl;
				cin >> ceshuzi;//��д
				if (ceshuzi == 1)
				{
				chonglai1:
					cout << "�������µĿ��:" << endl;
					cin >> ceshuzi;
					if (ceshuzi > 0)
					{
						buchong1.buchong[ceshi].remain = ceshuzi;
						cout << "�޸ĳɹ���" << endl;
						//
						file.open("test.txt");
						for (ceshi = 0; ceshi < chushi; ceshi++)
						{
							file << buchong1.buchong[ceshi].number << '\t' << buchong1.buchong[ceshi].name << '\t' << buchong1.buchong[ceshi].price << '\t' << buchong1.buchong[ceshi].remain << endl;
						}
						file.close();
						//
						system("pause");
						system("cls");//
						goto one;
					}
					else
					{
						cout << "�Ƿ����룬���������룡" << endl;
						system("pause");
						system("cls");//
						goto chonglai1;
					}
				}
				else if (ceshuzi == 0)
				{

					system("cls");//
					goto one;
				}//ȡ��
				else
				{
					cout << "�Ƿ����룡" << endl;
					system("pause");
					system("cls");//
					goto zaikan2;
				}
			}
			else
			{
				cout << "�޴���Ʒ��" << endl;
				system("pause");
				system("cls");//
				goto one;
			}
		}
		else
		{
			cout << "		�Ƿ����롣" << endl;
			cout << " " << endl;
			system("pause");
			system("cls");//
			goto one;
		}
	}
		else
		{
		cout << "		�Ƿ����롣" << endl;
		cout << " " << endl;
		system("pause");
		system("cls");//
		goto inital;
		}
	}
	else if(f=='0')
	{
		cout << " ���ı�������Ϊ: " << totalp << " Ԫ����л����ʹ�á�" << endl;
		cout << " " << gmtm->tm_year + 1900 << "��" << gmtm->tm_mon + 1 << "��" << gmtm->tm_wday + 18 << "��" << "  " << gmtm->tm_hour + 8 << ":" << gmtm->tm_min << ":" << gmtm->tm_sec;
		system("pause");
		system("cls");
		goto inital;
	}
	else
	{
		cout << "		�Ƿ����롣" << endl;
		cout << " " << endl;
		system("pause");
		system("cls");
		goto inital;
		}
}
