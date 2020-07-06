#include"stdafx.h"
#include"model.h"
#include"global.h"
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
bool saveCard(vector<Card>&vec, const string pPath)
{
	ofstream ofile (pPath, ios::binary | ios::out);
	for (int k = 0; k < vec.size(); k++)
	{
		Card *pCard = &vec[k];
		ofile.write((const char*)pCard, sizeof(Card));
	}
	ofile.close();
	return true;
};
void CardVectorInit(const string filename, vector<Card>&vec)
{
	ifstream ifile(filename);
		Card card;
		if (!ifile.is_open())
			return;
	while (1)
	{
		ifile.read((char*)&card, sizeof(Card));
		if (ifile. eof())
			break;
		vec.push_back(card);
	}
};
void deleteCard(vector<Card>&vec)
{
	while (1)
	{
		char a[20] ;
		vector<Card>::iterator it;
		int i = 0, j = 0, Cnt = 0,k=0;
		for (; i < 20; i++)
		{
			a[i] = 'z';
		}
		i = 0;
		cout << "ɾ���Ŀ��ţ�" << endl;
		cin >> a;
		while (a[i++] != 'z');
		for (it = vec.begin(); it != vec.end(); )
		//for (int k = 0; k < vec.size();k++)
		{
			j = 0;
			while (it->aName[j] == a[j++]);
			//while (vec[k].aName[j] == a[j++]);
			if (i == j || j+1 == i)
			{
				it = vec.erase(it);
				//vec.erase(vec.begin()+k); //������itҪ��һ��int 
				Cnt++;
			}
			else
				++it;
		}
		saveCard(vec, CARDPATH);//�о�û��ִ��
		if (Cnt == 0)
		{
			cout << "���޴˿�" << endl;
			char ch;
	 		cout << "�Ƿ������Y/N����" << " ";
			cin >> ch;
			cin.clear();
			cin.sync();
			if (ch == 'N' || ch == 'n')
				break;
		}
		else
			break;
	}
};
//vec.pop_back(); //�����������ɾ�����һ��Ԫ��   ɾ��vec�����һ������Ե�������
//vec.erase(vec.begin + 2);  //�����������ɾ��ָ��Ԫ�أ�