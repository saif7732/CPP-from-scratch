#include <iostream>
using namespace std;

class animal{
    private:
        int eye, nose, ear;
    public:
    int hand, leg, mouth;
    
    void getdata(int a,int b,int c);
    void getdata(){
        cout << "The animal has " << eye << " eyes" << endl; 
        cout << "The animal has " << nose << " nose" << endl; 
        cout << "The animal has " << ear << " ear" << endl; 
        cout << "The animal has " << hand << " hand" << endl; 
        cout << "The animal has " << leg << " leg" << endl; 
        cout << "The animal has " << mouth << " mouth" << endl; 
    }
    void setdata(int eye, int nose, int ear);
    // void setdata(int eye1, int nose1, int ear1){
    //     eye=eye1;
    //     nose=nose1;
    //     ear=ear1;
    // }
};

void animal::setdata(int a, int b, int c){
    eye = a;
    nose = b;
    ear = c;
}



int main(){
    
    animal cat;

    cout << "how many hand: ";
    cin >> cat.hand;
    cout << "how many leg: ";
    cin >> cat.leg;
    cout << "how many mouth: ";
    cin >> cat.mouth;

    int eye, nose, ear;

    cout << "how many eye: ";
    cin >> eye;
    cout << "how many nose: ";
    cin >> nose;
    cout << "how many ear: ";
    cin >> ear;

    cat.setdata(eye, nose, ear);
    cat.getdata();

    return 0;
}