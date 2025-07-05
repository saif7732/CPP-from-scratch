#include <iostream>

using namespace std;

int main(){
    
    int a, b, c;
    int *ptr1 = &a, *ptr2 = &b, *ptr3 = &c;

    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    cout << "Enter value for c: ";
    cin >> c;

    cout << endl << "=======Addresses========" << endl << endl;

    cout << "Address of a: " << ptr1 << endl;
    cout << "Address of b: " << ptr2 << endl;
    cout << "Address of c: " << ptr3 << endl;

    cout << endl << "=======Values========" << endl << endl;

    cout << "Value at a: " << *ptr1 << endl;
    cout << "Value at b: " << *ptr2 << endl;
    cout << "Value at c: " << *ptr3 << endl;

    int **ptr11 = &ptr1;
    int **ptr22 = &ptr2;
    int **ptr33 = &ptr3;

    cout << endl << "=======Addresses of ptr1,2,3========" << endl << endl;

    cout << "Address of ptr1: " << ptr11 << endl;
    cout << "Address of ptr2: " << ptr22 << endl;
    cout << "Address of ptr3: " << ptr33 << endl;

    cout << endl << "=======Values at ptr1,2,3========" << endl << endl;

    cout << "Values at ptr1: " << **ptr11 << endl;
    cout << "Values at ptr2: " << **ptr22 << endl;
    cout << "Values at ptr3: " << **ptr33 << endl;

    return 0;
}