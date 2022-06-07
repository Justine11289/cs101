#include <iostream>
#include <string>
using namespace std;

int main(){
    string p = string("ABC");
    string q = string("abc");
    cout << (p == q) << endl;
    cout << (p < q) << endl;
    cout << (p <= q) << endl;
    cout << (p > q) << endl;
    cout << (p >= q) << endl;
    cout << (p != q) << endl;
    return 0;
}