#include <iostream>

using namespace std;

int a = 5;      //global variable

int main(){
    
    int a = 10;     //local variable

    cout << "local variable: " << a << endl;
    cout << "global variable: " << ::a <<endl;
    return 0;
}