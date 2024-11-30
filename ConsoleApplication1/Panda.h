#pragma once
#include <string>
#include "Cutie.h"

using namespace std;

class Panda : public Cutie {
public:
    string description() override {
        return "little panda with big cheeks.";
    }

    int cuteness_rating() override {
        return 8;
    }
};