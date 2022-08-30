#ifndef __PRODUCT_H__
#define __PRODUCT_H__
#include <string>

class Product {
    public:
        virtual ~Product() {}
        virtual std::string Operation() const = 0;
};

#endif