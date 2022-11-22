
#include <iostream>
#include "factory.h"
using namespace std;

int main() {
    FactoryA f1{};
    FactoryB f2{};
    f1.doSomethin();
    f2.doSomethin(); 
}