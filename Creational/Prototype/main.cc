#include <iostream>
#include "product.h"

int main() {
    Prototype prot{4, "someName", 'd'};
    Product p1(prot);
    prot = p1.copy();
    prot.name = "NewName";
    Product p1(prot);
}