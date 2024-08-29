#include <iostream>

#include "signalslots/Signal.h"

using namespace std;

void slotFunction1(int value) {
    cout << "Slot 1 received : " << value << endl;
}

void slotFunction2(int value) {
    cout << "Slot 2 received : " << value << endl;
}

void emitSignal() {
    Signal signal;

    signal.connect(slotFunction1);
    signal.connect(slotFunction2);

    signal.emit(69);
    signal.emit(79);
}
