#include <iostream>
#include <string>
using namespace std;

class FuncModClass{
    public:
        void FuncMod(int* ptr){
           ptr++;
        }
        void FuncMod_pointer(int** ptr){
           (*ptr)++;
        }
        void FuncMod_ref(int*& ptr){
           ptr++;
        }
        
};

int main(){
    int array[4] = {111,222,333,444};
    int* iptr = &array[1];
    FuncModClass* p = new FuncModClass;
    cout << "*iptr = " << *iptr << endl;
    p->FuncMod(iptr);
    cout << "*iptr = " << *iptr << endl;
    p->FuncMod_pointer(&iptr);
    cout << "*iptr = " << *iptr << endl;
    p->FuncMod_ref(iptr);
    cout << "*iptr = " << *iptr << endl;
    return 0;
}