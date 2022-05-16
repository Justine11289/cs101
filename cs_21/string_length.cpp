#include <iostream>
#include <string>
using namespace std;

int main(){
    string firstName = "IU";
    string lastName = "Lee";
    string fullName = firstName.append(lastName);
    cout << fullName << endl;
    cout << "length" << fullName.length() << endl;
    cout << "size" << fullName.size() << endl;
    return 0;
}