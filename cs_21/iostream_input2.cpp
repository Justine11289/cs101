#include <iostream>
#include <string>
using namespace std;

int main(){
    int x,y,z;
    cout << "Enter a number:";
    cin >> x;
    cout << "Enter 2 numbers:";
    cin >> y >> z;
    cout << "Sum =" << (x+y+z) << endl;

    float fv;
    cout << "float:";
    cin >> fv;
    cout << "float =" << fv << endl;

    string name;
    cout << "Name:";
    cin >> name;
    cout << "Name =" << name << endl;
    return 0;
}