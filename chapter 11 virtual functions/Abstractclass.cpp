#include<iostream>
using namespace std;
class A
{
	public:
		virtual void show()
		{
			cout<<"base class";
		}
};
class B : public A
{
	public:
		void show()
		{
			cout<<"derive class B\n";
		}
};
class C : public A
{
	public :
		void show()
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
	ptr->show();//it will show the "derived class b"
	ptr=&obj2;
	ptr->show();//it will show the "derived class c"
	return 0;
}
