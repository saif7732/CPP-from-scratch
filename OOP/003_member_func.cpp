#include <iostream>
using namespace std;

class binary{
    string name;
    public:
        void read();
        void chk_bin();

};

void binary::read(){
    cout << "Enter a binary number: ";
    cin >> name;
}

void binary::chk_bin(){
    for(int i = 0; i<name.length(); i++){
        if(name.at(i) != '0' && name.at(i) != '1'){
            cout << "The number is not binary" << endl;
            exit(0);
        }  
    }
    cout << "The number is binary" << endl;
}
int main(){
    
    binary one;
    one.read();
    one.chk_bin();

    return 0;
}