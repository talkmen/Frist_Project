#include"stdafx.h"
#include <time.h> // 包含时间类型头文件
#include <iostream>  // 包含sscanf()函数头文件 
void timeToString(time_t t, char* pBuf)
{
	struct tm  timeinfo;
	time(&t);
	localtime_s(&timeinfo, &t);
	strftime(pBuf, 20, "%Y-%m-%d %H:%M", &timeinfo);
};
time_t stringToTime(char* pTime)
{
	struct tm tm1;
	time_t time1;
	sscanf_s(pTime, "%d-%d-%d %d:%d", &tm1.tm_year, &tm1.tm_mon, &tm1.tm_mday, &tm1.tm_hour, &tm1.tm_min);
	tm1.tm_year -= 1900;  // 年份为从1900年开始     
	tm1.tm_mon -= 1;      // 月份为0~11 
	tm1.tm_sec = 0;
	tm1.tm_isdst = -1;
	time1 = mktime(&tm1);
	return time1;
};