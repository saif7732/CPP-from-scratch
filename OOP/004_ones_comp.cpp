#include <iostream>
using namespace std;

class binary{
    string num;
    public:
        void read();
        void ones();
        void show();
};

void binary :: read(){
    cout << "Enter your binary num: ";
    cin >> num;
}

void binary :: ones(){
    for(int i = 0; i < num.length(); i++){
        if(num.at(i) == '1'){
            num.at(i) = '0';
        }
        else if(num.at(i) == '0'){
            num.at(i) = '1';
        }
    }
}

void binary :: show(){
    cout << "One's compliment of the binary number is ";
    for(int i = 0; i < num.length(); i++){
        cout << num.at(i);
    }
}
int main(){
    
    binary num;
    num.read();
    num.ones();
    num.show();

    return 0;
}