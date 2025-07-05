#include<iostream>
#include<string>
using namespace std;

int main(){

    string name;
    int age;
    float height;
    char grade;
    bool boolean;

    cout << "enter your name: ";
    cin >> name;

    cout << "enter you age: ";
    cin >> age;

    cout << "enter your height: ";
    cin >> height;

    cout << "enter your grade: ";
    cin >> grade;

    cout << "enter boolean: ";
    cin >> boolean;

    cout << "------------------" <<endl;

    cout << "Name: "    <<name   <<endl;
    cout << "Age: "     <<age    <<endl;
    cout << "Height: "  <<height <<endl;
    cout << "Grade: "   <<grade  <<endl;

    if(boolean == 1 || boolean == true){
        cout << "Boolean: True";
    }
    else{
        cout << "Boolean: False";
    }

    return 0;
}