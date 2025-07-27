#include <iostream>
#include <math.h>
using namespace std;

class vector{
    int a, b;
    public:
    vector(void);   //constructor declaration
    friend int vectormod(vector o1);
    void showvector();
};

vector :: vector(void){     // default constructor which doesn't allow parameter
    a = 4;
    b = 5;
}

void vector :: showvector(){
    cout << a << "i + " << b << "j" <<endl;
}
int vectormod(vector o1){
    return sqrt(pow(o1.a, 2) + pow(o1.b, 2));
}

int main(){
    
    vector m;

    m.showvector();
   

    return 0;
}