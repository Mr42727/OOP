#include<iostream>
using namespace std;

class Distance {
    private:
        int feet;
        int inches;
    public:
        Distance(int f = 0, int i = 0) {
            feet = f;
            inches = i;
        }
        bool operator<=(const Distance& d) {
            if(feet < d.feet) {
                return true;
            } else if(feet == d.feet && inches <= d.inches) {
                return true;
            }
            return false;
        }
};

int main() {
    Distance d1(5, 11);
    Distance d2(6, 2);
    Distance d3(6, 0);

    if(d1 <= d2) {
        cout << "d1 is less than or equal to d2" << endl;
    } else {
        cout << "d1 is greater than d2" << endl;
    }

    if(d2 <= d3) {
        cout << "d2 is less than or equal to d3" << endl;
    } else {
        cout << "d2 is greater than d3" << endl;
    }

    return 0;
}

