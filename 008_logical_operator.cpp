#include <iostream>

using namespace std;

int main(){
    
    int a = 4, b = 5, c = 4;

    cout << ((a==c) && (a<b)) << endl;
    cout << ((c<b) || (a>b)) << endl;

    return 0;
}