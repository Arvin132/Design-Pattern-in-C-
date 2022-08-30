#ifndef __FACTORY_H__
#define __FACTROY_H__
#include "product.h"
#include <string>

class Factory {
    public:
        virtual ~Factory() {}
        virtual Product *produceProduct() const = 0;
        
};

#endif