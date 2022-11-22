#ifndef __CONC_H__
#define __CONC_H__
#include <iostream>
#include "object.h"

class ConcreteObject : public Object {
    public:
        ConcreteObject() {}
        ~ConcreteObject() {}
        void doSomthing() final override { 
            std::cout << "i am happy " << std::endl;
        };
};


#endif