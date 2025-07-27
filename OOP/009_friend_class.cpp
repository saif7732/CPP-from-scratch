#include <iostream>
#include <windows.h>
using namespace std;

class complex;  //class declaration

class calculator{
    public:
        int realsum(complex, complex);  // function declaration
        int imgsum(complex, complex);
    };
    
    class complex{
        int a,b;
        public:
        friend int calculator :: realsum(complex o1, complex o2);   // giving access of a,b to realsum func
        friend int calculator :: imgsum(complex o1, complex o2);    // giving access of a,b to realsum func

        // friend class calculator;          //>>>> giving access of a,b to all functions of calculator

        void setnum(int m, int n){
            a = m;
            b = n;
        }
        void getnum(){
            cout << a << " + " << b << "i" << endl;
        }
    };

    int calculator :: realsum(complex o1, complex o2){  // functiooon definition
        return o1.a + o2.a;
    }
    int calculator :: imgsum(complex o1, complex o2){
        return o1.b + o2.b;
    }

int main(){
    
    complex a, b, c;
    calculator sum;

    a.setnum(5,6);
    b.setnum(7,8);

    cout << "a: ";
    a.getnum();
    cout << "b: ";
    b.getnum();
    cout << "Sum of real parts: " << sum.realsum(a,b)<< endl;
    cout << "Sum of imaginary parts: "<< sum.imgsum(a,b) << "i" ;
    
    return 0;
}