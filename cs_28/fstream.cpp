#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    ofstream out;
    ifstream in;
    string a, b;

    out.open("output.txt");
    out << "hello, IU";
    out.close();

    in.open("output.txt");
    in >> a >> b;
    in.close();
    cout << a << b << endl;
    return 0;
}