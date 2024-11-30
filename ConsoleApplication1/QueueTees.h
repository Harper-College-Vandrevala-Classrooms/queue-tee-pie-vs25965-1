#pragma once
#include "Cutie.h"
#include <stdexcept> // For std::runtime_error
class QueueTees
{
private:
    Cutie* cutiesArray[3]; // Pointer to an array of Cutie pointers
    int start;
    int top;
    int capacity; // Maximum capacity of the queue

public:
    QueueTees(); 
    bool full();
    bool  empty();
    void enqueue(Cutie* newCutie);
    Cutie* dequeue();
    int size();
};

