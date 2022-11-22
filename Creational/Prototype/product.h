#ifndef __PRODUCT_H__
#define __PRODUCT_H__
#include "prototype.h"
class Product {
    int size;
    std::string name;
    char color;

    public:
        Product(Prototype &formula): size(formula.size), name(formula.name), color(formula.color) {}
        Prototype copy() {
            return Prototype{size, name, color};
        }
};

#endif