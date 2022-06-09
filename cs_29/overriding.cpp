#include <iostream>
#include <string>
using namespace std;

class Base{
    public:
        virtual void func1(){
            cout << "Base func1" << endl;
        }
};

class Derived : public Base{
    public:
        virtual void func1(){
            cout << "Derived func1" << endl;
        }
};

class Derived1 : public Derived{
    public:
        void func1(){
            cout << "Derived1 func1" << endl;
        }
};

class Derived2 : public Derived{
    public:
        void func2(){
            cout << "Derived2 func2" << endl;
        }
};

int main(){
    Base b;
    b.func1();
    Derived d;
    d.func1();
    Base* d1 = new Derived1();
    d1->func1();
    Derived* d2 = new Derived2();
    d2->func2();
    return 0;
}