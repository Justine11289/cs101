#include <iostream>
using namespace std;

template <class T> 
class point{
    private:
        T m_t;
    public:
        point(T t){
            m_t = t;
        }
        void print(){
            cout << "print point " << m_t << endl;
        }
};

template <class T, class U> 
class Pair{
    private:
        T m_first;
        U m_second;
    public:
        Pair(T a, U b){
            m_first = a;
            m_second = b;
        }
        T bigger(){
            return (m_first > m_second) ? m_first : m_second;
        }
};

int main(){
    point<int> p(100);
    p.print();
    point<double> double_p(1.001);
    double_p.print();

    Pair<int,double> myPair(23, 5.68);
    cout << myPair.bigger() << " bigger " << endl;
    return 0;
}