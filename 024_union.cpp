#include <iostream>

using namespace std;

union data{
    int i;
    float f;
    char c;
};

int main(){
    
    data d;

    d.i = 10;
    cout << "i: " << d.i << endl;
    
    d.f = 20.05;
    cout << "f: " << d.f << endl;

    cout << "i after printing f: " << d.i <<endl;       // it will provide garbage value because in the union all 
                                                        // variables share same memory location
    d.c = 'A';
    cout << "c: " << d.c << endl;



    return 0;
}