#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    cout << "Enter a name:";
    cin >> name;
    for(int i = 0; i < name.length(); i++){
        cout << "[" << i << "] = " << name[i] << endl;
    }
    return 0;
}