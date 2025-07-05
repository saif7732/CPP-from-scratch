#include <iostream>
using namespace std;

int sum(int a, int b);      //function prototype
int sum(int a, int b){      //function definition
    //a and b are formal parameter
    int c = a+b;
    return c;
}

int main(){
    
    int a, b;
    //a and b are actual parameter

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "The sum of " << a << " and " << b << " is: " << sum(a,b) << endl;

    return 0;
} 