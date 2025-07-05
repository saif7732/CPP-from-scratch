#include <iostream>
using namespace std;

int & swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main(){
    
    int a = 4, b = 5;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    swap(a, b) = 69;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}