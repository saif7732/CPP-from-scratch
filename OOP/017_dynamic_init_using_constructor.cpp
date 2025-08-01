#include <iostream>
using namespace std;

class bankdeposits{
    int principal;
    int year;
    float interestrate;
    float returnvalue;

    public:
        bankdeposits(){
            principal = 0;
            year = 0;
            interestrate = 0;
            returnvalue = 0;
        }

        bankdeposits(int p, int y, float r){
            principal = p;
            year = y;
            interestrate = r;
            returnvalue = principal;

            for(int i = 0; i < year; i++){
                returnvalue = returnvalue * (1 + interestrate);
            }
        }

        bankdeposits(int p, int y, int r){
            principal = p;
            year = y;
            interestrate = (float)r/100;
            returnvalue = principal;

            for(int i = 0; i < year; i++){
                returnvalue = returnvalue * (1 + interestrate);
            }
        }
        void showprofit(){
            cout << "principal amount was: " << principal << endl;
            cout << "returnvalue after " << year << " year is: " << returnvalue << endl;
        }
};

int main(){
    
    bankdeposits b1(100, 1, 0.05f), b2, b3;

    b1.showprofit();

    return 0;
}