#include "sample.h"
#include <iostream>
using namespace std;

int main(int args, char *argv[]) {
    cout << "create Data or look at the data?";

    
    SingleClass *newSingle = nullptr;
    while (!cin.fail()) {
        string s;
        cin >> s;
        if (s == "create") {
            int num;
            cin >> num;
            if (cin.fail()) {
                cout << "non valid input" << endl;
                cin.clear();
                continue;
            }
            SingleClass *tempSingle = SingleClass::createClass(num);
            if (tempSingle) {
                cout << "created " << endl;
                newSingle = tempSingle;
            } else {
                cout << "already created " << endl;
            }
        } else if (s == "look") {
            if (newSingle != nullptr) {
                cout << newSingle->getData() << endl;
            } else {
                cout << "has not been created" << endl;
            }
        
        } else if (s == "delete") {
            if (newSingle) {
                delete newSingle;
                newSingle = nullptr;
                cout << "deleted" << endl;
            } else {
                cout << "has not been created" << endl;
            }
        } else {
            cout << "non valid input" << endl;
        }
    }
}
