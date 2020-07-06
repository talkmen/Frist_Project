#include"stdafx.h"
#include<vector>
#include"model.h"
#include<string>
#include"VectorCard.h"
#include"global.h"
#include<iostream>
#include"file.h"
using namespace std;
int addNewCard(string strNo, string strPwd, double fBalance, vector<Card>&vec)
{    Card card;
	card.tStart = card.tLast = time(NULL);
	strcpy_s(card.aName, strNo.c_str());
	strcpy_s(card.aPwd, strPwd.c_str());
	card.fBalance = fBalance;
	card.fTotalUse = card.fBalance;
	card.nStatus = UNUSE;
	card.nUseCount = 0;
	vec.push_back(card);//这个方法就是添加最后一个元素
	saveCard(vec, CARDPATH);
	return SUCCESS;
};
Card* cardIsExist(string strNo,int &nCardIndex, vector<Card>&vec)
{
	vector<Card>::iterator it;
	nCardIndex = 0;
	for (it = vec.begin(); it != vec.end(); it++)
	{
		if (strcmp(it->aName, strNo.c_str()) == 0)
		{
			return &(*it);
		}
		nCardIndex++;
	}
	return NULL;
};


