#include <iostream>
using namespace std;

long long int factorial(int a);
long long int factorial(int a){
    if(a == 0 || a == 1){
        return 1;
    }
    return a*factorial(a-1);
    // return a*(a-1)*factorial(a-2);     can be also written like this!!
}

int main(){
    
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout <<  "Factorial of "<< n << " is : " << factorial(n);

    return 0;
}