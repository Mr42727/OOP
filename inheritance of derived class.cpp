//derived class 
#include<iostream>
using namespace std;
class A
{
	public:
		void showa()
		{
			cout<<"i am in class A"<<endl;
		}
};
class B:public A
{
	public:
		void showb()
		{
			cout<<"i am in derived class B"<<endl;
		}
};
int main()
{
	B b1;
	b1.showa();
	b1.showb();
	return 0;
}
