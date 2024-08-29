#include "Signal.h"

Signal::Signal() {}

void Signal::connect(SlotType slot)
{
    slots.push_back(slot);
}

void Signal::emit(int value)
{
    for (SlotType slot: slots) {
        slot(value);
    }
}
