#include <iostream>
#include <iomanip>  //for manipulator function

using namespace std;

int main(){
    
    int a = 4, b = 55, c = 666, d = 7777;

    cout << "the value of a without setw is: " << a << endl;
    cout << "the value of b without setw is: " << b << endl;
    cout << "the value of c without setw is: " << c << endl;
    cout << "the value of d without setw is: " << d << endl;

    cout << "the value of a with setw is: "<<setw(4) << a << endl;
    cout << "the value of b with setw is: "<<setw(4) << b << endl; //justifies output
    cout << "the value of c with setw is: "<<setw(4) << c << endl;
    cout << "the value of d with setw is: "<<setw(4) << d << endl;

    return 0;
}