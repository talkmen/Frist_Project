#ifndef MODEL_H_INCLUDED 
#define MODEL_H_INCLUDED 
#include<time.h>
struct Card
{
	char aName[18];
	char aPwd[8];
	int nStatus;
	time_t tStart;
	double fTotalUse;
	time_t tLast;
	int nUseCount;
	double fBalance;
};
#endif 
