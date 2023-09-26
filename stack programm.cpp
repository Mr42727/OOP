#include<iostream>
using namespace std;
class stack{
	private:
		enum{MAX=2};
		int st[MAX];
		int top;
		public:
			stack()
			{
				top=-1;
				
			}
		void push(int var)
	 {
         if (top < MAX-1) 
	        {  
             st[++top] = var;
            } 
     	else 
		{
       	 cout << "Stack overflow, cannot push element " << var << endl;
    	}
}
			int pop(){
				
				return st[top--];
				
			}
			int check()
			{
				cout<<st[0];
			}
};
int main()
{
	stack s1;
	s1.push(10);
	s1.push(10);
	s1.push(33);
	cout<<s1.pop();
	cout<<s1.pop();
//	cout<<s1.pop();
//	cout<<s1.pop();
//	s1.check();
	return 0;
}
