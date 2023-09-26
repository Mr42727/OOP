#include <iostream>
#include <string>
using namespace std;

class employee {
private:
    string name;
    long empnum;
public:
    void getdata() {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee number: ";
        cin >> empnum;
    }
    void putdata() const {
        cout << "Name: " << name << endl;
        cout << "Employee Number: " << empnum << endl;
    }
};

int main() {
    employee emplist[100];
    int n = 0;
    char ch;
    do {
        cout << "Enter employee data for employee #" << n + 1 << endl;
        emplist[n++].getdata();
        cout << "Enter another employee? (y/n): ";
        cin >> ch;
    } while (ch == 'y');

    for (int j = 0; j < n; j++) {
        cout << "\nEmployee #" << j + 1 << endl;
        emplist[j].putdata();
    }

    return 0;
}
