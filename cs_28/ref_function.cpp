#include <iostream>
#include <string>
using namespace std;

void doCall(void (&f)(int)){
    f(42);
}

void call_func(int x){
    cout << "The answer might be " << x << "." << endl;
}

int main(){
    doCall(call_func);
    return 0;
}