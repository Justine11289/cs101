#include <iostream>
#include <string>
using namespace std;

class Base{
    public:
        virtual void func1(){
            cout << "Base func1" << endl;
        }
};

class Derived_0 : public Base{
    public:
        virtual void func1(){
            cout << "Derived_0 -> func1" << endl;
        }
};

class Derived_E : public Base{
    public:
        virtual void func1(){
            cout << "Derived_E -> func1" << endl;
        }
};

int main(){
    Base* d[5];
    for(int i = 0; i < 5; i++){
        (i%2)?(d[i] = new Derived_0()):(d[i] = new Derived_E());
    }
    for(int i = 0; i < 5; i++){
        d[i] -> func1();
    }
    return 0;
}