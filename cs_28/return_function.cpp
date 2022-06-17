#include <iostream>
#include <string>
using namespace std;

int& reftest(int &a){
    return a;
}

int main(){
    int val1 = 11, val2 = 22, val3 = 33, val4 = 44;
    val1 = reftest(val4);
    cout << "val1 = " << val1 << " , val2 = " << val2 << endl;
    reftest(val2) = val3;
    cout << "val1 = " << val1 << " , val2 = " << val2 << endl;
    return 0;
}