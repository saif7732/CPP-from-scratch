#include <iostream>
using namespace std;

class base{
    protected:
        int a;
    private:
        int b;
};

class derived : protected base{
    public: 
        derived(){
            a = 0;
           // b = 0;        b is private and can'tt be inheritted
        }
        derived(int x, int y){
            a = x;
          //  b = y;        b is private and can't be inheritted
        }
        void show(){
            cout << a << endl;
        }
};

int main(){
    
    derived o1(5, 0), o2;

    o1.show();

    return 0;
}