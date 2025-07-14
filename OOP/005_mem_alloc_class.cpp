#include <iostream>
using namespace std;

class item{
    int itemID[100];
    int itemPrice[100];

    public:
        void setprice();
        void showprice();
};

void item :: setprice(){
    for(int i = 0; i<100; i++){
        cout << endl << "===========Item " << i+1 << "=============" << endl << endl;
        cout << "enter the item " << i+1 <<"'s id: ";
        cin >> itemID[i];

        cout << "enter item " << i+1 << "'s price: ";
        cin >> itemPrice[i];
    }
}

void item :: showprice(){
    for(int i = 0; i<100; i++){
        cout << endl << "===========showing record of item " << i+1 << "=============" <<endl<<endl;
        cout << "the ID of item " << i+1 << " is: " << itemID[i] << endl;
        cout << "and item " << i+1 << "'s price is: " << itemPrice[i] << endl;
    }
}
int main(){
    
    item grocery;

    grocery.setprice();
    grocery.showprice();

    return 0;
}