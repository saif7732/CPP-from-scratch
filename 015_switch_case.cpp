#include <iostream>

using namespace std;

int main(){

    int choice;
    cout << "1. Mango:" <<endl;
    cout << "2. Banana:" <<endl;
    cout << "3. Apple:" <<endl;
    cout << "4. Orange:" <<endl;
    cout << "5. Pinapple:" <<endl;
    cout << "6. Jackfruit:" <<endl;

    cout << "Choose one fruit: ";
    cin >> choice;
    
    switch (choice)
    {
    case 1:
        cout << "Great choice, you choose mango";
        break;
    
    case 2:
        cout << "Great choice, you choose banana";
        break;
    
    case 3:
        cout << "Great choice, you choose apple";
        break;
    
    case 4:
        cout << "Great choice, you choose orange";
        break;
    
    case 5:
        cout << "Great choice, you choose pinapple";
        break;
    
    case 6:
        cout << "Great choice, you choose jackfruit";
        break;
    
    default:
        cout << "invalid input";
        break;
    }

    return 0;
}