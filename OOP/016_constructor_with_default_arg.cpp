#include <iostream>
using namespace std;

class vector{
    int a, b, c;
    public:
        void showvector();
        vector(int x = 0, int y = 0, int z = 0);
};

void vector :: showvector(){
    cout << a << "i + " << b << "j + " << c << "k" << endl;
}

vector :: vector(int x, int y, int z){
            a = x;
            b = y;
            c = z;
}

int main(){
    
    vector v1(4, 5, 6), v2(6, 7), v3(1);

    cout << "Vector 1: ";
    v1.showvector();
    cout << "Vector 2: ";
    v2.showvector();
    cout << "Vector 3: ";
    v3.showvector();

    return 0;
}