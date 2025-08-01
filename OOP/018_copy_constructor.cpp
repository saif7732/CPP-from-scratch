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
            a = obj.a;
        }
        void shownum(){
            cout << a << endl;
        }
};

int main(){
    
    number x, y(2), z(5), z1(z);

    cout << "x: "; 
    x.shownum();
    cout << "y: ";
    y.shownum();
    cout << "z: ";
    z.shownum();
    cout << "z1: ";
    z1.shownum();

    return 0;
}