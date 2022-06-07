#include <iostream>
#include <string>
using namespace std;

void foo_ref(int& b){
    b = 10;
}
void foo_pointer(int* b){
    *b = 20;
}
void foo(int& b){
    b = 30;
}

int main(){
    int a = 0;
    cout << a << endl;
    foo_ref(a);
    cout << a << endl;
    foo_pointer(&a);
    cout << a << endl;
    foo(a);
    cout << a << endl;
    return 0;
}