#include <iostream>

using namespace std;

int main(){
    
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age < 100 && age > 0){

        if(age < 18){
            cout << "You're to young to drive";
        }
        else if(age >= 18){
            cout << "You can drive";
        }
    }
    else{
        cout << "invalid input";
    }
    

    return 0;
}