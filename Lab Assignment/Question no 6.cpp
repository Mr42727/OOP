#include <iostream>
using namespace std;
class Date {
private:
    int month;
    int day;
    int year;
public:
        char separator;
    Date() : month(0), day(0), year(0) {}
    void get_date() {
        cin>>month>>separator>>day>>separator>>year;
    }
    void show_date() {
        cout << month << separator << day << separator << year <<endl;
    }
};

int main() {
    Date d;
     cout << "Enter date in this format (mm/dd/yy): ";
    d.get_date();
    cout<<"Your Entered Date is :";
    d.show_date();
    return 0;
}
