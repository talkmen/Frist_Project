#include"stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include"VectorCard.h"
#include"global.h"
using namespace std;
void outputMenu()
{
	cout << "-------�Ʒ�ϵͳ�嵥-------" << endl;
	cout << "1,��ӿ�" << endl;
	cout << "2.��ѯ��" << endl;
	cout << "3.�ϻ�" << endl;
	cout << "4.�»�" << endl;
	cout << "5.��ֵ" << endl;
	cout << "6.�˷�" << endl;
	cout << "7.��ѯͳ��" << endl;
	cout << "8.ע����" << endl;
	cout << "0.�˳�" << endl;
	cout << "��ѡ��˵����ţ�0~8����";
};
bool inputCardNo(string&strNo,vector<Card>vec)
{
	while (1)
	{
		int nCardIndex;
		char ch = 'm';
		cout << "�����뿨�ţ�����Ϊ1-17����";
		cin >> strNo;
		if (strNo.length() >= 17)
		{
			cout << "���ų��ȳ������ֵ" << endl;
			while (ch != 'N'&&ch != 'Y' && ch != 'n'&&ch != 'y')
			{
				cout << "����������(y/n)";
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
			cout << "�����Ѵ���" << endl;
			while (ch != 'N'&&ch != 'Y' && ch != 'n'&&ch != 'y')
			{
				cout << "����������(y/n)";
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
		cout << "�������루����Ϊ1��8���� ";
		cin >> strPwd;
		if (strPwd.length() >= 8)
		{
			cout << "���볤�ȳ������ֵ" << endl;
			char ch = 'K';
			while (ch != 'N'&&ch != 'Y' && ch != 'n'&&ch != 'y')
			{
				cout << "����������(y/n)";
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
		cout << "����� ";
		cin >> fBalance;
		if (fBalance < 0)
		{
			cout << "����������" << endl;
			char ch = 'a';
			while (ch != 'N'&&ch != 'Y' && ch != 'n'&&ch != 'y')
			{
				cout << "����������(Y/N)";
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
