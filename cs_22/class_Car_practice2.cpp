#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
        int m_MaxSeating;
        int m_price;
        int m_base;
        void m_UpdatePrice(int base){
            m_base = base;
            m_price = m_MaxSeating * m_base;
        }
    public:
        string m_brand;
        string m_model;
        int m_year;
        Car(string x, string y, int z, int s){
            m_brand = x;
            m_model = y;
            m_year = z;
            m_MaxSeating = s;
            m_UpdatePrice();
        }
        int get_MaxSeating(){
            return m_MaxSeating;
        }
        int get_Price(){
            return  m_price;
        }
        void set_base(int n){
            m_UpdatePrice(n);
        }
};

int main(){
    Car car_1("BMW", "X5", 2020, 6);
    Car car_2("Audi", "A1", 2021, 2);
    car_1.set_base(10000000);
    car_2.set_base(5000000);
    cout << car_1.m_brand << " price=" << car_1.get_Price() << endl;
    cout << car_2.m_brand << " price=" << car_2.get_Price() << endl;
    return 0;
}