#include <iostream>

using namespace std;

int main(){
    
    int n;
    cout << "How many print: ";
    cin >> n;
    
    int i = 1;
    while(i<=n){
        cout << i << ". I Love You!" << endl;
        i++;
    }

    return 0;
}