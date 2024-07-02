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
	Readfile.open("test.txt", ios::in);//ios::in 表示以只读的方式读取文件
	
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
	char mima[100] = { "123456" };//位于inital前不然修改后又定义为123456
	char jishu[100] = { "0" };//修改带ini之前
	int x = 0, y = 0, k = 0;//用于对应数组
	int l = 0;//结算时用于循环输出
	double danbi[100] = { 0 };//记录单笔消费
	double keshu[100] = { 0 };//记录对应购买克数
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
		cout << " 购买肉类产品请回复1，购买蔬菜类请回复2，购买水果类请回复3，购买其他商品请回复4，购买完成请回复5。   " << endl;//修改前在循环内部，重复出现给购买者造成视觉疲劳
		cout << "   " << endl;
		while (1)
		{

			cin >> f;
			system("cls");
			if (f == '1')//进入肉大类分项
			{
			FIRST:
				pingmu.meat();//A牛肉 B猪肉 C鸡肉 D鱼肉，如需购买请回复对应字母，返回上一级请回复F				
				cin >> b;
				system("cls");//
				if (b == 'A')
				{
					
				Buy:
					
				SECOND://回来的位置
					daniu.show();//a吊龙 b牛排2级
					pingmu.choice();//返回上一级回复Z,如需购买请输入对应字母
					cin >> b;
					//位置出错记录z，价格显示0
					if (b == 'Z')
					{
						system("cls");//
						goto FIRST;
						
					}
					else if (b == 'a' || b == 'b')
					{
						pingmu.buy(); //请输入购买克数：
						cin >> g;
						system("cls");//
						if (g == 0 || g < 0)
						{
							system("cls");///////////////
							cout << "		非法输入。" << endl;
							cout << " " << endl;
							system("pause");/////////////
							system("cls");///////////////
							goto SECOND;
						}
						else //防止多次输入出现问题
						{
							if (daniu.define(g, b))
							{
								cout << "   " << endl;
								cout << "抱歉库存无法满足您的需求，请您重新输入。" << endl;
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
								cout << "您已购买成功！本次消费: " << daniu.price(g, b) << "元" << " 累计消费：" << totalp << "元" << endl;
								cout << "   " << endl;						
								goto Buy;
							}
						}
					}
					else
					{

						system("cls");
						cout << "		非法输入。" << endl;
						cout << " " << endl;
						system("pause");////////////////
						system("cls");////////
						goto SECOND;
					}
				}
				else if (b == 'B')
				{
				BUy:
					
				sECOND://回来的位置讲究，不然造成屏幕显示冗杂
					xiaozhu.show();
					pingmu.choice();//返回上一级回复Z,如需购买请输入对应字母
					cin >> b;

					if (b == 'Z')
					{
						system("cls");//
						goto FIRST;
					}
					else if (b == 'c' || b == 'd')
					{

						pingmu.buy(); //请输入购买克数：
						cin >> g;
						system("cls");//
						if (g == 0 || g < 0)
						{
							system("cls");
							cout << "		非法输入。" << endl;
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
								cout << "抱歉库存无法满足您的需求，请您重新输入。" << endl;
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
								cout << "您已购买成功！本次消费: " << xiaozhu.price(g, b) << "元" << " 累计消费：" << totalp << "元" << endl;
								cout << "   " << endl;
								goto BUy;
							}
						}
					}
					else
					{
						system("cls");//
						cout << "		非法输入。" << endl;
						cout << " " << endl;
						system("pause");////////////////
						system("cls");////////
						goto sECOND;
					}

				}
				else if (b == 'C')
				{

				BUy1:
					
					seCOND://回来的位置讲究，不然造成屏幕显示冗杂
					xiaoji.show();
					pingmu.choice();//返回上一级回复Z,如需购买请输入对应字母
					cin >> b;
					if (b == 'Z')
					{
						system("cls");//
						goto FIRST;
					}
					else if (b == 'e' || b == 'f')
					{

						pingmu.buy(); //请输入购买克数：
						cin >> g;
						system("cls");//
						if (g == 0 || g < 0)
						{
							system("cls");//
							cout << "		非法输入。" << endl;
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
								cout << "抱歉库存无法满足您的需求，请您重新输入。" << endl;
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
								cout << "您已购买成功！本次消费: " << xiaoji.price(g, b) << "元" << " 累计消费：" << totalp << "元" << endl;
								cout << "   " << endl;
								goto  BUy1;
							}
						}
					}
					else
					{
						system("cls");//
						cout << "		非法输入。" << endl;
						cout << " " << endl;
						system("pause");//
						system("cls");//	
						goto seCOND;
					}

				}
				else if (b == 'D')
				{
				buy1:					
					secOND://回来的位置讲究，不然造成屏幕显示冗杂
					yv.show();
					pingmu.choice();//返回上一级回复Z,如需购买请输入对应字母
					cin >> b;
					if (b == 'Z')
					{
						system("cls");//
						goto FIRST;
					}
					else if (b == 'g' || b == 'h')
					{

						pingmu.buy(); //请输入购买克数：
						cin >> g;
						system("cls");//
						if (g == 0 || g < 0)
						{							
							system("cls");//	
							cout << "		非法输入。" << endl;
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
								cout << "抱歉库存无法满足您的需求，请您重新输入。" << endl;
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
								cout << "您已购买成功！本次消费: " << yv.price(g, b) << "元" << " 累计消费：" << totalp << "元" << endl;
								cout << "   " << endl;
								goto buy1;
							}
						}
					}
					else
					{
						system("cls");//
						cout << "		非法输入。" << endl;
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
					cout << "		非法输入。" << endl;
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
				cai.show();//i大葱
			
				pingmu.support();//如需购买请回复对应字母，返回上一级请回复F
				cin >> b;
				if (b == 'F')
				{
					system("cls");////////////////////////////////////////////
					goto LOOP;
				}
				else if (b == 'i' || b == 'j' || b == 'k' || b == 'l' || b == 'm' || b == 'n' || b == 'o')
				{
					pingmu.buy(); //请输入购买克数：
					cin >> g;
					system("cls");//////////////////////////////////////////////
					if (g == 0 || g < 0)
					{
						system("cls");//	
						cout << "		非法输入。" << endl;
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
							cout << "抱歉库存无法满足您的需求，请您重新输入。" << endl;
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
							cout << "您已购买成功！本次消费: " << cai.price(g, b) << "元" << " 累计消费：" << totalp << "元" << endl;
							cout << "   " << endl;
							goto secoND;
						}
					}
				}
				else
				{
					system("cls");////////////////////////////////////////////////
					cout << "		非法输入。" << endl;
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
			guo.show();//葡萄		
			pingmu.support();//如需购买请回复对应字母，返回上一级请回复F
			cin >> b;
			if (b == 'F')
			{
				system("cls");
				goto LOOP;
			}
			else if (b == 'p' || b == 'q' || b == 'r' || b == 's' || b == 't' || b == 'u')
			{
				pingmu.buy(); //请输入购买克数：
				cin >> g;
				system("cls");
				if (g == 0 || g < 0)
				{
					system("cls");//
					cout << "		非法输入。" << endl;
					cout << " " << endl;
					system("pause");//
					system("cls");//	
					goto seconD;

				}
				else {
					if (guo.define(g, b))
					{
						cout << "   " << endl;
						cout << "抱歉库存无法满足您的需求，请您重新输入。" << endl;
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
						cout << "您已购买成功！本次消费: " << guo.price(g, b) << "元" << " 累计消费：" << totalp << "元" << endl;
						cout << "   " << endl;
						goto buy3;
					}
				}
			}
			else
			{
				system("cls");
				cout << "		非法输入。" << endl;
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
					cout << "抱歉，目前没有售卖商品！";
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
						cout << "			" << buchong1.buchong[ceshi].number << buchong1.buchong[ceshi].name << buchong1.buchong[ceshi].price << "元" << "  库存：" << buchong1.buchong[ceshi].remain << endl;
					}
					cout << "请输入购买商品编号,返回按Z" << endl;
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
								zancun1 = ceshi;//找到目标下标编号记录		
								ceshuzi1 = 1;
								break;
							}
						}
						if (ceshuzi1 == 0)
						{
							system("cls");//	
							cout << "无此商品编号，请重新输入编号" << endl;
							system("pause");//
							system("cls");//
							goto zaimai;
						}
						if (ceshuzi1 == 1)
						{
							cout << "请输入购买数量" << endl;
							cin >> buybuchong;
							if (buybuchong <= 0)
							{
								system("cls");//	
								cout << "非法输入！" << endl;
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
								cout << "您已购买成功！本次消费: " << buybuchong * buchong1.buchong[zancun1].price << "元" << " 累计消费：" << totalp << "元" << endl;
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
								cout << "抱歉库存无法满足您的需求，请您重新输入。" << endl;
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
				cout << " 您购买了以下产品： " << endl;
				cout << "   " << endl;
				l=USE.zhanshi(l, x, jishu, keshu, danbi);
				int jishuha = 0;
				for (x11 ; x11 < X1; x11++)//X1买的数目，x11为你上次，买2就保留2
				{
					int z = 0,q1;
					for ( jishuha=0;jishuha <chushi; jishuha++)
					{
						if (zaibuybianhao[x11] == buchong1.buchong[jishuha].number)
						{
							z = 1;
							q1 = jishuha;//在保留编号数组中查找结构体编号记录下标
							break;
						}
					}
					if (z == 1)
					{
						cout <<" "<< buchong1.buchong[q1].name << "   " << zaibaikeshu[x11] << "g   " << zaibaidanjian[x11] << "元" << endl;
						cout << "   " << endl;
					}
					
				}
				shouru += totalp;
				cout << " 您的本次消费为: " << totalp << " 元。感谢您的使用。" << endl;
				cout << " " << gmtm->tm_year + 1900 << "年" << gmtm->tm_mon + 1 << "月" << gmtm->tm_wday + 18 << "日" << "  " << gmtm->tm_hour + 8 << ":" << gmtm->tm_min << ":" << gmtm->tm_sec;
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
				cout << "		非法输入。" << endl;
				cout << " " << endl;
				system("pause");
				system("cls");
				goto LOOP;
			}
		}
	}
	else if (f == '2')//管理员系统
	{
	four:
	cout << "请输入管理员账号：";
	char inzhanghao[100];
	scanf("%s", &inzhanghao);
	cout << endl;
	cout << "请输入管理员密码：";
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
		cout << "如果要对产品操作，请选择对应字母。增加自定义商品按K，删除自定义商品按L，修改自定义商品库存回复M，修改自定义商品价格回复N，返回上一级按Z，关闭系统按Y,修改密码按X" << endl;
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
			cout << "			" << buchong1.buchong[ceshi].number << buchong1.buchong[ceshi].name << buchong1.buchong[ceshi].price << "元" << "  库存：" << buchong1.buchong[ceshi].remain << endl;
			cout << " " << endl;
		}
		// 展示清单
		int l = 0;

		cout << " 卖出了以下产品： " << endl;
		cout << "   " << endl;
		USE.zhanshi(l, x, jishu, keshu, danbi);
		int jishuha = 0;
		for (x11=0; x11 < X1; x11++)//X1买的数目，x11为你上次，买2就保留2
		{
			int z = 0, q1;
			for (jishuha = 0; jishuha < chushi; jishuha++)
			{
				if (zaibuybianhao[x11] == buchong1.buchong[jishuha].number)
				{
					z = 1;
					q1 = jishuha;//在保留编号数组中查找结构体编号记录下标
					break;
				}
			}
			if (z == 1)
			{
				cout << "   " << buchong1.buchong[q1].name << zaibaikeshu[x11] << "g   " << zaibaidanjian[x11] << "元" << endl;
				cout << "   " << endl;
			}

		}

		cout << "累计销售额：" << shouru << endl;//
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
			cout << "请输入原密码" << endl;
			char xiumima[100] = { '0' };
			char xinmima[100] = { '0' };
			char querenmima[100] = { '0' };
			scanf("%s", &xiumima);
			
			system("cls");
			if (strcmp(xiumima, mima) == 0)
			{
			chongxin:
				cout << "请输入新的密码" << endl;
				scanf("%s", &xinmima);
				cout << "请确认新的密码" << endl;
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
					cout << "修改成功！新密码将于下次登录时生效。" << endl;
					system("pause");
					system("cls");
					goto one;
				}
				else
				{
					cout << "两次输入密码不同！请重新输入。" << endl;
					cout << " " << endl;
					system("pause");
					system("cls");
					goto chongxin;

				}

			}
			else
			{
				cout << "密码错误！" << endl;
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
				three://此处不同
				cout << "修改价格按1，修改库存按2，返回上一级按3" << endl;
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
					cout << "输入新的价格" << endl;
					cin >> j;
					if (j > 0)
					{
						daniu.dep(j, b);//
						cout << "修改成功！" << endl;
						system("pause");
						system("cls");
						goto one;//每次都不同*/
					}
					else
					{
						cout << "此价格不合理，请重新输入！" << endl;
						system("pause");
						system("cls");
						goto chong;
					}
				}
				else if (f == '2')
				{
				Chong:
					cout << "输入新的库存" << endl;
					cin >> j;
					if (j >= 0)
					{
						daniu.den(j, b);
						cout << "修改成功！" << endl;
						system("pause");
						system("cls");
						goto one;//每次都不同
					}
					else
					{
						cout << "此库存不合理，请重新输入！" << endl;
						system("pause");
						system("cls");
						goto Chong;
					}

				}
				else
				{
					cout << "		非法输入。" << endl;
					system("pause");
					system("cls");
					cout << " " << endl;

					goto three;
				}
				break;
			case 'c':
			case 'd':
			Three://此处不同
				cout << "修改价格按1，修改库存按2，返回上一级按3" << endl;
				cout << " " << endl;
				cin >> f;
				if (f == '3')
				{
					goto one;
				}
				else if (f == '1')
				{
				CHong1:
					cout << "输入新的价格" << endl;
					cin >> j;
					if (j >= 0)
					{
						xiaozhu.dep(j, b);//
						cout << "修改成功！" << endl;
						system("pause");
						system("cls");
						goto one;//每次都不同
					}
					else
					{
						cout << "此价格不合理，请重新输入！" << endl;
						system("pause");
						system("cls");
						goto CHong1;
					}
				}
				else if (f == '2')
				{
				CHongz:
					cout << "输入新的库存" << endl;
					cin >> f;
					if (j >= 0)
					{
						xiaozhu.den(j, b);
						cout << "修改成功！" << endl;
						system("pause");
						system("cls");
						goto one;//每次都不同
					}
					else
					{

						cout << "此库存不合理，请重新输入！" << endl;
						system("pause");
						system("cls");
						goto CHongz;

					}
				}
				else
				{
					cout << "		非法输入。" << endl;
					system("pause");
					system("cls");
					cout << " " << endl;
					goto Three;
				}
				break;
			case 'e':
			case 'f':
			THree://此处不同
				cout << "修改价格按1，修改库存按2，返回上一级按3" << endl;
				cout << " " << endl;
				cin >> f;
				if (f == '3')
				{
					goto one;
				}
				else if (f == '1')
				{
				CHong2:
					cout << "输入新的价格" << endl;
					cin >> f;
					if (j >= 0)
					{
						xiaoji.dep(j, b);//
						cout << "修改成功！" << endl;
						system("pause");
						system("cls");
						goto one;//每次都不同
					}
					else
					{
						cout << "此价格不合理，请重新输入！" << endl;
						system("pause");
						system("cls");
						goto CHong2;
					}
				}
				else if (f == '2')
				{
				CHong3:
					cout << "输入新的库存" << endl;
					cin >> j;
					if (j >= 0)
					{
						xiaoji.den(j, b);
						cout << "修改成功！" << endl;
						system("pause");
						system("cls");
						goto one;//每次都不同
					}
					else
					{
						cout << "此库存不合理，请重新输入！" << endl;
						system("pause");
						system("cls");
						goto CHong3;
					}
				}
				else
				{
					cout << "		非法输入。" << endl;
					system("pause");
					system("cls");
					cout << " " << endl;
					goto THree;
				}
				break;
			case 'g':
			case 'h':
			THRee://此处不同
				cout << "修改价格按1，修改库存按2，返回上一级按3" << endl;
				cout << " " << endl;
				cin >> f;
				if (f == '3')
				{
					goto one;
				}
				else if (f == '1')
				{
				CHonga:
					cout << "输入新的价格" << endl;
					cin >> f;
					if (j >= 0)
					{
						yv.dep(j, b);//
						cout << "修改成功！" << endl;
						system("pause");
						system("cls");
						goto one;//每次都不同
					}
					else
					{
						cout << "此价格不合理，请重新输入！" << endl;
						system("pause");
						system("cls");
						goto CHonga;
					}
				}
				else if (f == '2')
				{
				CHongaa:
					cout << "输入新的库存" << endl;
					cin >> f;
					if (j >= 0)
					{
						yv.den(j, b);
						cout << "修改成功！" << endl;
						system("pause");
						system("cls");
						goto one;//每次都不同
					}
					else
					{
						cout << "此库存不合理，请重新输入！" << endl;
						system("pause");
						system("cls");
						goto CHongaa;
					}
				}
				else
				{
					cout << "		非法输入。" << endl;
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
			THREe://此处不同
				cout << "修改价格按1，修改库存按2，返回上一级按3" << endl;
				cout << " " << endl;
				cin >> f;
				if (f == '3')
				{
					goto one;
				}
				else if (f == '1')
				{
				CHonga1:
					cout << "输入新的价格" << endl;
					cin >> j;
					if (j >= 0)
					{
						cai.dep(j, b);//
						cout << "修改成功！" << endl;
						system("pause");
						system("cls");
						goto one;//每次都不同
					}
					else
					{
						cout << "此价格不合理，请重新输入！" << endl;
						system("pause");
						system("cls");
						goto CHonga1;
					}
				}
				else if (f == '2')
				{
				CHongaa1:
					cout << "输入新的库存" << endl;
					cin >> j;
					if (j >= 0)
					{
						cai.den(j, b);
						cout << "修改成功！" << endl;
						system("pause");
						system("cls");
						goto one;//每次都不同
					}
					else
					{
						cout << "此库存不合理，请重新输入！" << endl;
						system("pause");
						system("cls");
						goto CHongaa1;
					}
				}
				else
				{
					cout << "		非法输入。" << endl;
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
			THREE://此处不同
				cout << "修改价格按1，修改库存按2，返回上一级按3" << endl;
				cout << " " << endl;
				cin >> f;
				if (f == '3')
				{
					goto one;
				}
				else if (f == '1')
				{
				CHonga1a:
					cout << "输入新的价格" << endl;
					cin >> j;
					if (j > 0)
					{
						guo.dep(j, b);//
						cout << "修改成功！" << endl;
						system("pause");
						system("cls");
						goto one;//每次都不同
					}
					else
					{
						cout << "此价格不合理，请重新输入！" << endl;
						system("pause");
						system("cls");
						goto CHonga1a;
					}
				}
				else if (f == '2')
				{
				CHonga1a1:
					cout << "输入新的库存" << endl;
					cin >> j;
					if (j >= 0)
					{
						guo.den(j, b);
						cout << "修改成功！" << endl;
						system("pause");
						system("cls");
						goto one;//每次都不同
					}
					else
					{
						cout << "此库存不合理，请重新输入！" << endl;
						system("pause");
						system("cls");
						goto CHonga1a1;
					}
				}
				else
				{
					cout << "		非法输入。" << endl;
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
			cout << " 请输入您要添加的自定义商品数量" << endl;//写产品信息
			cin >> l;
			if (l <= 0)
			{
				cout << "请输入合理数量" << endl;
				goto zengjia;
			}
			else
			{
				char cezimu;
				for (zj = 0; zj < l; zj++)
				{
					cout << "请输入商品名称: ";
					cin >> buchong1.buchong[zj + chushi].name;//重写字母
				daxie:
					cout << "请输入商品编号: ";
					cin >> cezimu;
					if (cezimu >= 'A' && cezimu <= 'Z')
					{
						buchong1.buchong[zj + chushi].number = cezimu;
					}
					else
					{

						cout << "请输入大写字母" << endl;
						goto daxie;
					}
					cout << "请输入商品价格: ";
					cin >> buchong1.buchong[zj + chushi].price;
					cout << "请输入商品库存: ";
					cin >> buchong1.buchong[zj + chushi].remain;
					cout << endl;

				}
				file.open("test.txt",ios::app);//录入产品信息
				for (zj = 0; zj < l; zj++)
				{
					file << setw(5) << buchong1.buchong[zj + chushi].number << "\t" << buchong1.buchong[zj + chushi].name <<"\t" << buchong1.buchong[zj + chushi].price <<"\t" << buchong1.buchong[zj + chushi].remain << endl;
				}
				chushi += l;
				file.close();
				cout << "商品创建成功！" << endl;
				system("pause");
				system("cls");//
				goto one;
			}
		}
		else if (b == 'L')
		{
			
			int ceshuzi = 0;
			int zancun;
			cout << "请输入删除自定义商品编号" << endl;

			cin >> add;			
			system("cls");//
			for (ceshi = 0; ceshi < chushi; ceshi++)
			{
				if (buchong1.buchong[ceshi].number == add)
				{
					zancun = ceshi;//找到目标编号记录
					ceshuzi = 1;
					break;
				}
			}
			if (ceshuzi == 1)
			{
				zaikan:
				cout << "目标产品信息如下：" << endl;
				cout << "			" << buchong1.buchong[ceshi].number << buchong1.buchong[ceshi].name << buchong1.buchong[ceshi].price << "元" << "  库存：" << buchong1.buchong[ceshi].remain << endl;
				cout << "确认删除按1，取消按0" << endl;
				cin >> ceshuzi;//重写

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
					cout << "删除成功" << endl;
					
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
					cout << "非法输入！"<<endl;
					system("pause");
					system("cls");//
					goto zaikan;

				}
			}
			else
			{
				cout << "无此商品" << endl;
				system("pause");
				system("cls");//
				goto one;
			}

		}
		else if (b == 'N')
		{
			int ceshuzi = 0;
			int zancun;			
			
			cout << "请输入要修改自定义商品的编号" << endl;

			cin >> add;
			
			system("cls");//
			for (ceshi = 0; ceshi < chushi; ceshi++)
			{
				if (buchong1.buchong[ceshi].number == add)
				{
					zancun = ceshi;//找到目标编号记录
					ceshuzi = 1;
					break;
				}
			}
			if (ceshuzi == 1)
			{
				zaikan1:
				cout << "目标产品信息如下：" << endl;
				cout << "			" << buchong1.buchong[ceshi].number << buchong1.buchong[ceshi].name << buchong1.buchong[ceshi].price << "元" << "  库存：" << buchong1.buchong[ceshi].remain << endl;
				cout << "确认修改按1，取消按0" << endl;
				cin >> ceshuzi;//重写
				if (ceshuzi == 1)
				{
				chonglai:
					cout << "请输入新的价格:" << endl;
					cin >> ceshuzi;
					if (ceshuzi > 0)
					{
						buchong1.buchong[ceshi].price = ceshuzi;
						cout << "修改成功！" << endl;
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
						cout << "非法输入，请重新输入！" << endl;
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
					cout << "非法输入！" << endl;
					system("pause");
					system("cls");//
					goto zaikan1;
				}
			}
			else
			{
				cout << "无此商品！" << endl;
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
			cout << "请输入要修改自定义商品的编号" << endl;

			cin >> add;
			
			system("cls");//
			for (ceshi = 0; ceshi < chushi; ceshi++)
			{
				if (buchong1.buchong[ceshi].number == add)
				{
					zancun = ceshi;//找到目标编号记录
					ceshuzi = 1;
					break;
				}
			}
			if (ceshuzi == 1)
			{
				zaikan2:
				cout << "目标产品信息如下：" << endl;
				cout << "			" << buchong1.buchong[ceshi].number << buchong1.buchong[ceshi].name << buchong1.buchong[ceshi].price << "元" << "  库存：" << buchong1.buchong[ceshi].remain << endl;
				cout << "确认修改按1，取消按0" << endl;
				cin >> ceshuzi;//重写
				if (ceshuzi == 1)
				{
				chonglai1:
					cout << "请输入新的库存:" << endl;
					cin >> ceshuzi;
					if (ceshuzi > 0)
					{
						buchong1.buchong[ceshi].remain = ceshuzi;
						cout << "修改成功！" << endl;
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
						cout << "非法输入，请重新输入！" << endl;
						system("pause");
						system("cls");//
						goto chonglai1;
					}
				}
				else if (ceshuzi == 0)
				{

					system("cls");//
					goto one;
				}//取消
				else
				{
					cout << "非法输入！" << endl;
					system("pause");
					system("cls");//
					goto zaikan2;
				}
			}
			else
			{
				cout << "无此商品！" << endl;
				system("pause");
				system("cls");//
				goto one;
			}
		}
		else
		{
			cout << "		非法输入。" << endl;
			cout << " " << endl;
			system("pause");
			system("cls");//
			goto one;
		}
	}
		else
		{
		cout << "		非法输入。" << endl;
		cout << " " << endl;
		system("pause");
		system("cls");//
		goto inital;
		}
	}
	else if(f=='0')
	{
		cout << " 您的本次消费为: " << totalp << " 元。感谢您的使用。" << endl;
		cout << " " << gmtm->tm_year + 1900 << "年" << gmtm->tm_mon + 1 << "月" << gmtm->tm_wday + 18 << "日" << "  " << gmtm->tm_hour + 8 << ":" << gmtm->tm_min << ":" << gmtm->tm_sec;
		system("pause");
		system("cls");
		goto inital;
	}
	else
	{
		cout << "		非法输入。" << endl;
		cout << " " << endl;
		system("pause");
		system("cls");
		goto inital;
		}
}
