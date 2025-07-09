#include <iostream>
using namespace std;

int sum(int a, int b){
    cout << "using the function with two arguments" << endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout << "using the function with three arguments" << endl;
    return a+b+c;
}

int main(){
    
    int a,b,c;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    cout << "the sum of a and b is: " <<sum(a,b) <<endl;
    cout << "the sum of a, b and c is: " <<sum(a,b,c) <<endl;

    return 0;
}