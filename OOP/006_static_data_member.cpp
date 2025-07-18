#include <iostream>
using namespace std;

class employee {
    string name;
    int id;
    int empNo;              // to store each employee's serial number
    static int count;

public:
    void setdata() {
        cout << "Enter the name of employee " << count + 1 << ": ";
        getline(cin, name);
        cout << "Enter the ID of employee " << count + 1 << ": ";
        cin >> id;
        getchar();          // to consume newline character
        empNo = ++count;    // store the employee number
    }

    void showdata() {
        cout << endl << "============ Employee " << empNo << " data ============" << endl;
        cout << "Name of employee " << empNo << " is " << name << endl;
        cout << "ID of employee " << empNo << " is " << id << endl;
    }

    static void showcount() {
        cout << "\nTotal number of employees: " << count << endl;
    }
};

int employee::count = 0;

int main() {
    employee e1, e2, e3;

    e1.setdata();
    e2.setdata();
    e3.setdata();

    e1.showdata();
    e2.showdata();
    e3.showdata();

    employee::showcount(); // Optional: shows total number of employees

    return 0;
}
