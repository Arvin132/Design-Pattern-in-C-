#ifndef __DECO_H__
#define __DECO_H__
#include "object.h"
#include <iostream>

class Decorator: public Object {
    protected:
        Object *next;
    public:
        Decorator(Object *next): Object() , next(next) {}
        ~Decorator() { delete next; }
};

class ConcereteDecoratorA : public Decorator {
    public:
        ConcereteDecoratorA(Object *next): Decorator(next) {}
        void doSomthing() final override {
            std::cout << "i am not sure if ";
            next->doSomthing(); 
        }
};

class ConcereteDecoratorB : public Decorator {
    public:
        ConcereteDecoratorB(Object *next): Decorator(next) {}
        void doSomthing() final override {
            std::cout << "i am sure that ";
            next->doSomthing(); 
        }
};
#endif