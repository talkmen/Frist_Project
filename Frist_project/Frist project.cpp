// Frist project.cpp : 定义控制台应用程序的入口点。
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
		cout << "*欢迎进入计费管理系统*" << endl;
		cout << endl;
		do
		{
			outputMenu();
			cin >> selection;
			switch (selection[0]*10+selection[1])
			{
			case'1'*10:
			{
					   cout << endl << "---添加卡---" << endl << endl;
					   addCard(vec);
					   break;
			}
			case'2' * 10:
			{
					   cout << endl << "---查询卡---" << endl << endl;
					   queryCard(vec);
					   break;
			}
			case'3' * 10:
			{
					   cout << endl << "---上机---" << endl << endl;
					   break;
			}
			case'4' * 10:
			{
					   cout << endl << "---下机---" << endl << endl;
					   break;
			}
			case'5' * 10:
			{
					   cout << endl << "---充值---" << endl << endl;
					   break;
			}
			case'6' * 10:
			{
					   cout << endl << "---退费---" << endl << endl;
					   break;
			}
			case'7' * 10:
			{
					   cout << endl << "---查询统计---" << endl << endl;
					   break;
			}
			case'8' * 10:
			{
					   cout << endl << "---注销卡---" << endl << endl;
					   deleteCard(vec);
					   break;
			}
			case'0' * 10:
			{
					   cout << endl << "谢谢你使用本系统" << endl << endl;
					   break;
			}
			default:
			{
					   cout << "输入的菜单编号错误！\n";
					   break;
			}
			}
			cout << endl;
		} while (selection[0] * 10 + selection[1]!='0'*10);

		return 0;
	}

