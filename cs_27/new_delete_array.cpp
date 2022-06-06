#include <iostream>
#include <string>
using namespace std;

int main(){
    int** pp = new int* [5];
    int* p = new int [5];
    if(!pp){
        cout << "allocate memory error!!" << endl;
    }
    for(int i = 0; i < 5; i++){
        pp[i] = &p[i];
    }
    for(int i = 0; i < 5; i++){
        cout << "pp[" << i << "]: " << pp[i];
        cout << " == &p[" << i << "]: " << &p[i] << endl;
    }
    delete[] pp;
    cout << "delete pp" << endl;
    delete[] p;
    return 0;
}