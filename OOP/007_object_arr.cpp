#include <iostream>
using namespace std;

class employee{
    string name;
    int id;
    public:
        void setdata(){
            cout << "Enter the name of employee: ";
            cin >> name;
            cout << "Enter the id of employee: ";
            cin >> id;
        }
        void getdata(){
            cout << endl<<endl<< "Details of employee" <<endl <<endl;
            cout << "The name of employee is: " << name << endl;
            cout << "The id of employee is: " << id << endl;
        }
};

int main(){
    
    // employee saif, naim, shawon;

    // saif.setdata();
    // saif.getdata();

    employee cse[5];

    for(int i = 0; i<5; i++){
        cse[i].setdata();
    }
    for(int i = 0; i<5; i++){
        cse[i].getdata();
    }

    return 0;
}