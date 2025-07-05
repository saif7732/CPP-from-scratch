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
    cout << d.i << endl;
    d.f = 20.05;
    cout << d.f << endl;
    d.c = 'A';
    cout << d.c << endl;

    cout << "i after printing c: " << d.i <<endl;


    return 0;
}