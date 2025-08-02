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
        void setpoint(){
            cin >> a >> b;
        }
        friend float distpoint(point, point);
    };
    
float distpoint(point x, point y){
        return sqrt(pow((x.a - y.a), 2)+pow((x.b - y.b), 2));
    }

int main(){
    
    point dhaka,sylhet;
    //int a, b, a1, b1;

    cout << endl << "===========input part============" << endl;

    cout << "enter x and y of dhaka (e.g. x y): ";
    dhaka.setpoint();
    cout << "enter x and y of sylher (e.g. m n): ";
    sylhet.setpoint();

    cout << endl << "============calculation===========" << endl;
    
    cout << "Coordinate of dhaka is: ";
    dhaka.showpoint();
    cout << "Coordinate of sylher is: ";
    sylhet.showpoint();
    cout << fixed << setprecision(2);   // like .2f in c lang
    cout << "The distance between dhaka and sylhet is: " << distpoint(dhaka, sylhet) <<endl;

    return 0;
}