#include"stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include"VectorCard.h"
#include"global.h"
using namespace std;
void outputMenu()
{
	cout << "-------计费系统清单-------" << endl;
	cout << "1,添加卡" << endl;
	cout << "2.查询卡" << endl;
	cout << "3.上机" << endl;
	cout << "4.下机" << endl;
	cout << "5.充值" << endl;
	cout << "6.退费" << endl;
	cout << "7.查询统计" << endl;
	cout << "8.注销卡" << endl;
	cout << "0.退出" << endl;
	cout << "请选择菜单项编号（0~8）：";
};
bool inputCardNo(string&strNo,vector<Card>vec)
{
	while (1)
	{
		int nCardIndex;
		char ch = 'm';
		cout << "请输入卡号（长度为1-17）：";
		cin >> strNo;
		if (strNo.length() >= 17)
		{
			cout << "卡号长度超过最大值" << endl;
			while (ch != 'N'&&ch != 'Y' && ch != 'n'&&ch != 'y')
			{
				cout << "重新输入吗？(y/n)";
				cin >> ch;
				cin.clear();
				cin.sync();
			}
			if (ch == 'N' || ch == 'n')
				return 0;
			else
				continue;
		}
		if (cardIsExist(strNo, nCardIndex, vec) != NULL)
		{
			cout << "卡号已存在" << endl;
			while (ch != 'N'&&ch != 'Y' && ch != 'n'&&ch != 'y')
			{
				cout << "重新输入吗？(y/n)";
				cin >> ch;
				cin.clear();
				cin.sync();
			}
			if (ch == 'N' || ch == 'n')
				return 0;
		}
		else
			break;
	}
};
bool inputCardPwd(string&strPwd)
{
	while (1)
	{
		cout << "输入密码（长度为1—8）： ";
		cin >> strPwd;
		if (strPwd.length() >= 8)
		{
			cout << "密码长度超过最大值" << endl;
			char ch = 'K';
			while (ch != 'N'&&ch != 'Y' && ch != 'n'&&ch != 'y')
			{
				cout << "重新输入吗？(y/n)";
				cin >> ch;
				cin.clear();
				cin.sync();
			}
			if (ch == 'n'||ch=='N')
			{
				return 0;
			}
		}
		else
		{
			break;
		}
	}
	return 1;
};
bool inputCardBalance(double&fBalance)
{
	while (1)
	{
		cout << "输入金额： ";
		cin >> fBalance;
		if (fBalance < 0)
		{
			cout << "金额输入错误" << endl;
			char ch = 'a';
			while (ch != 'N'&&ch != 'Y' && ch != 'n'&&ch != 'y')
			{
				cout << "重新输入吗？(Y/N)";
				cin >> ch;
				cin.clear();
				cin.sync();
			}
			if (ch == 'N'||ch=='n')
			{
				return 0;
			}
		}
		else
		{
			break;
		}
	}
	return 1;
};
bool inputNoPwd(string&strNo, string&strPwd, vector<Card>vec)
{
	if (!inputCardNo(strNo, vec) )
	{
		return 0;
	}
	if (!inputCardPwd(strPwd))
	{
		return 0;
	}
	return 1;
};
bool inputNoPwdBalance(string&strNo, string&strPwd, double&fBalance, vector<Card>vec)
{
	if (!inputCardNo(strNo, vec))
	{
		return 0;
	}
	if (!inputCardPwd(strPwd))
	{
		return 0;
	}
	if (!inputCardBalance(fBalance))
	{
		return 0;
	}
	return 1;
};
