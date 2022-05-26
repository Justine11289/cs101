#include <iostream>
#include <string>
using namespace std;

class Engine{
    private:
        int m_EngineCapacity;
        int m_Horsepower;
        bool m_EngineRunning;
    public:
        Engine(int EngineCapacity=2000, int  Horsepower=200){
            m_EngineCapacity = EngineCapacity;
            m_Horsepower = Horsepower;
            m_EngineRunning = false;
        }
    bool EngineStart(){
        if(!m_EngineRunning){
            m_EngineRunning = true;
        }
        return true;
    }
    bool EngineStop(){
        if(m_EngineRunning){
            m_EngineRunning = false;
        }
        return true;
    }
    bool get_EngineStatus(){
        return m_EngineRunning;
    }
};

class Car{
    private:
        Engine m_Engine;
        int m_MaxSeating;
        int m_price;
        int m_base;
        string m_brand;
        string m_model;
        int m_year;
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
        bool get_EngineStatus(){
            return m_Engine.get_EngineStatus();
        }
        bool startEngine(){
            return m_Engine.EngineStart();
        }
        bool stopEngine(){
            return m_Engine.EngineStop();
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

class BENZ_Car : public Car{
    private:
        string m_DriveMode;
    public:
        BENZ_Car(string y, int z, int s):Car("BENZ",y,z,s){
            cout << "Constructing BENZ_Car\n";
            m_DriveMode = "Front-wheel";
        }
        string get_DriveMode(){
            return m_DriveMode;
        }
};

int main(){
    BMW_Car car_1("X5",2020,6);
    cout << car_1.get_brand();
    cout << " : EngineStatus = " << car_1.get_EngineStatus() << endl;
    
    AUDI_Car car_2("A1",2021,2);
    car_2.startEngine();
    cout << car_2.get_brand();
    cout << " : EngineStatus = " << car_2.get_EngineStatus() << endl;
    car_2.stopEngine();
    cout << " : EngineStatus = " << car_2.get_EngineStatus() << endl;
    return 0;
}