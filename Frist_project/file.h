#include<string>
#include"model.h"
#include<vector>
bool saveCard(std::vector<Card>&vec, const std::string pPath);

void CardVectorInit(const std::string filename, std::vector<Card>&vec);
void deleteCard(std::vector<Card>&vec);