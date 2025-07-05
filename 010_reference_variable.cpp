#include <iostream>

using namespace std;

int main(){
    
    float num = 69;
    float &x = num;
    cout << num << endl;
    cout << x << endl;

    x = x+1;    //changing the value of x will change num to

    cout << num;

    return 0;
}