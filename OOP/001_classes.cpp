#include <iostream>
using namespace std;

class student{
    private:
        int a,b,c;  //private variable must be accessed by a function
    public:
        int d,e;
        void scandata(int a, int b, int c);  //func declaration
        void printdata(){
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
            cout << "c = " << c << endl;
            cout << "d = " << d << endl;
            cout << "e = " << e << endl;
        }
} ;

void student :: scandata(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    
    student saif;
    saif.d = 5;
    saif.e = 6;

    saif.scandata(6,9,8);

    saif.printdata();

    return 0;
}