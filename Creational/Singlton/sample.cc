#include "sample.h"
bool SingleClass::hasBeenCreated;


SingleClass::SingleClass(int data): data(data) {
    hasBeenCreated = true;
}

SingleClass::~SingleClass() {
    hasBeenCreated = false;
}

SingleClass *SingleClass::createClass(int data) {
    if (hasBeenCreated) {
        return nullptr;
    } else {
        return new SingleClass(data);
    }
}