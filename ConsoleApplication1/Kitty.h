#pragma once
#include <string>
#include "Cutie.h"

using namespace std;

class Kitty : public Cutie {
public:
    string description() override {
        return "A little cat with big blue eyes.";
    }

    int cuteness_rating() override {
        return 10;
    }
};