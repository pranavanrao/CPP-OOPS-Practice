#ifndef SIGNAL_H
#define SIGNAL_H

#include <vector>

using namespace std;

typedef void (*SlotType)(int);

class Signal
{
public:
    Signal();

    void connect(SlotType slot);
    void emit(int value);

private:
    vector<SlotType> slots;
};

#endif // SIGNAL_H
