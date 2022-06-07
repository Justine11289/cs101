#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
        void sound(){
            cout << "??" << endl;
        }
};

class Cat : Animal{
    public:
        void sound(){
            cout << "meow" << endl;
        }
};

class Dog : Animal{
    public:
        void sound(){
            cout << "bark" << endl;
        }
        void sound(int i){
            for(int j = 0; j < i; j++){
                cout << "bark";
            }
            cout << endl;
        }
        void sound(string s, int i){
            for(int j = 0; j < i; j++){
                cout << s;
            }
            cout << endl;
        }
};

int main(){
    Cat myCat;
    Dog myDog;
    myCat.sound();
    myDog.sound();
    myDog.sound(5);
    myDog.sound("meow bark~",3);
    return 0;
}