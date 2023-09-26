#include <iostream>
//#include <iomanip>
using namespace std;

class angle {
private:
    int degrees;
    float minutes;
    char direction;
public:
    angle()
	 { 
	 	degrees = 0;
	 	minutes = 0.0;
	  	direction = ' ';
		   }
//    angle(int d, float m, char dir)
//	 {
//	  degrees = d; 
//	  minutes = m; 
//	  direction = dir;
//	   }
    void getAngle() {
        cout << "Enter degrees: ";
        cin >> degrees;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter direction (N/S/E/W): ";
        cin >> direction;
    }
    void showAngle() {
        cout << degrees << '\xF8' << fixed  << minutes << "' " << direction << endl;
    }
};

class ship {
private:
    static int count;
    int serialNumber;
    angle latitude;
    angle longitude;
public:
    ship() { serialNumber = ++count; }
    void getPosition() {
        cout << "Enter latitude: \n";
        latitude.getAngle();
        cout << "Enter longitude:\n ";
        longitude.getAngle();
    }
    void showPosition() {
        cout << "Ship number " << serialNumber << " is located at ";
        latitude.showAngle();
        cout << " and ";
        longitude.showAngle();
    }
};

int ship::count = 0;

int main() {
    ship s1, s2, s3;
    cout << "Enter position for ship number 1:" << endl;
    s1.getPosition();
    cout << "Enter position for ship number 2:" << endl;
    s2.getPosition();
    cout << "Enter position for ship number 3:" << endl;
    s3.getPosition();
    s1.showPosition();
    s2.showPosition();
    s3.showPosition();
    return 0;
}

