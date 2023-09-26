#include <iostream>
using namespace std;
class MyClass {
private:
    static int count; // count of total number of objects created
    int Sr_Num; // serial number of this object
    
public:
    MyClass() {
        count++;
        Sr_Num = count;
    }
    
    int getSr_Num() {
        return Sr_Num;
    }
};

int MyClass::count = 0;

int main() {
    MyClass obj1, obj2, obj3;
    
 	cout << "Object 1's serial number is: " << obj1.getSr_Num() << endl;
    cout << "Object 2's serial number is: " << obj2.getSr_Num() << endl;
   	cout << "Object 3's serial number is: " << obj3.getSr_Num() << endl;
    
    return 0;
}
