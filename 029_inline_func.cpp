#include <iostream>
using namespace std;

inline int product(int a, int b){
    return a*b;
}

int main(){
    
    int a,b;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;

    
    cout << "product: " << product(a,b) << endl;    //use inline if calling same function multiple time
    cout << "product: " << product(a,b) << endl;    //use inline if calling same function multiple time
    cout << "product: " << product(a,b) << endl;    //use inline if calling same function multiple time
    cout << "product: " << product(a,b) << endl;    //use inline if calling same function multiple time
    cout << "product: " << product(a,b) << endl;    //use inline if calling same function multiple time
    cout << "product: " << product(a,b) << endl;    //use inline if calling same function multiple time
    cout << "product: " << product(a,b) << endl;    //use inline if calling same function multiple time
    cout << "product: " << product(a,b) << endl;    //use inline if calling same function multiple time
    cout << "product: " << product(a,b) << endl;    //use inline if calling same function multiple time
    
    return 0;
}