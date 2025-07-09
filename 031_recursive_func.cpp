#include <iostream>
using namespace std;

long long int factorial(int a);
long long int factorial(int a){
    if(a == 0 || a == 1){
        return 1;
    }
    return a*factorial(a-1);
}

int main(){
    
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout <<  "Factorial of "<< n << " is : " << factorial(n);

    return 0;
}