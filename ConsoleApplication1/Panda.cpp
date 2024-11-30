#include <string>
#include "Cutie.h"

using namespace std;

class Panda : public Cutie {
    string description() override {
        return "little panda with big cheeks.";
    }

    int cuteness_rating() override {
        return 8;
    }
};