#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int mounth = 0, days;
    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout << "This Calculator can calculate days of a year up to a specific date" << endl<<"Enter days and mounth to count";
    cout << "Enter the mounth 1-12" << endl;
    cin >> mounth;
    if (mounth >= 1 && mounth <= 12)
    {
        if (mounth == 4 || mounth == 6 || mounth == 9 || mounth == 11)
        {
            cout << "Enter days in mount(1-30)" << endl;
            cin >> days;
        }
        else if (mounth == 2)
        {
            cout << "Enter days in mounth(1-28)" << endl;
            cin >> days;
        }
        else if (mounth == 1 || mounth == 3 || mounth == 5 || mounth == 7 || mounth == 8 || mounth == 12)
        {
            cout << "Enter days in mounth(1-31)" << endl;
            cin >> days;
        }
        for (int i = 0; i < mounth - 1; i++)
        {
            sum += arr[i];
        }
        sum += days;
        cout << sum;
    }
}
