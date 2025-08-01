#include <iostream>
using namespace std;

class number{
    int a;
    public:
        number(){
            a = 0;
        }
        number(int x){
            a = x;
        }
        number(number &obj){    //copy constructor
            cout << "copy constructor called" << endl;
            a = obj.a;          // when copy constructor not found, compiler use its own copy constructor
        }
        void shownum(){
            cout << a << endl;
        }
};

int main(){
    
    number x, y(2), z(5), z2;

    cout << "x: "; 
    x.shownum();
    cout << "y: ";
    y.shownum();
    cout << "z: ";
    z.shownum();

    number z1(z);       // copy constructor invoked
    cout << "z1: ";
    z1.shownum();

    z2 = z;     // copy constructor not invoked
    cout << "z2: ";
    z2.shownum();

    number z3 = z;      // copy constructor not invoked
    cout << "z3: ";
    z3.shownum();

    return 0;
}