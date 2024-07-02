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
				cout << " ³±ÉÇ µõÁú " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 'b':
				cout << " Texas Å£ÅÅ " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 'c':
				cout << " ¹þ¶û±õ Àï¼¹ " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 'd':
				cout << " ³É¶¼ ÖíÅÅ " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 'e':
				cout << " ÁÙÒÊ ¼¦ÍÈ " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 'f':
				cout << " ÇåÔ¶ ¼¦ÅÅ " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 'g':
				cout << " ×¯ºÓ ÁúÀûÓã " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 'h':
				cout << " ¶õ¶û¶àË¹ öóÓã " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;

			case 'i':
				cout << " ÌúÁë ´ó´Ð " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 'j':
				cout << " ½ðÏç ´óËâ " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 'k':
				cout << " ÎäÉ½ ¾Â²Ë " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 'l':
				cout << " ¶¨Î÷ ÍÁ¶¹ " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 'm':
				cout << " ¹þ¶û±õ °×²Ë " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 'n':
				cout << " Çàµº ²¤²Ë " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 'o':
				cout << " ÅíÖÝ Éú²Ë " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 'p':
				cout << " ÓñÏª ñÒ³È " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 'q':
				cout << " ÎàÖÝ É³ÌÇéÙ " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 'r':
				cout << " ³ÎÂõ Ïã½¶ " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 's':
				cout << " Washington D.C. Æ»¹û " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 't':
				cout << " ¿â¶ûÀÕ Àæ " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			case 'u':
				cout << " ÍÂÂ³·¬ ÆÏÌÑ " << keshu[l] << "g   " << danbi[l] << "Ôª" << endl;
				cout << "   " << endl;
				break;
			}
			
			l++;
			
		}
		return l;
	}
};