#include <iostream> 
using namespace std; 
class queue { 
private: 
    int* arr;       
    int head;       
    int tail;       
    int size;      
    int count;      
public: 
    queue(int s) { 
        size = s; 
        arr = new int[size]; 
        head = 0; 
        tail = -1; 
        count = 0; 
    } 
    ~queue() {      
       delete[] arr; 
    } 
    void put(int value) {    
        if (count == size) { 
            cout << "Queue is full." << endl; 
            return; 
        } 
        tail = (tail + 1) % size; 
        arr[tail] = value; 
        count++; 
    } 
    int get() {    
        if (count == 0) { 
            cout << "Queue is empty." << endl; 
            return -1; 
        } 
        int value = arr[head]; 
        head = (head + 1) % size; 
        count--; 
        return value; 
    } 
}; 
int main() { 
    queue q(5);     
    q.put(10); 
    q.put(0); 
    q.put(30); 
    cout << q.get() << endl;    
    cout << q.get() << endl;   
    q.put(40); 
    q.put(50); 
    cout << q.get() << endl;   
    cout << q.get() << endl;    
    cout << q.get() << endl;     
    cout << q.get() << endl;    
    return 0; 
} 
