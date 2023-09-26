#include <iostream>
using namespace std;
class safearay {
private:
    static const int LIMIT = 100;
    int arr[LIMIT];
public:
    void putel(int index, int value) {
        if (index < 0 || index >= LIMIT) {
            cout << "Index out of range\n";
            return;
        }
        arr[index] = value;
    }
    int getel(int index) const {
        if (index < 0 || index >= LIMIT) {
            cout << "Index out of range\n";
            return 0;
        }
        return arr[index];
    }
};

int main() {
    safearay a;
    a.putel(0, 10);
    a.putel(1, 20);
    a.putel(2, 30);
   	cout << a.getel(1) << '\n'; // output: value at index 1 i.e 20
    cout << a.getel(2) << '\n'; // output: value at index 2 i.e 30
    cout << a.getel(3) << '\n'; // output: Index out of range \n 0
    return 0;
}
