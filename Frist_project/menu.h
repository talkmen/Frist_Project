#include<string>
#include<vector>
#include"model.h"
void outputMenu();
bool inputCardNo(std::string&strNo, std::vector<Card>vec);
bool inputCardPwd(std::string&strPwd);
bool inputCardBalance(double & fBalance);
bool inputNoPwd(std::string&strNo, std::string&strPwd,std:: vector<Card>vec);
bool inputNoPwdBalance(std::string&strNo,std::string&strPwd, double&fBalance,std:: vector<Card>vec);