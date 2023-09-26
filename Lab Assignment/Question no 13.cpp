#include <iostream>
using namespace std;

class Distance {
    private:
        int feet, inches;

    public:
        Distance() : feet(0), inches(0) {}
        Distance(int f, int i) : feet(f), inches(i) {}

        void get_distance() {
            cout << "Enter feet: ";
            cin >> feet;
            cout << "Enter inches: ";
            cin >> inches;
        }

        void show_distance() {
            cout << feet << " feet, " << inches << " inches";
        }

        Distance operator+(Distance d2) {
            int f = feet + d2.feet;
            int i = inches + d2.inches;
            if (i >= 12) {
                f += i / 12;
                i %= 12;
            }
            return Distance(f, i);
        }

        Distance operator/(int divisor) {
            int total_inches = (feet * 12) + inches;
            total_inches /= divisor;
            return Distance(total_inches / 12, total_inches % 12);
        }
};

int main() {
    Distance distances[100];
    int count = 0;

    // Input up to 100 distances
    char choice = 'y';
    while (choice == 'y' && count < 100) {
        distances[count].get_distance();
        count++;
        cout << "Enter another distance? (y/n): ";
        cin >> choice;
    }

    // Calculate the sum of the distances
    Distance sum;
    for (int i = 0; i < count; i++) {
        sum = sum + distances[i];
    }

    // Calculate the average distance
    Distance average = sum / count;

    // Output the average distance
    cout << "The average distance is: ";
    average.show_distance();
    cout << endl;

    return 0;
}

