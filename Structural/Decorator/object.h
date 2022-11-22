#ifndef __OBJECT_H__
#define __OBJECT_H__

class Object {
    public:
        virtual ~Object() {}
        virtual void doSomthing() = 0;
};


#endif