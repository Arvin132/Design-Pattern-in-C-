#include <iostream>
#include <algorithm>

using namespace std;

class Target {
    public:
        virtual ~Target() = default;
        virtual string request() const {
            return "Message from Target";
        }
};

class Adaptee final {
    public:
        string specificRequest() const {
            return ".eetpadA eht fo roivaheb laicepS";
        }
};


class Adapter: public Target {
    Adaptee *adaptee;

    public:
        Adapter(Adaptee *adaptee): Target() , adaptee(adaptee) {}
        string request() const override {
            string given = adaptee->specificRequest();
            reverse(given.begin(), given.end());
            return given;
        }
};



void userCode(Target *tg) {
    cout << tg->request() << endl;
}


int main(int args, char* argv[]) {
    std::cout << "Client: I can work just fine with the Target objects:\n";
  Target *target = new Target;
  userCode(target);
  std::cout << "\n\n";
  Adaptee *adaptee = new Adaptee;
  std::cout << "Client: The Adaptee class has a weird interface. See, I don't understand it:\n";
  std::cout << "Adaptee: " << adaptee->specificRequest();
  std::cout << "\n\n";
  std::cout << "Client: But I can work with it via the Adapter:\n";
  Target *adapter = new Adapter(adaptee);
  userCode(adapter);
  std::cout << "\n";

  delete target;
  delete adaptee;
  delete adapter;
}