#include <iostream>
using namespace std;

class time {
private:
    int hours;
    int minutes;
    int seconds;
public:
    time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    void add(time t1, time t2) {
        int totalSeconds = t1.seconds + t2.seconds;
        seconds = totalSeconds % 60;
        int carryOver = totalSeconds / 60;
        
        int totalMinutes = t1.minutes + t2.minutes + carryOver;
        minutes = totalMinutes % 60;
        carryOver = totalMinutes / 60;
        
        hours = t1.hours + t2.hours + carryOver;
    }
};

int main() {
    const time t1(1, 30, 15);

    const time t2(2, 30, 15);
   
    time t3;

    t3.add(t1, t2);
    t3.display();

    return 0;
}
