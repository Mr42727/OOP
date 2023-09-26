#include<iostream>
using namespace std;
class A{
	public:
		A()
		{
			cout<<"i am constructor\n";
		}
		~A()
		{
			cout<<"i am destructor";
		}
};
int main()
{
	A a1;
	A a2;
	return 0;
}
