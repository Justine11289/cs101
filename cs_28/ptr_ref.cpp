#include <iostream>
#include <string>
using namespace std;

int main(){
    int* ptr;
    int var = 7;
    ptr = &var;
    int& ref = var;
    cout << var << endl;
    cout << *ptr << endl;
    cout << ref << endl;
    cout << &var << endl;
    cout << ptr << endl;
    cout << &ref << endl;
    return 0;
}