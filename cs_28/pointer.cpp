#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "CSIE";
    string* ptr = &str;
    cout << ptr << endl;
    cout << &str << endl;
    cout << str << endl;
    return 0;
}