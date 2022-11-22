#ifndef __PRODUCT_H__
#define __PRODUCT_H__
#include <string>

class Product {
    public:
        virtual void operation() = 0;
};

class ProductA: public Product { 
    public:
        void operation() final override {}
};

class ProductB: public Product {
    public:
        void operation() final override {}
};

class Factory {
    public:
        virtual ~Factory() {}
        virtual Product *produceProduct() const = 0;
        void doSomethin() {
            Product *prdct = produceProduct();
            prdct->operation();
            delete prdct;
        }      
};

class FactoryA : public Factory {
    public:
        ~FactoryA() {}
        Product *produceProduct() const final override {
            return new ProductA{};
        }
};

class FactoryB : public Factory {
    public:
        ~FactoryB() {}
        Product *produceProduct() const final override {
            return new ProductB{};
        }
};


#endif