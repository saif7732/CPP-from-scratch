#include <iostream>
using namespace std;

class vector{
    int a, b;
    public:
        vector(int x, int y){
            a = x;
            b = y;
        }
        vector(int x){
            a = x;
            b = 0;
        }
        vector(){
            a = 0;
            b = 0;
        }
        void showvector(){
            cout << a << "x + " << b << "y" <<endl;
        }
};

int main(){
    
    vector v1(4, 6), v2(4), v3;

    v1.showvector();
    v2.showvector();
    v3.showvector();

    return 0;
}