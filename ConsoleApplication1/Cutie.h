#pragma once
#include <string>

using namespace std;
class Cutie {
public:
	virtual string description() = 0;   
	virtual int cuteness_rating() = 0;
};