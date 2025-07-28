#include <iostream>
using namespace std;

class vector{
    int a, b;
    public:
        vector(int x, int y);
        void showvector(){
            cout << a << "i + " << b << "j" << endl;
        }
        friend vector vectorsum(vector, vector);
};

vector :: vector(int x, int y){
    a = x;
    b = y;
}
vector vectorsum(vector x, vector y){
    return vector(x.a+y.a, x.b+y.b);
}
int main(){
    
    vector one(4,3), two(12,5);
    vector sum(vectorsum(one, two));

    cout << "Vector one: ";
    one.showvector();
    cout << "Vector two: ";
    two.showvector();

    cout << "Sum of one and two is: ";
    sum.showvector();

    return 0;
}