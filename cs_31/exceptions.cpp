#include <iostream>
using namespace std;

int main(){
    int age = 15;
    try{
        if(age >= 18){
            cout << "Access granted - you are old enough.";
        }
        else{
            throw -1;
        }
    }
    catch(...){
        cout << "Access denied - you must be at least 18 years old." << endl; 
    }
    return 0;
}