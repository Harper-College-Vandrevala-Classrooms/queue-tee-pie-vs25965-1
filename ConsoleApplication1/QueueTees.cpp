#include "QueueTees.h"
QueueTees::QueueTees()
{
    start = 0;
    top = 0;
    capacity = 3;
}
bool QueueTees::full()
{
    return top >= capacity;
}
bool QueueTees::empty()
{
    return start == top;
}
void QueueTees::enqueue(Cutie* newCutie)
{
    if (!full()) {
        cutiesArray[top] = newCutie; // Add the new Cutie to the array
        top++; // Move the top index to the next position
    }
    else {
        throw runtime_error("Queue is full! Cannot add more Cuties.");
    }

}
Cutie* QueueTees::dequeue()
{
    if (!empty())
    {
        Cutie* cutieOut = cutiesArray[start];
        start++;
        return cutieOut;
    }
    else {
        throw runtime_error("Queue is empty! Cannot dequeue.");
    }
}
int QueueTees::size() {
    return top - start; 
}