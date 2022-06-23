#include <iostream>
using namespace std;

double zeroDivision(int x, int y){
    if(y == 0){
        throw string("Division by Zero!");
    }
    return (x / y);
}

int main(){
    int a = 11, b = 0;
    double c = 0;
    try{
        c = zeroDivision(a,b);
        cout << c << endl;
    }
    catch(string message){
        cout << message << endl; 
    }
    return 0;
}