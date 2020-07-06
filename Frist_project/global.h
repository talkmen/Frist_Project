#ifndef GLOBAL_H_INCLUDED 
#define GLOBAL_H_INCLUDED 
#include <string>
const std:: string CARDPATH = "card.dat";      // ����Ϣ��¼�ļ�
const std:: string BILLINGPATH = "billing.dat";   // �Ʒ���Ϣ��¼�ļ�
const std:: string MONEYPATH = "money.dat";     // ��ֵ�˷Ѽ�¼�ļ� 
const int TIMELENGTH = 20;       // ʱ���ַ����鳤�� 
const int SUCCESS = 0;       // �����ɹ� 
const int FINDCARD = 1;       // �ҵ���
const int NOFINDCARD = 2;       // û�ҵ��� 
const int NOMATCH = 3;       // �������벻ƥ�� 
const int ENOUGHMONEY = 4;       // ������ 
const int NOFARE = 5;       // û���ҵ��Ʒ���Ϣ 

const int USING = 6;       // ��״̬�������ϻ�
const int UNUSE = 7;       // ��״̬��û���ϻ�
const int INVALID = 8;       // ��״̬���Ѿ�ע�� 

const int NOSETTLEMENT = 0;     // �ϻ��ѽ��� 
const int YESSETTLEMENT = 1;     // �ϻ�δ���� 

const int UNIT = 15;           // ��С�շѵ�Ԫ(����) const float CHARGE = 0.5f;       // ÿ���Ʒѵ�Ԫ�շ�(Ԫ) 

#endif // GLOBAL_H_INCLUDED 