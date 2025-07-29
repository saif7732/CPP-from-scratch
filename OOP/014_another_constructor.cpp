#include <iostream>
#include <cmath>        // for pow and sqrt function
#include <iomanip>      // for setprecision function
using namespace std;

class point{
    int a, b;
    public:
        void showpoint(){
            cout << "(" << a << ", " << b << ")" << endl;
        }
        point(int, int);    // constructor declaration
        friend float distpoint(point, point);
    };
    
float distpoint(point x, point y){
        return sqrt(pow((x.a - y.a), 2)+pow((x.b - y.b), 2));
    }
point :: point(int x, int y){
    a = x;
    b = y;
}

int main(){
    
    point dhaka(4, 5) , sylhet(7, 10);

    dhaka.showpoint();
    sylhet.showpoint();
    cout << fixed << setprecision(2);   // like .2f in c lang
    cout << "The distance between dhaka and sylhet is: " << distpoint(dhaka, sylhet) <<endl;

    return 0;
}