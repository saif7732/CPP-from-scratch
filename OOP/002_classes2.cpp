#include <iostream>
using namespace std;

class animal{
    private:
        int eye, nose, ear;
    public:
    int hand, leg, mouth, fur, playful, intelligent;
    
    void getdata(int a,int b,int c);
    void getdata(){
        cout << "The animal has " << eye << " eyes" << endl; 
        cout << "The animal has " << nose << " nose" << endl; 
        cout << "The animal has " << ear << " ear" << endl; 
        cout << "The animal has " << hand << " hand" << endl; 
        cout << "The animal has " << leg << " leg" << endl; 
        cout << "The animal has " << mouth << " mouth" << endl; 
        cout << "The animal has " << fur << " fur" << endl; 
        cout << "The animal has " << mouth << " mouth" << endl; 
    }
    void setdata(int eye, int nose, int ear);
    // void setdata(int eye1, int nose1, int ear1){
    //     eye=eye1;
    //     nose=nose1;
    //     ear=ear1;
    // }

    void check(){
        if(eye == 2 && hand == 2 && nose == 1 && ear == 2 && leg == 2 && mouth == 1 && intelligent == 1 && fur == 0 && playful == 0){
            cout << "The species is human" << endl;
        }
        else if(eye == 2 && hand == 0 && nose == 1 && ear == 2 && leg == 4 && mouth == 1 && intelligent == 0 && fur == 1 && playful == 1){
            cout << "The species can be cat/dog/cow....." << endl;
        }
        else
            cout << "Not recognised" << endl;
    }
};

void animal::setdata(int a, int b, int c){
    eye = a;
    nose = b;
    ear = c;
}



int main(){
    
    animal random;

    cout << "how many hand: ";
    cin >> random.hand;
    cout << "how many leg: ";
    cin >> random.leg;
    cout << "how many mouth: ";
    cin >> random.mouth;
    cout << "does it have fur: ";
    cin >> random.fur;
    cout << "is it intelligent: ";
    cin >> random.intelligent;
    cout << "is it playful: ";
    cin >> random.playful;

    int eye, nose, ear;

    cout << "how many eye: ";
    cin >> eye;
    cout << "how many nose: ";
    cin >> nose;
    cout << "how many ear: ";
    cin >> ear;

    random.setdata(eye, nose, ear);
    
    random.check();

    return 0;
}