#include <iostream>
using namespace std;

class item{
    int itemID[100];
    int itemPrice[100];
    int counter;

    public:
        void setprice();
        void showprice();
        void initCounter(){
            counter = 0;
        }
};

void item :: setprice(){
    
        cout << endl << "===========Item " << counter+1 << "=============" << endl << endl;
        cout << "enter the item " << counter+1 <<"'s id: ";
        cin >> itemID[counter];

        cout << "enter item " << counter+1 << "'s price: ";
        cin >> itemPrice[counter];
        counter++;
    
}

void item :: showprice(){
    for(int i = 0; i<counter; i++){
        cout << endl << "===========showing record of item " << i+1 << "=============" <<endl<<endl;
        cout << "the ID of item " << i+1 << " is: " << itemID[i] << endl;
        cout << "and item " << i+1 << "'s price is: " << itemPrice[i] << endl;
    }
}
int main(){
    
    item grocery;

    grocery.initCounter();
    grocery.setprice();     //
    grocery.setprice();     // takes input for 3 items
    grocery.setprice();     //
    grocery.showprice();

    return 0;
}