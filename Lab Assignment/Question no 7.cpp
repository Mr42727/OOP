#include <iostream>
#include <iomanip>
using namespace std;

class angle {
private:
    int deg;
    float min;
    char dir;

public:
    angle(int d, float m, char dr) {
        deg = d;
        min = m;
        dir = dr;
    }

    void set_angle() {
        cout << "Enter degrees: ";
        cin >> deg;
        cout << "Enter min: ";
        cin >> min;
        cout << "Enter direction (N, S, E, W): ";
        cin >> dir;
    }

    void display_angle() {
    	cout<<"Your location is : ";
        cout << deg << '\xF8' << fixed << setprecision(1) << min << "' " << dir << endl;
    }
};

int main() {
    angle myAngle(149, 34.8, 'W'); // initialize angle with constructor
    myAngle.display_angle(); // display initialized angle

    while (true) { // loop to allow user to input any angle value
        angle userAngle(0, 0.0, 'N');
        userAngle.set_angle();
        userAngle.display_angle();
    }

    return 0;
}

