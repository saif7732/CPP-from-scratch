#include <iostream>
using namespace std;

int count = 0;

class num{
    int a;
    public:
        num(){
            count++;
            cout << "this is the time when constructor called for object" << count << endl;
        }
        ~num(){
            cout << "this is the time when destructor is called for object number" << count <<endl;
            count--;
        }
};

int main(){
    
    num n1;
    {
        cout << "Entering the block" << endl;
        cout << "creating two more objects" << endl;
        num n2, n3;
        cout << "exiting the block" << endl;
    }
    cout << "back to main" << endl;
    return 0;
}