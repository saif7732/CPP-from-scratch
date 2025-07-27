#include <iostream>
using namespace std;

class y;
class x{
    int a;
    public:
        void setdata(int n){
            a = n;
        }
    friend void sum(x o, y p);
};

class y{
    int b;
    public:
        void setdata(int m){
            b = m;
        }
    friend void sum( x o, y p);
};

void sum(x o1, y o2){
    cout << o1.a + o2.b;
}

int main(){
    
    x a1,b1,c1;
    y a2,b2,c2;

    a1.setdata(5);
    a2.setdata(7);
    sum(a1,a2);

    return 0;
}