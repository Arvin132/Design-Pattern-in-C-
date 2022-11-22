#include "concerete.h"
#include "decorator.h"


int main() {
    Object *obj1 = new ConcreteObject{};
    obj1->doSomthing();
    obj1 = new ConcereteDecoratorA(obj1);
    obj1->doSomthing();
    obj1 = new ConcereteDecoratorB(obj1);
    obj1->doSomthing();
}