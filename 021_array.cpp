#include <iostream>

using namespace std;

int main(){
    
    string name[10];
    int marks[10];

    for(int i = 0; i<10; i++){
        cout << "Enter the name of student " << i+1 << ": ";
        getline(cin, name[i]);

        cout << "Enter the mark of student " << i+1 << ": ";
        cin >> marks[i];
        // getchar();          works great in c but not in cpp
        cin.ignore();
    }

    return 0;
}