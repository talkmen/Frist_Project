// Frist project.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include"menu.h"
#include"service.h"
#include"model.h"
#include<vector>
#include"file.h"
#include"global.h"
#include<iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
		string selection;
		vector<Card>vec;
		CardVectorInit(CARDPATH, vec);
		cout << endl;
		cout << "*��ӭ����Ʒѹ���ϵͳ*" << endl;
		cout << endl;
		do
		{
			outputMenu();
			cin >> selection;
			switch (selection[0]*10+selection[1])
			{
			case'1'*10:
			{
					   cout << endl << "---��ӿ�---" << endl << endl;
					   addCard(vec);
					   break;
			}
			case'2' * 10:
			{
					   cout << endl << "---��ѯ��---" << endl << endl;
					   queryCard(vec);
					   break;
			}
			case'3' * 10:
			{
					   cout << endl << "---�ϻ�---" << endl << endl;
					   break;
			}
			case'4' * 10:
			{
					   cout << endl << "---�»�---" << endl << endl;
					   break;
			}
			case'5' * 10:
			{
					   cout << endl << "---��ֵ---" << endl << endl;
					   break;
			}
			case'6' * 10:
			{
					   cout << endl << "---�˷�---" << endl << endl;
					   break;
			}
			case'7' * 10:
			{
					   cout << endl << "---��ѯͳ��---" << endl << endl;
					   break;
			}
			case'8' * 10:
			{
					   cout << endl << "---ע����---" << endl << endl;
					   deleteCard(vec);
					   break;
			}
			case'0' * 10:
			{
					   cout << endl << "лл��ʹ�ñ�ϵͳ" << endl << endl;
					   break;
			}
			default:
			{
					   cout << "����Ĳ˵���Ŵ���\n";
					   break;
			}
			}
			cout << endl;
		} while (selection[0] * 10 + selection[1]!='0'*10);

		return 0;
	}

