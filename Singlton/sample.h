#ifndef __SINGEL_H__
#define __SINGEL_H__
class SingleClass {
    private:
        int data;
        static bool hasBeenCreated;
        SingleClass(int data);
        

    public:
        ~SingleClass();
        static SingleClass *createClass(int data);
        int getData() {
            return data;
        } 
};

#endif
