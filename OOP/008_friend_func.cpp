#include <iostream>
using namespace std;

class complex{
    int a, b;
    public:
        void setdata(int a1, int b1){
            a = a1;
            b = b1;
        }
        void showdata(){
            cout << a <<" + "<<b<<"i" <<endl;
        }
        
        friend complex sumnum(complex m, complex n);
    };

complex sumnum(complex m, complex n){
    complex temp;
        temp.a = m.a + n.a;
        temp.b = m.b + n.b;
        return temp;
};

int main(){
    

    complex c1, c2, c3;

    c1.setdata(2,3);
    c2.setdata(5,6);
    c3 = sumnum(c1,c2);

    c1.showdata();
    c2.showdata();
    c3.showdata();
    
    return 0;
}