#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
        string m_brand;
        string m_model;
        int m_year;
        int m_MaxSeating;
        Car(string x, string y, int z, int s){
            m_brand = x;
            m_model = y;
            m_year = z;
            m_MaxSeating = s;
        }
        int get_MaxSeating(){
            return m_MaxSeating;
        }
};

int main(){
    Car car_1("BMW", "X5", 2020, 6);
    Car car_2("Audi", "A1", 2021, 2);
    cout << car_1.m_brand << "max seating=" << car_1.get_MaxSeating() << endl;
    cout << car_2.m_brand << "max seating=" << car_2.get_MaxSeating() << endl;
    return 0;
}