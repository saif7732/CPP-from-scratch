#include <iostream>
using namespace std;

class y;

class x{
    int a;
    public:
        void setdata(int m){
            a = m;
        }
        void showdata(){
            cout << a << endl;
        }
    friend void exchange(x &, y &);    
};

class y{
    int b;
    public:
        void setdata(int n){
            b = n;
        }
        void showdata(){
            cout << b << endl;
        }
    friend void exchange(x &, y &);
};

void exchange(x &o1, y &o2){
    int temp = o1.a;
        o1.a = o2.b;
        o2.b = temp;
}

int main(){
    
    x a1;
    y a2;

    a1.setdata(33);
    a2.setdata(67);

    cout << "a1: ";
    a1.showdata();
    cout << "a2: ";
    a2.showdata();

    exchange(a1, a2);

    cout << endl << "======Exchanged======" <<endl << endl;
    cout << "a1: ";
    a1.showdata();
    cout << "a2: ";
    a2.showdata();
    return 0;
}