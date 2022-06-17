#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
        int m_MaxSeating;
        int m_price;
        int m_base;
        string m_brand;
        string m_model;
        int m_year;
        string m_DriveMode;
        void m_UpdatePrice(int base = 500000){
            m_base = base;
            m_price = m_MaxSeating * m_base;
        }
    public:
        Car(string x, string y, int z, int s){
            m_brand = x;
            m_model = y;
            m_year = z;
            m_MaxSeating = s;
            m_UpdatePrice();
            m_DriveMode = "No-wheel";
            cout << "Constructing Car.\n";
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
        string get_brand(){
            return m_brand;
        }
        string get_DriveMode(){
            return m_DriveMode;
        }
};

class BMW_Car : public Car{
    private:
        string m_DriveMode;
    public:
        BMW_Car(string y, int z, int s):Car("BMW",y,z,s){
            cout << "Constructing BMW_Car\n";
            m_DriveMode = "Rear-wheel";
        }
        string get_DriveMode(){
            return m_DriveMode;
        }
};

class AUDI_Car : public Car{
    private:
        string m_DriveMode;
    public:
        AUDI_Car(string y, int z, int s):Car("AUDI",y,z,s){
            cout << "Constructing AUDI_Car\n";
            m_DriveMode = "Front-wheel";
        }
        string get_DriveMode(){
            return m_DriveMode;
        }
};

int main(){
    Car car_0("TW", "X0", 2019, 10);
    cout << car_0.get_brand();
    cout << " : DriveMode = " << car_0.get_DriveMode() << endl;
    
    BMW_Car car_1("X5",2020,6);
    cout << car_1.get_brand();
    cout << " : DriveMode = " << car_1.get_DriveMode() << endl;
    
    AUDI_Car car_2("A1",2021,2);
    cout << car_2.get_brand();
    cout << " : DriveMode = " << car_2.get_DriveMode() << endl;
    return 0;
}