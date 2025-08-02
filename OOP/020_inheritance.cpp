#include <iostream>
using namespace std;

// base class
class student_all{
    public:
    string name;
    int id;
    float gpa;
        student_all(string x, int y, float z){
            name = x;
            id = y;
            gpa = z;
        }
        void showstudent_all(){
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "CGPA: " << gpa << endl;
        }
};

// derived class
class student_cse : private student_all{
    string track;
    int year;
    int semester;

    public:
    student_cse(string x, int y, float z, string a, int b, int c) : student_all(x, y, z){
        track = a;
        year = b;
        semester = c;
    }
    void showstudent_cse(){
        showstudent_all();
        cout << "Track: " << track << endl;
        cout << "Year: " << year << endl;
        cout << "Semester: " << semester << endl;
    }
};



int main(){
    
    student_cse s1("Saif", 1007, 3.5, "Cyber Security", 1, 1);
    student_cse s2("Naim", 1008, 3.5, "Machine Learning", 1, 1);

    cout << endl << "------------Record of cse student 1------------" << endl;
    s1.showstudent_cse();
    cout << endl << "------------Record of cse student 2------------" << endl;
    s2.showstudent_cse();
    
    return 0;
}