#include <iostream>
#include <string>
using namespace std;

class MyString{
    private:
        string m_str;
    public:
        MyString(string str){
            m_str = str;
        }
        string& get_str(){
            cout << " &m_str " << &m_str << endl;
            return m_str;
        }
        string get_mystr(){
            return m_str;
        }
};

int main(){
    MyString str("CSIE");
    string& p = str.get_str();
    cout << " " << p << endl;
    cout << " &p     " << &p << endl;
    p = "IU 123";
    cout << " " << str.get_mystr() << endl;
    return 0;
}