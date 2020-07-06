#include"stdafx.h"
#include<iostream>
#include<string>
#include"menu.h"
#include<vector>
#include"model.h"
#include"global.h"
#include"VectorCard.h"
#include"tool.h"
using namespace std;
void addCard(vector<Card> &vec)
{
	string strNo;
	string strPwd;
	double fBalance;
	if (inputNoPwdBalance(strNo, strPwd, fBalance,vec))
	{
		int nResult;
		nResult = addNewCard(strNo, strPwd, fBalance, vec);
	    if (nResult == SUCCESS)
		{
			cout << "����ӿ��ɹ�" << endl;
		}
		else
		{
			cout << "�������" << endl;
		}
	}

};
void displayCard(vector<Card>&vec, vector<Card>::iterator it)
{
		char aLastTime[TIMELENGTH] = { 0 };
		timeToString(it->tLast, aLastTime);
		cout << it->aName << "\t";
		if (it->nStatus == USING)
			cout << "�ϻ�\t";
		else if (it->nStatus == UNUSE)
			cout << "δ�ϻ�\t";
		else if (it->nStatus == INVALID)
			cout << "ע��\t";
		else
			cout << "����\t";
		cout << it->fBalance << "\t";
		cout << it->fTotalUse << "\t\t";
		cout << it->nUseCount << "\t\t";
		cout << aLastTime << endl << endl;
};
void queryCard(vector<Card>vec)
{
	vector<Card>::iterator it;
	cout << "����\t״̬\t���\t�ۼ�ʹ��\tʹ�ô���\t�ϴ�ʹ��ʱ��\n";
	for (it = vec.begin(); it != vec.end(); it++)
	displayCard(vec,it);
	while (1)
	{
		cout << "����Ҫ��ѯ�Ŀ���:" << " ";
		char a[20];
		int i=0, j=0, Cnt=0;
		for (; i < 20; i++)
		{
			a[i] = 'z';
		}
		i = 0;
		char ch;
		cin >> a;
		while (a[i++] != 'z'); 
		cout << i << endl;
	    cout << "����\t״̬\t���\t�ۼ�ʹ��\tʹ�ô���\t�ϴ�ʹ��ʱ��\n";
		for (it = vec.begin(); it != vec.end(); it++)
		{
			j = 0;
			while (it->aName[j] == a[j++]);
			cout << j << endl;
			if (i == j+1 || j == i )                                                                         
			{
				displayCard(vec, it);
				Cnt++;
			}
		};
		if (Cnt == 0)
			cout << "���޴˿�" << endl;
		cout << "�Ƿ������Y/N����" << " ";
		cin >> ch;
		cin.clear();
		cin.sync();
		if (ch == 'N' || ch == 'n')
			break;
	}
};
