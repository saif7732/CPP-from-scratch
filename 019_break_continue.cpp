#include <iostream>

using namespace std;

int main(){
    
    cout << endl << "===========This is the odd serial=============" << endl << endl;
   
    for (int i = 0; i < 20; i++)
    {
        if(i%2==0){
            continue;
        }
        cout << i << ". Hello world" << endl;
    }
    cout << endl << "===========This is the even serial=============" << endl << endl;
    
    for (int i = 0; i < 20; i++)
    {
        if(i%2==1){
            continue;
        }
        cout << i << ". Hello world" << endl;
    }

    cout << endl << "==========Thid loop will not print after 10th iteration=========" << endl << endl;

    for (int i = 0; i < 20; i++)
    {
        if(i==11){
            break;
        }
        cout << i << ". Hello world" << endl;
    }

    return 0;
}