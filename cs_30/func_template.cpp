#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

template <class T> 
T tmp_sum(T a, T b){
    return a+b;
};

template <class T> 
T tmp_sub(T a, T b){
    return a-b;
};

template <class T, class U> 
T tmp_max(T a, U b){
    return (a > b) ? a : b;
};

int main(){
    int x = 10, y = 15;
    cout << "sum = " << sum(x,y) << endl;
    float xf = 1.5, yf = 1.8;
    cout << "tmp_sum = " << tmp_sum(xf,yf) << endl;
    cout << "tmp_sub = " << tmp_sub(x,y) << endl;
    cout << "tmp_max = " << tmp_max(5,10) << endl;
    cout << "tmp_max = " << tmp_max('a','A') << endl;
    return 0;
}