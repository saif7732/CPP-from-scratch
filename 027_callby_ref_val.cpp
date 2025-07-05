#include <iostream>
using namespace std;

void swap(int *a, int *b);
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    
    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    cout << "====================" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    swap(&a,&b);    //pass addresses

    cout << "The value of a and b swapped" << endl << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}