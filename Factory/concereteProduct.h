#ifndef __CONCRETE_PRODUCT_1__
#define __CONCRETE_PRODUCT_2__
#include "product.h"

class ConceretProduct1 : public Product {
    public:
        std::string Operation() const override {
            return std::string("Result of Concerete Product 1");    
        }
};


class ConcereteProduct2: public Product {
    public:
        std::string Operation() const override {
            return std::string("Result of Concrete Product 2");
        }
};

#endif