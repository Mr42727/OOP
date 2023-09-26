#include <iostream>
using namespace std;
class Stack
{
    private:
    enum{MAX=3};
    int stack[MAX];
    int top;
    public:
    Stack()
    {
        top=-1;
    }
    void push(int var) {
    if (top < MAX-1) 
	{  // Check if stack is not full
        stack[++top] = var;
    } 
	else 
	{
        cout << "Stack overflow, cannot push element " << var << endl;
    }
}
    int pop() {
            if (top >= 0) {  // Check if stack is not empty
                return stack[top--];
            } else {
                cout << "Stack is empty, cannot pop element" << endl;
                return -1;  // Return some default value
            }
        }
    void showdata() 
        {
            for (int i = 0; i <= top; i++) 
            {
                cout << stack[i] << "\n ";
            }
            cout << endl;
        }

};
int main()
{
    Stack  s1;
    s1.push(10);
    s1.push(22);
    s1.push(33);
//    s1.push(67);
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
//    cout<<s1.pop()<<endl;
//    cout<<s1.pop()<<endl;
    s1.showdata();
}
