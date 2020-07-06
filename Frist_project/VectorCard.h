#include<string>
#include<vector>
#include"model.h"
int addNewCard(std::string strNo, std::string strPwd, double fBalance, std::vector<Card>&vec);
Card* cardIsExist(std::string strNo, int &nCardIndex, std::vector<Card>&vec);
