#include <iostream>
using namespace std;

const int MAXSIZE = 100;

class Queue {
private:
    int arr[MAXSIZE];
    int head;
    int tail;
public:
    Queue() {
        head = 0;
        tail = 0;
    }
    void put(int x) {
        if (tail == MAXSIZE) {
            tail = 0;
        }
        if (tail == head - 1) {
            cout << "Queue overflow!" << endl;
            return;
        }
        arr[tail] = x;
        tail++;
    }
    int get() {
        if (head == tail) {
            cout << "Queue underflow!" << endl;
            return -1;
        }
        int x = arr[head];
        head++;
        if (head == MAXSIZE) {
            head = 0;
        }
        return x;
    }
};

int main() {
    Queue q;
    q.put(10);
    q.put(20);
    q.put(30);
    cout << q.get() << endl; // 10
    cout << q.get() << endl; // 20
    q.put(40);
    cout << q.get() << endl; // 30
    cout << q.get() << endl; // 40
    cout << q.get() << endl; // Queue underflow!
    return 0;
}
