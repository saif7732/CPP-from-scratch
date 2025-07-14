#include <iostream>
using namespace std;

class item{
    int itemID[100];
    int itemPrice[100];
    int counter;

    public:
        void initialise(){
            counter = 0;
        }
        void setprice();
        void showprice();
};

void item :: setprice(){
    for(int i = 0; i<100; i++){
        cout << "enter the item " << counter+1 <<"'s id: ";
        cin >> itemID[counter];

        cout << "enter item " << counter+1 << "'s price: ";
        cin >> itemPrice[counter];
        counter++;
    }
}

void item :: showprice(){
    for(int i = 0; i<100; i++){
        cout << "the ID of item " << counter << " is: " << itemID[counter-1] << endl;
        cout << "and item " << counter << "'s price is: " << itemPrice[counter-1] << endl;
    }
}
int main(){
    
    item grocery;

    grocery.initialise();
    grocery.setprice();
    grocery.showprice();

    return 0;
}