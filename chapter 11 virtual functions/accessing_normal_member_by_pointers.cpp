#include<iostream>
using namespace std;
class A
{
	public:
		show()
		{
			cout<<"base class";
		}
};
class B : public A
{
	public:
		show()
		{
			cout<<"derive class B";
		}
};
class C : public A
{
	public :
		show()
		{
			cout<<"derive class c";
		}
};
int main()
{
	B obj;
	C obj2;
	A *ptr;
	ptr=&obj;
	ptr->show();//it will show the "base class"
	ptr=&obj2;
	ptr->show();//it will show the "base class"
	return 0;
}
