#include <iostream>

using namespace std;

int main(){
    
    const int a = 4;
    cout << "the value of a is: " << a << endl;

    //a = 3;      //value of a is now unchangeable
                //because of const
    cout << "the changed value of a is: " << a << endl;

    return 0;
}