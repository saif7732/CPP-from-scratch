#include <iostream>

using namespace std;

typedef struct student{
    string name;
    int roll;
    char grade;
} student;

int main(){
    
    student CSE_A[30];

    for(int i = 0; i<5; i++){

        cout << endl << "========Enter details of CSE section A student - " << i+1 <<"=========" <<endl <<endl;
        cout << "Enter the name: ";
        getline(cin, CSE_A[i].name);
        cout << "Enter the roll: ";
        cin >> CSE_A[i].roll;
        cout << "Enter the grade: ";
        cin >> CSE_A[i].grade;
        cin.ignore();
    }

    for(int i=0; i<5; i++){

        cout <<endl << "=======Details of student " << i+1 << "=========" <<endl;

        cout << "Name: " << CSE_A[i].name << endl;
        cout << "Roll: " << CSE_A[i].roll << endl;
        cout << "Grade: " << CSE_A[i].grade << endl;
    }


    return 0;
}