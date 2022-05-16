#include <iostream>
#include <string>
using namespace std;

int main(){
    string a = "10";
    string b = "20";
    cout << "Before swap a = " << a << endl;
    cout << "Before swap b = " << b << endl;
    a.swap(b);
    cout << "After swap a = " << a << endl;
    cout << "After swap b = " << b << endl;
    return 0;
}