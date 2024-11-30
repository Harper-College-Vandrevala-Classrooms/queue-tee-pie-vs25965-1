#pragma once
#include <string>
#include "Cutie.h"

using namespace std;

class Puppy : public Cutie {
public:
    string description() override {
        return "A little puppy with big, sad eyes";
    }

    int cuteness_rating() override {
        return 11;
    }
};