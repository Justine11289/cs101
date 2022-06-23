#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int ivalue;
    try{
        ifstream in("in.txt");
        in.exceptions(ifstream::failbit);
        in >> ivalue;
    }
    catch(const ios_base::failure& fail){
        cout << fail.what() << endl; 
    }
    return 0;
}