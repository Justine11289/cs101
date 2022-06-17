#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class myString{};

class ReadClass{
    private:
        ifstream in;
        string str, outp;
        string fin = "main.cpp";
        int count;
    public:
        int pos;
        void showClass(){
            ifstream in;
            in.open(fin);
            count = 0;
            while(getline(in, str)){
                string pt = "";
                pos = str.find("class ");
                if(pos!=-1){
                    for (char t : str) {
                        if (t != '{')
                            pt += t;
                        else {
                            outp += pt + "\n";
                            count++;
                        }
                    }
                }
            }
            cout << count << " class in " << fin << endl << outp;
            in.close();
        }
};

int main(){
    ReadClass rfile;
    rfile.showClass();
    return 0;
}

