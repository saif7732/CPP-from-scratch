#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int n;

    cout << "How many wish to print: ";
    cin >> n;

    for(int i = 1; i<=n; i++){
        cout << setw(3) << i  << ". I Love You!" << endl;
    }

    return 0;
}