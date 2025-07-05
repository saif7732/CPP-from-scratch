#include <iostream>

using namespace std;

int main(){
    
    int marks[] = {10,20,30,40,50,60};
    int *ptr = marks;

    for(int i = 0; i<6; i++){
        cout << "The value ar marks " <<i << " is " << *(ptr++) <<endl;
    }

    return 0;
}